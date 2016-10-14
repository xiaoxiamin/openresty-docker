FROM centos:7

  #安装依赖
RUN buildDeps='make cmake automake intltool gcc gcc-c++ ruby git \
	readline-devel GeoIP-devel libcurl-devel libgcrypt-devel pam-devel libuuid-devel zlib-devel \
	boost-devel pcre-devel protobuf-compiler protobuf-devel openssl-devel gd-devel \
	yajl-devel libunwind-devel wget which file unzip' \
    && runDeps='GeoIP openssl gd yajl libunwind gperftools openldap-devel' \
    && yum install -y ${buildDeps} ${runDeps} \
    && cd /tmp \
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
    && sed -i 's/load_fdfs_parameters_from_tracker=true/load_fdfs_parameters_from_tracker=false/g' /etc/fdfs/mod_fastdfs.conf \
    && popd \
  #下载所需 nginx 模块
    && echo "Downloading *-nginx-module..." \
    && pushd . \
    && mkdir -p module \
    && cd module \
    && git clone https://github.com/happyfish100/fastdfs-nginx-module.git \
    #&& git clone https://github.com/cep21/healthcheck_nginx_upstreams.git \
    && git clone https://github.com/arut/nginx-rtmp-module.git \
    && git clone https://github.com/alibaba/nginx-http-concat.git \
    && git clone https://github.com/vkholodkov/nginx-mogilefs-module.git \
    && git clone https://github.com/FRiCKLE/ngx_cache_purge.git \
    && git clone https://github.com/simpl/ngx_mongo.git \
    && popd \
  #安装openresty
    && RESTY_VERSION="1.9.7.4" \
    && echo "Installing openresty-${RESTY_VERSION}..." \
    && pushd . \
    && curl -fSL https://openresty.org/download/openresty-${RESTY_VERSION}.tar.gz -o openresty-${RESTY_VERSION}.tar.gz \
    && tar xzf openresty-${RESTY_VERSION}.tar.gz \
    && cd openresty-${RESTY_VERSION} \
    && ./configure --user=nobody --group=nobody \
	--prefix=/usr/local/openresty \
	--conf-path=/etc/openresty/nginx.conf \
	--pid-path=/var/run/nginx.pid \
	--error-log-path=/var/log/nginx/error.log \
	--with-luajit \
	--with-http_flv_module \
	--with-http_gzip_static_module \
	--with-http_mp4_module \
	--with-http_image_filter_module \
	--with-http_stub_status_module \
	--with-http_ssl_module \
	--with-http_realip_module \
	--with-debug \
	--with-http_geoip_module \
	--with-http_drizzle_module \
	--with-http_iconv_module \
	--add-module=../module/nginx-http-concat \
	--add-module=../module/nginx-mogilefs-module \
	--add-module=../module/nginx-rtmp-module \
	--add-module=../module/ngx_cache_purge \
	--add-module=../module/ngx_mongo \
	--add-module=../module/fastdfs-nginx-module/src\
    && gmake \
    && gmake install \
  #打扫环境
    && echo "Cleaning ..." \
    && rm -rf module \
    && ls -al /tmp \
    && yum remove -y ${buildDeps} \
    && yum autoremove -y \
    && yum clean all \
    && ln -s /usr/local/openresty/nginx/sbin/nginx /usr/local/bin/ \
    && rm -rf /etc/openresty/nginx.conf \
    && rm -rf /etc/openresty/conf.d \
    && mkdir /etc/openresty/conf.d \
    && ln -sf /dev/stderr /var/log/nginx/error.log \
    && ln -sf /dev/stdout /var/log/nginx/access.log

WORKDIR /usr/local/openresty
ADD nginx.conf /etc/openresty/nginx.conf
EXPOSE 80 
#ENV PATH /usr/local/nginx/bin:$PATH 
CMD nginx
