QT += testlib
QT += network
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

SOURCES +=  tst_unittest.cpp \
    ../CCPS/functions.cpp \
    ../CCPS/mytcpclient.cpp

HEADERS += \
    ../CCPS/functions.h \
    ../CCPS/mytcpclient.h
