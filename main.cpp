#include "yellowdolphindownloader.h"

#include <QtGui>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    YellowDolphinDownloader w;
    w.show();
    return a.exec();
}
