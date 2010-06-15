#include "yellowdolphindownloader.h"

#include <QtGui>
#include <QApplication>

#include <string>
#include <QString>
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    YellowDolphinDownloader w;
    w.show();
    return a.exec();
}
