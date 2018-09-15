QT += core network
QT -= gui widgets

DBLIBS += messaginglib

TARGET = messagingserver

PROJECT_ROOT = ../..

SOURCES += main.cpp

HEADERS +=

FORMS +=

RESOURCES +=

TRANSLATIONS +=

include($${PROJECT_ROOT}/app.pri)
