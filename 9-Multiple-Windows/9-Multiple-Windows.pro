#-------------------------------------------------
#
# Project created by QtCreator 2018-07-23T11:01:04
#
#-------------------------------------------------

QT       += core gui widgets

TARGET = 9-Multiple-Windows
TEMPLATE = app
CONFIG -= debug_and_release debug_and_release_target


# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    dialog1.cpp \
    dialog2.cpp \
    icon.cpp \
    dialog3.cpp \
    dialog4.cpp \
    dialog5.cpp \
    dialog_basic.cpp \
    admininterface.cpp \
    adduserinterface.cpp

HEADERS += \
        mainwindow.h \
    dialog1.h \
    horiz.h \
    dialog2.h \
    icon.h \
    dialog3.h \
    dialog4.h \
    dialog5.h \
    dialog_basic.h \
    admininterface.h \
    adduserinterface.h

FORMS += \
        mainwindow.ui \
    dialog1.ui \
    dialog2.ui \
    dialog3.ui \
    dialog4.ui \
    dialog5.ui \
    dialog_basic.ui \
    admininterface.ui \
    adduserinterface.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    rsc1.qrc
