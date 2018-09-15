QT += core testlib
QT -= gui widgets

DBLIBS += messaginglib

#this makes install step fail
# CONFIG += testcase

PROJECT_ROOT = ../..

SOURCES += tst_messagingtest.cpp

HEADERS +=

FORMS +=

RESOURCES +=

TRANSLATIONS +=

include($${PROJECT_ROOT}/app.pri)
