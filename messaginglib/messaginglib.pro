QT += core network
QT -= gui widgets

DBLIBS +=

PROJECT_ROOT = ../..

DEFINES += MESSAGINGLIB_LIBRARY

SOURCES += \
    dbmsgbase.cpp \
    dbmsgfieldbase.cpp \
    messages/mymessage.cpp

HEADERS += messaginglib_global.h \
    dbmsgbase.h \
    dbmsgfield.h \
    dbmsgfieldbase.h \
    dbmsgmacros.h \
    messages/mymessage.h

FORMS +=

RESOURCES +=

TRANSLATIONS +=

include($${PROJECT_ROOT}/lib.pri)
