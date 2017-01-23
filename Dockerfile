FROM    kyma/docker-nginx
#FROM    jwilder/nginx-proxy

RUN { \
    echo 'http { add_header "X-Clacks-Overhead" "GNU Terry Pratchett"; }'; \
} > /etc/nginx/conf.d/terry.conf

ADD     www-files/     /var/www
CMD     'nginx'
