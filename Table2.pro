#-------------------------------------------------
#
# Project created by QtCreator 2016-11-10T17:42:22
#
#-------------------------------------------------

QT       += core gui
QMAKE_MAC_SDK = macosx10.12

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Table2
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dialogwindow.cpp \
    depositclass.cpp \
    treeclass.cpp \
    depositchild.cpp

HEADERS  += mainwindow.h \
    dialogwindow.h \
    depositclass.h \
    treeclass.h \
    depositchild.h

FORMS    += mainwindow.ui \
    dialogwindow.ui

DISTFILES += \
    DATA.txt
