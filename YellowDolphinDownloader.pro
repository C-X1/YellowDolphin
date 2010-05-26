TEMPLATE = app
TARGET = YellowDolphinDownloader 

QT        += core gui 

HEADERS   += yellowdolphindownloader.h
SOURCES   += main.cpp \
    yellowdolphindownloader.cpp
FORMS     += yellowdolphindownloader.ui    


INCLUDEPATH += ../LibFluke/src \
    ../LibSerialDevice/src \
    ../LibCalTime/src

LIBS += ../LibFluke/Debug/libFluke.so \
    ../LibCalTime/Debug/libCalTime.so \
    ../LibSerialDevice/Debug/libSerialDevice.so
