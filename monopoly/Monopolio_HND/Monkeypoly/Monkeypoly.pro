#-------------------------------------------------
#
# Project created by QtCreator 2016-05-27T14:58:00
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Monkeypoly
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    carta.cpp \
    properties.cpp \
    stations.cpp \
    utilities.cpp \
    player.cpp \
    bank.cpp

HEADERS  += mainwindow.h \
    carta.h \
    properties.h \
    stations.h \
    utilities.h \
    player.h \
    bank.h

FORMS    += mainwindow.ui
