QT += testlib
QT -= gui
QT += network
QT += sql

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

SOURCES +=  tst_unittest.cpp \
    ../Server/function.cpp \
    ../Server/mytcpserver.cpp

HEADERS += \
    ../Server/function.h \
    ../Server/mytcpserver.h
