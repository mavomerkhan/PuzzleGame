#-------------------------------------------------
#
# Project created by QtCreator 2013-11-1003:54:51
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PuzzleGame
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dialog.cpp \
    help.cpp

HEADERS  += mainwindow.h \
    dialog.h \
    help.h

FORMS    += mainwindow.ui \
    dialog.ui \
    help.ui
