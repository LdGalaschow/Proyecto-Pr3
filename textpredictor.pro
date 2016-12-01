#-------------------------------------------------
#
# Project created by QtCreator 2016-11-21T20:54:10
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = textpredictor
TEMPLATE = app
CXX += /usr/bin/clang++-3.8

SOURCES += main.cpp\
        mainwindow.cpp \
    texteditpredictor.cpp \
    ventanapredictor.cpp \
    vbuscar.cpp

HEADERS  += mainwindow.h \
    texteditpredictor.h \
    ventanapredictor.h \
    dictnode.H \
    vbuscar.h

FORMS    += mainwindow.ui \
    ventanapredictor.ui \
    vbuscar.ui

WARN = -Wall -Wextra -Wcast-align -Wno-sign-compare -Wno-write-strings \
       -Wno-parentheses

CXX += /usr/bin/clang++-3.8

CFLAGS += -DDEBUG -D_GLIBCXX__PTHREADS -g $(OPT) -std=c++14 $(WARN) -Wno-invalid-source-encoding

CXXFLAGS += -DDEBUG -D_GLIBCXX__PTHREADS -g $(OPT) -std=c++14 $(WARN) -Wno-invalid-source-encoding

INCLUDEPATH += /home/jesus/aleph

LIBS += -L/home/jesus/aleph -lstdc++ -lpthread -lnana -lasprintf -lmpfr -lgmpxx -lgsl -lgslcblas -lgmp -lm -lX11 -lc
