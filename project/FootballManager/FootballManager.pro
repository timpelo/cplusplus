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
    team.cpp \
    player.cpp \
    mainmenu.cpp \
    matchwindow.cpp \
    teamwindow.cpp \
    marketwindow.cpp

HEADERS  += mainwindow.h \
    team.h \
    player.h \
    mainmenu.h \
    matchwindow.h \
    teamwindow.h \
    marketwindow.h

FORMS    += mainwindow.ui \
    mainmenu.ui \
    match.ui \
    teamwindow.ui \
    marketwindow.ui
