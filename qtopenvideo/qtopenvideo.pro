#-------------------------------------------------
#
# Project created by QtCreator 2020-03-26T15:25:46
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets



TARGET = qtopenvideo
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    imageviewer.cpp

HEADERS  += mainwindow.h \
    imageviewer.h \
    asmOpenCV.h

FORMS    += mainwindow.ui
