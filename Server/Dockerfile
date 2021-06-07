FROM postgres:latest
ARG DEBIAN_FRONTEND=noninteractive

RUN apt-get update

EXPOSE 33333

RUN apt -y install build-essential qt5-default qtbase5-dev-tools qt5-qmake libqt5sql5-psql

COPY . /

ADD init.sql /docker-entrypoint-initdb.d

RUN qmake echoServer_351.pro

RUN make