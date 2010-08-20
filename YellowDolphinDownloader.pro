TEMPLATE = app
TARGET = YellowDolphinDownloader
QT += core \
    gui
HEADERS += QFlukePlotter/qflukeplotcurve.h \
    QFlukePlotter/QFlukePlotter.hpp \
    QFlukeValueMetaType.h \
    QFlukeMetaType.h \
    remoteDataAnalysisThread.h \
    remoteLogThread.h \
    yellowdolphindownloader.h
SOURCES += QFlukePlotter/qflukeplotcurve.cpp \
    QFlukePlotter/QFlukePlotter.cpp \
    remoteDataAnalysisThread.cpp \
    remoteLogThread.cpp \
    main.cpp \
    yellowdolphindownloader.cpp
FORMS += yellowdolphindownloader.ui
INCLUDEPATH += ../LibFluke/src \
    ../LibSerialDevice/src \
    ../LibCalTime/src \
    ../usr/include/qwt-qt4
LIBS += /usr/lib/libqwt-qt4.so \
    ../LibFluke/Debug/libFluke.so \
    ../LibCalTime/Debug/libCalTime.so \
    ../LibSerialDevice/Debug/libSerialDevice.so
