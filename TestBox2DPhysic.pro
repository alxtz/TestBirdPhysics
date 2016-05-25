#-------------------------------------------------
#
# Project created by QtCreator 2016-05-20T08:29:39
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TestBox2DPhysic
TEMPLATE = app


SOURCES += main.cpp\
        MainWindow.cpp \
    GameView.cpp \
    GameScene.cpp \
    GameItem.cpp \
    Tako.cpp \
    Board.cpp

HEADERS  += MainWindow.h \
    GameView.h \
    GameScene.h \
    GameItem.h \
    Tako.h \
    Board.h

FORMS    += MainWindow.ui

INCLUDEPATH += /usr/local/lib
LIBS += -L /usr/local/lib/
LIBS += -lBox2D
