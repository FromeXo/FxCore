FROM debian:12.11 AS base

# Build args
ARG EXT_NAME=ext

RUN apt update -y && apt upgrade -y && apt install -y \
    build-essential autoconf automake libtool bison valgrind \
    make pkg-config re2c libxml2-dev libsqlite3-dev flex gdb \
    procps inotify-tools vim locales curl wget git \
    liburiparser-dev liburiparser1

# fix locale
RUN echo "en_US.UTF-8 UTF-8" > /etc/locale.gen \
    && locale-gen en_US.UTF-8 \
    && update-locale LANG=en_US.UTF-8

# ENV
ENV LANG="en_US.UTF-8"
ENV LANGUAGE="en_US:en"
ENV LC_ALL="en_US.UTF-8"
ENV EXT_NAME=${EXT_NAME}
ENV PATH="/php/php-debug/bin:$PATH"

# Get PHP
# /php/php-debug - The debug build of PHP.
# /php/php-src   - Source files used to build PHP.
COPY --from=fromexo/extforge-phpdebug:php-8.2.0 /php /php

# Add extension to php.ini
RUN echo "\nextension=${EXT_NAME}.so" >> /php/php-debug/etc/php.ini

FROM base AS builder

# Generate ext skeleton
RUN php /php/php-src/ext/ext_skel.php --ext ${EXT_NAME} --dir /php/

RUN mv /php/${EXT_NAME} /php/src

FROM base AS runner

COPY --from=builder /php/src /php/src
COPY ./includes/cmd.sh /root/cmd.sh
RUN chmod +x /root/cmd.sh

WORKDIR /php/src

EXPOSE 80
EXPOSE 443

CMD [ "/root/cmd.sh" ]