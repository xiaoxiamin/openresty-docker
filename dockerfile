FROM centos:7
# Docker Build Arguments
ARG RESTY_VERSION="1.9.7.4"
ARG RESTY_OPENSSL_VERSION="1.0.2e"
ARG RESTY_PCRE_VERSION="8.38"
ARG RESTY_CONFIG_OPTIONS="--user=nobody --group=nobody --prefix=/usr/local/openresty --conf-path=/etc/openresty/nginx/nginx.conf --pid-path=/var/run/nginx.pid --error-log-path=/var/log/nginx/error.log --with-luajit --with-http_flv_module --with-http_gzip_static_module --with-http_mp4_module --with-http_image_filter_module --with-http_stub_status_module --with-http_ssl_module --with-http_realip_module --with-debug --with-http_geoip_module --with-http_drizzle_module --with-http_iconv_module --add-module=../module/nginx_concat_module --add-module=../module/nginx_mogilefs_module-1.0.4 --add-module=../module/nginx-rtmp-module-master --add-module=../module/ngx_cache_purge-2.3 --add-module=../module/ngx_mongo-master --add-module=../module/fastdfs-nginx-module-master/src"

RUN yum install -y readline readline-devel GeoIP GeoIP-devel ruby intltool libcurl-devel \
	make gmake cmake gcc gcc-c++ \
	libgcrypt-devel pam-devel libuuid-devel zlib-devel boost-devel automake openldap-devel \
	pcre-devel protobuf-compiler protobuf-devel openssl openssl-devel gd gd-devel \
	wget which file unzip

COPY module /tmp/module 

#安装依赖库
#COPY drizzle7-2011.07.21.tar.gz /tmp
#COPY yajl.tar.gz /tmp
RUN \
    cd /tmp \
#安装openssl
    && echo "Installing openssl-${RESTY_OPENSSL_VERSION}..." \
    && curl -fSL https://www.openssl.org/source/openssl-${RESTY_OPENSSL_VERSION}.tar.gz -o openssl-${RESTY_OPENSSL_VERSION}.tar.gz \
    && tar xzf openssl-${RESTY_OPENSSL_VERSION}.tar.gz \
    && cd openssl-${RESTY_OPENSSL_VERSION} \
    && ./config --prefix=/usr/local/openssl \
    && make \
    && make install \
    && cd /tmp \
#安装drizzle-lib1.0
    && echo "Installing drizzle-lib..." \
    && wget http://agentzh.org/misc/nginx/drizzle7-2011.07.21.tar.gz \
    && tar zxvf drizzle7-2011.07.21.tar.gz \
    && cd drizzle7-2011.07.21 \
    && ./configure --without-server \
    && make libdrizzle-1.0 \
    && make install-libdrizzle-1.0 \
    && ln -s /usr/local/lib/libdrizzle.so.1 /usr/lib/libdrizzle.so.1 \
    && ln -s /usr/local/lib/libdrizzle.so.1 /usr/lib64/libdrizzle.so.1 \
	#安装yajl
    && echo "Installing yajl..." \
    && cd /tmp \
    && wget http://pkgs.fedoraproject.org/repo/pkgs/yajl/lloyd-yajl-2.0.1-0-gf4b2b1a.tar.gz/df6a751e7797b9c2182efd91b5d64017/lloyd-yajl-2.0.1-0-gf4b2b1a.tar.gz \
    && tar zxvf lloyd-yajl-2.0.1-0-gf4b2b1a.tar.gz \
    && cd lloyd-yajl-f4b2b1a \
    && ./configure \
    && make \
    && make install \
    && ln -s /usr/local/lib/libyajl.so.2 /usr/lib/libyajl.so.2 \
    && ln -s /usr/local/lib/libyajl.so.2 /usr/lib64/libyajl.so.2 \
    && cd /tmp \
    # 安装pcre
    && echo "Installing pcre-${RESTY_PCRE_VERSION}..." \
    && curl -fSL https://ftp.csx.cam.ac.uk/pub/software/programming/pcre/pcre-${RESTY_PCRE_VERSION}.tar.gz -o pcre-${RESTY_PCRE_VERSION}.tar.gz \
    && tar zxvf pcre-${RESTY_PCRE_VERSION}.tar.gz \
    && cd pcre-${RESTY_PCRE_VERSION} \
    && ./configure \
    && make \
    && make install \
    && cd /tmp \
    # 安装 FastDFS
    && echo "Installing FastDFS..." \
    && echo "  Installing libfastcommon..." \
    && wget https://github.com/happyfish100/libfastcommon/archive/master.zip \
    && unzip master.zip \
    && cd libfastcommon-master \
    && ./make.sh \
    && ./make.sh install \
    && cd /tmp \
    # 安装FastDFS
    && echo "  Installing FastDFS..." \
    && wget  https://github.com/happyfish100/fastdfs/archive/V5.05.tar.gz \
    && tar -zxvf V5.05.tar.gz \
    && cd fastdfs-5.05/ \
    && ./make.sh \
    && ./make.sh install \
    && mkdir -p /etc/fdfs/ && cp conf/http.conf conf/mime.types /etc/fdfs/ \
    && cd /tmp \
    # 下载 fastdfs-nginx-module
    && echo "Downloading fastdfs-nginx-module..." \
    && wget -O fastdfs-nginx-module.master.zip https://github.com/happyfish100/fastdfs-nginx-module/archive/master.zip \
    && unzip fastdfs-nginx-module.master.zip -d ./module/ \
    && mkdir -p /etc/fdfs/ && cp ./module/fastdfs-nginx-module-master/src/mod_fastdfs.conf /etc/fdfs/ \
    && cd /tmp \
    #安装openresty
    && echo "Installing openresty-${RESTY_VERSION}..." \
    && curl -fSL https://openresty.org/download/openresty-${RESTY_VERSION}.tar.gz -o openresty-${RESTY_VERSION}.tar.gz \
    && tar xzf openresty-${RESTY_VERSION}.tar.gz \
    && cd /tmp/openresty-${RESTY_VERSION} \
    && pwd \
    && ls -al \
    && echo "listing ../" \
    && ls -al ../ \
    && ./configure ${RESTY_CONFIG_OPTIONS} \
    && gmake \
    && gmake install \
    && cd /tmp \
    && echo "Cleaning ..." \
    && rm -rf \
        openssl-${RESTY_OPENSSL_VERSION} \
        openssl-${RESTY_OPENSSL_VERSION}.tar.gz \
        openresty-${RESTY_VERSION}.tar.gz openresty-${RESTY_VERSION} \
        pcre-${RESTY_PCRE_VERSION}.tar.gz pcre-${RESTY_PCRE_VERSION} \
	drizzle7-2011.07.21 drizzle7-2011.07.21.tar.gz \
	lloyd-yajl-2.0.1-0-gf4b2b1a.tar.gz lloyd-yajl-f4b2b1a \
	lloyd-yajl-2.0.1-0 \
   && yum clean all \
   && ls -al /etc/openresty/ \
   && ls -al /usr/local/openresty \
   && ln -s /usr/local/lib/libiconv.so.2.5.0 /usr/lib64/libiconv.so.2 \
   && ln -s /usr/local/lib/libiconv.so.2.5.0 /usr/lib/libiconv.so.2 \
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
