TEMPLATE = app
TARGET = YellowDolphinDownloader
QT += core \
    gui
HEADERS += QFlukeValueMetaType.h \
    flukeviewport.h \
    QFlukeMetaType.h \
    remoteDataAnalysisThread.h \
    remoteLogThread.h \
    yellowdolphindownloader.h
SOURCES += flukeviewport.cpp \
    remoteDataAnalysisThread.cpp \
    remoteLogThread.cpp \
    main.cpp \
    yellowdolphindownloader.cpp
FORMS += flukeviewport.ui \
    yellowdolphindownloader.ui
INCLUDEPATH += ../LibFluke/src \
    ../LibSerialDevice/src \
    ../LibCalTime/src
LIBS += ../LibFluke/Debug/libFluke.so \
    ../LibCalTime/Debug/libCalTime.so \
    ../LibSerialDevice/Debug/libSerialDevice.so
