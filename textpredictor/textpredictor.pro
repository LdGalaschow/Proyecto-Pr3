#-------------------------------------------------
#
# Project created by QtCreator 2016-11-21T20:54:10
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = textpredictor
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    texteditpredictor.cpp \
    ventanapredictor.cpp \
    vbuscar.cpp \
    creditos.cpp \
    licencia.cpp \
    vmostrar.cpp

HEADERS  += mainwindow.h \
    texteditpredictor.h \
    ventanapredictor.h \
    dictnode.H \
    vbuscar.h \
    creditos.h \
    licencia.h \
    vmostrar.h

FORMS    += mainwindow.ui \
    ventanapredictor.ui \
    vbuscar.ui \
    creditos.ui \
    licencia.ui \
    vmostrar.ui
WARN = -Wall -Wextra -Wcast-align -Wno-sign-compare -Wno-write-strings \
       -Wno-parentheses

CXX +=/usr/bin/clang++
CFLAGS        += -DDEBUG -D_GLIBCXX__PTHREADS -g $(OPT) -std=c++14 $(WARN) -Wno-invalid-source-encoding
CXXFLAGS      += -DDEBUG -D_GLIBCXX__PTHREADS -g $(OPT) -std=c++14 $(WARN) -Wno-invalid-source-encoding

INCLUDEPATH += /home/daniel/aleph

LIBS += -L $(ALEPH) \
       -lAleph -lm -lgsl -lgslcblas -lgmp -lmpfr -lasprintf -lpthread

RESOURCES += \
    imagen.qrc
