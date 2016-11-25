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
<<<<<<< HEAD
    ventanapredictor.cpp \
    vbuscar.cpp
=======
    ventanapredictor.cpp
>>>>>>> f3a80b233ab9723f0252b8a0d20cebe8af18cb58

HEADERS  += mainwindow.h \
    texteditpredictor.h \
    ventanapredictor.h \
<<<<<<< HEAD
    dictnode.H \
    vbuscar.h

FORMS    += mainwindow.ui \
    ventanapredictor.ui \
    vbuscar.ui
=======
    dictnode.H

FORMS    += mainwindow.ui \
    ventanapredictor.ui
>>>>>>> f3a80b233ab9723f0252b8a0d20cebe8af18cb58

WARN = -Wall -Wextra -Wcast-align -Wno-sign-compare -Wno-write-strings \
       -Wno-parentheses -Wno-invalid-source-encoding

<<<<<<< HEAD
=======
CXX += /usr/bin/clang++-3.8
>>>>>>> f3a80b233ab9723f0252b8a0d20cebe8af18cb58

CFLAGS += -g -O0 -std=c++14 $(WARN)

CXXFLAGS += -g -O0 -std=c++14 $(WARN)

<<<<<<< HEAD
INCLUDEPATH += /home/astrid/Escritorio/Aleph/aleph-1.6

LIBS += -L//home/astrid/Escritorio/Aleph/aleph-1.6 -lAleph -lm -lgsl -lgslcblas -lgmp -lmpfr -lpthread -lc
=======
INCLUDEPATH += /home/roberto/Descargas/aleph

LIBS += -L/home/roberto/Descargas/aleph -lAleph -lm -lgsl -lgslcblas -lgmp -lmpfr -lpthread -lc
>>>>>>> f3a80b233ab9723f0252b8a0d20cebe8af18cb58
