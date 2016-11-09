#-------------------------------------------------
#
# Project created by QtCreator 2016-08-03T17:58:04
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ChildOfRandom
TEMPLATE = app


SOURCES += main.cpp\
        alethiometr.cpp \
    meaningsymbol.cpp \
    symbolcontrolwidget.cpp

HEADERS  += alethiometr.h \
    meaningsymbol.h \
    symbolcontrolwidget.h

FORMS    += alethiometr.ui \
    symbolcontrolwidget.ui

RESOURCES += \
    icons.qrc
