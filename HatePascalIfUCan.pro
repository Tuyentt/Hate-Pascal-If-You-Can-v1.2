#-------------------------------------------------
#
# Project created by QtCreator 2017-03-22T14:39:47
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = HatePascalIfUCan
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        mainwindow.cpp \
    lythuyet.cpp \
    thuvien.cpp \
    giaibaitap.cpp \
    baitap.cpp \
    btcoban.cpp \
    btnangcao.cpp

HEADERS  += mainwindow.h \
    lythuyet.h \
    thuvien.h \
    giaibaitap.h \
    baitap.h \
    btcoban.h \
    btnangcao.h

FORMS    += mainwindow.ui \
    lythuyet.ui \
    thuvien.ui \
    giaibaitap.ui \
    baitap.ui \
    btcoban.ui \
    btnangcao.ui
