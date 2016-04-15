#-------------------------------------------------
#
# Project created by QtCreator 2016-04-08T10:40:55
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = FootballManager
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    gameevent.cpp \
    team.cpp \
    player.cpp

HEADERS  += mainwindow.h \
    gameevent.h \
    team.h \
    player.h

FORMS    += mainwindow.ui
