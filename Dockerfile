FROM centos:7
# Docker Build Arguments
ARG RESTY_VERSION="1.9.7.4"
ARG RESTY_CONFIG_OPTIONS="--user=nobody --group=nobody --prefix=/usr/local/openresty --conf-path=/etc/openresty/nginx/nginx.conf --pid-path=/var/run/nginx.pid --error-log-path=/var/log/nginx/error.log --with-luajit --with-http_flv_module --with-http_gzip_static_module --with-http_mp4_module --with-http_image_filter_module --with-http_stub_status_module --with-http_ssl_module --with-http_realip_module --with-debug --with-http_geoip_module --with-http_drizzle_module --with-http_iconv_module --add-module=../module/nginx_concat_module --add-module=../module/nginx_mogilefs_module-1.0.4 --add-module=../module/nginx-rtmp-module-master --add-module=../module/ngx_cache_purge-2.3 --add-module=../module/ngx_mongo-master --add-module=../module/fastdfs-nginx-module-master/src"

RUN yum install -y readline readline-devel GeoIP GeoIP-devel ruby intltool libcurl-devel \
	make gmake cmake gcc gcc-c++ \
	libgcrypt-devel pam-devel libuuid-devel zlib-devel boost-devel automake openldap-devel \
	pcre-devel protobuf-compiler protobuf-devel openssl openssl-devel gd gd-devel \
	yajl yajl-devel libunwind libunwind-devel gperftools \
	wget which file unzip

COPY module /tmp/module 

#安装依赖库
RUN cd /tmp \
  #安装drizzle-lib1.0
    && echo "Installing libdrizzle-1.0..." \
    && pushd . \
    && wget http://agentzh.org/misc/nginx/drizzle7-2011.07.21.tar.gz \
    && tar zxvf drizzle7-2011.07.21.tar.gz \
    && cd drizzle7-2011.07.21 \
    && ./configure --without-server \
    && make libdrizzle-1.0 \
    && make install-libdrizzle-1.0 \
    && ln -s /usr/local/lib/libdrizzle.so.1 /usr/lib/libdrizzle.so.1 \
    && ln -s /usr/local/lib/libdrizzle.so.1 /usr/lib64/libdrizzle.so.1 \
    && popd \
    && rm -rf drizzle7* \
  #安装 libfastcommon
    && echo "Installing libfastcommon..." \
    && pushd . \
    && wget -O libfastcommon-master.zip https://github.com/happyfish100/libfastcommon/archive/master.zip \
    && unzip libfastcommon-master.zip \
    && cd libfastcommon-master \
    && ./make.sh \
    && ./make.sh install \
    && popd \
    && rm -rf libfastcommon* \
  #安装FastDFS
    && echo "Installing FastDFS..." \
    && pushd . \
    && wget -O fastdfs-5.05.tar.gz  https://github.com/happyfish100/fastdfs/archive/V5.05.tar.gz \
    && tar -zxvf fastdfs-5.05.tar.gz \
    && cd fastdfs-5.05/ \
    && ./make.sh \
    && ./make.sh install \
    && mkdir -p /etc/fdfs/ && cp conf/http.conf conf/mime.types /etc/fdfs/ \
    && popd \
    && rm -rf fastdfs-5.05* \
  #下载 fastdfs-nginx-module
    && echo "Downloading fastdfs-nginx-module..." \
    && pushd . \
    && wget -O fastdfs-nginx-module-master.zip https://github.com/happyfish100/fastdfs-nginx-module/archive/master.zip \
    && unzip fastdfs-nginx-module-master.zip -d ./module/ \
    && mkdir -p /etc/fdfs/ && cp ./module/fastdfs-nginx-module-master/src/mod_fastdfs.conf /etc/fdfs/ \
    && popd \
  #安装openresty
    && echo "Installing openresty-${RESTY_VERSION}..." \
    && pushd . \
    && curl -fSL https://openresty.org/download/openresty-${RESTY_VERSION}.tar.gz -o openresty-${RESTY_VERSION}.tar.gz \
    && tar xzf openresty-${RESTY_VERSION}.tar.gz \
    && cd openresty-${RESTY_VERSION} \
    && ./configure ${RESTY_CONFIG_OPTIONS} \
    && gmake \
    && gmake install \
    && popd \
    && rm -rf openresty-* \
  #打扫环境
    && echo "Cleaning ..." \
    && ls -al /tmp \
    && yum clean all \
    && ln -s /usr/local/openresty/nginx/sbin/nginx /usr/local/bin/  
WORKDIR /usr/local/openresty
RUN rm -vf /etc/openresty/nginx.conf
ADD nginx.conf /etc/openresty/nginx/
RUN rm -vf /etc/openresty/nginx/conf.d
ADD conf.d /etc/openresty/nginx/conf.d
RUN echo "daemon off;" >> /etc/openresty/nginx/nginx.conf
EXPOSE 80 
ENV PATH /usr/local/nginx/bin:$PATH 
VOLUME [ "/usr/local/openresty/html"]
CMD nginx
