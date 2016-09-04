#-------------------------------------------------
#
# Project created by QtCreator 2016-05-14T19:37:51
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Monopolio_HND
TEMPLATE = app


SOURCES += main.cpp\
        opciones.cpp \
    juego.cpp \
    game.cpp \
    player.cpp \
    properties.cpp \
    bank.cpp \
    carta.cpp \
    stations.cpp \
    utilities.cpp

HEADERS  += opciones.h \
    juego.h \
    game.h \
    player.h \
    properties.h \
    bank.h \
    carta.h \
    stations.h \
    utilities.h

FORMS    += opciones.ui \
    juego.ui
