QT += core network
QT -= gui widgets

DBLIBS += messaginglib

TARGET = messagingserver

PROJECT_ROOT = ../..

SOURCES += main.cpp \
    client.cpp \
    server.cpp

HEADERS += \
    client.h \
    server.h

FORMS +=

RESOURCES +=

TRANSLATIONS +=

include($${PROJECT_ROOT}/app.pri)
