QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    widget.cpp

HEADERS += \
    widget.h

FORMS += \
    widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
RESOURCES +=
RC_ICONS = logo.ico
VERSION = 9.1.0.0
RC_LANG = 0x0004
QMAKE_TARGET_COPYRIGHT = "Copyright 2018-2023 The Szy_1222.All rights reserved"
QMAKE_TARGET_PRODUCT = "Szy_Pvzz_CheatV9.1"
