FROM centos7:latest
# Docker Build Arguments
ARG RESTY_VERSION="1.9.7.4"
ARG RESTY_OPENSSL_VERSION="1.0.2e"
ARG RESTY_PCRE_VERSION="8.38"
ARG RESTY_CONFIG_OPTIONS="--user=www --group=www --prefix=/usr/local/openresty --conf-path=/etc/openresty/nginx.conf --pid-path=/var/run/nginx.pid --error-log-path=/var/log/nginx/error.log --with-luajit --with-http_flv_module --with-http_gzip_static_module --with-http_mp4_module --with-http_image_filter_module --with-http_stub_status_module --with-http_ssl_module --with-http_realip_module --with-debug --with-http_geoip_module --with-http_drizzle_module --with-http_iconv_module --add-module=../module/nginx_concat_module --add-module=../module/nginx_mogilefs_module-1.0.4 --add-module=../module/nginx-rtmp-module-master --add-module=../module/ngx_cache_purge-2.3 --add-module=../module/ngx_mongo-master --add-module=../module/fastdfs-nginx-module/src"
RUN yum install -y readline readline-devel GeoIP GeoIP-devel ruby intltool libcurl-devel
COPY module /tmp 
#安装依赖库
#COPY drizzle7-2011.07.21.tar.gz /tmp
#COPY yajl.tar.gz /tmp
RUN \
    cd /tmp \
#安装openssl
    && curl -fSL https://www.openssl.org/source/openssl-${RESTY_OPENSSL_VERSION}.tar.gz -o openssl-${RESTY_OPENSSL_VERSION}.tar.gz \
    && tar xzf openssl-${RESTY_OPENSSL_VERSION}.tar.gz \
    && cd openssl-${RESTY_OPENSSL_VERSION} \
    && ./config --prefix=/usr/local/openssl \
    && make \
    && make install \
    && cd /tmp \
#安装drizzle-lib1.0
    && wget http://agentzh.org/misc/nginx/drizzle7-2011.07.21.tar.gz \
    && tar zxvf drizzle7-2011.07.21.tar.gz \
    && cd drizzle7-2011.07.21 \
    && ./configure --without-server \
    && make libdrizzle-1.0 \
    && make install-libdrizzle-1.0 \
    && ln -s /usr/local/lib/libdrizzle.so.1 /usr/lib/libdrizzle.so.1 \
    && ln -s /usr/local/lib/libdrizzle.so.1 /usr/lib64/libdrizzle.so.1 \
	#安装yajl
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
    && curl -fSL https://ftp.csx.cam.ac.uk/pub/software/programming/pcre/pcre-${RESTY_PCRE_VERSION}.tar.gz -o pcre-${RESTY_PCRE_VERSION}.tar.gz \
    && tar xzf pcre-${RESTY_PCRE_VERSION}.tar.gz \
    && cd pcre-${RESTY_PCRE_VERSION} \
    && ./configure
    && make \
    && make install \
    && cd /tmp \
	#安装openresty
    && curl -fSL https://openresty.org/download/openresty-${RESTY_VERSION}.tar.gz -o openresty-${RESTY_VERSION}.tar.gz \
    && tar xzf openresty-${RESTY_VERSION}.tar.gz \
    && cd /tmp/openresty-${RESTY_VERSION} \
    && ./configure ${RESTY_CONFIG_OPTIONS} \
    && gmake \
    && gmake install \
    && cd /tmp \
    && rm -rf \
        openssl-${RESTY_OPENSSL_VERSION} \
        openssl-${RESTY_OPENSSL_VERSION}.tar.gz \
        openresty-${RESTY_VERSION}.tar.gz openresty-${RESTY_VERSION} \
        pcre-${RESTY_PCRE_VERSION}.tar.gz pcre-${RESTY_PCRE_VERSION} \
	drizzle7-2011.07.21 drizzle7-2011.07.21.tar.gz \
	lloyd-yajl-2.0.1-0-gf4b2b1a.tar.gz lloyd-yajl-f4b2b1a \
	lloyd-yajl-2.0.1-0 \
   && yum clean all \
   && ln -s /usr/local/lib/libiconv.so.2.5.0 /usr/lib64/libiconv.so.2 \
   && ln -s /usr/local/lib/libiconv.so.2.5.0 /usr/lib/libiconv.so.2 \
   && ln -s /usr/local/openresty/nginx/sbin/nginx /usr/local/bin/  
WORKDIR /usr/local/openresty
RUN rm -v /etc/openresty/nginx.conf
ADD nginx.conf /etc/openresty/nginx/
RUN rm -v /etc/openresty/nginx/conf.d
ADD conf.d /etc/openresty/nginx/conf.d
RUN echo "daemon off;" >> /etc/openresty/nginx.conf
EXPOSE 80 
ENV PATH /usr/local/nginx/bin:$PATH 
VOLUME [ "/usr/local/openresty/html"]
CMD nginx
