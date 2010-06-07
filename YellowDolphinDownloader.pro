TEMPLATE = app
TARGET = YellowDolphinDownloader
QT += core \
    gui
HEADERS += QFlukeMetaType.h \
    remoteDataAnalysisThread.h \
    remoteLogThread.h \
    yellowdolphindownloader.h
SOURCES += remoteDataAnalysisThread.cpp \
    remoteLogThread.cpp \
    main.cpp \
    yellowdolphindownloader.cpp
FORMS += yellowdolphindownloader.ui
INCLUDEPATH += ../LibFluke/src \
    ../LibSerialDevice/src \
    ../LibCalTime/src
LIBS += ../LibFluke/Debug/libFluke.so \
    ../LibCalTime/Debug/libCalTime.so \
    ../LibSerialDevice/Debug/libSerialDevice.so
