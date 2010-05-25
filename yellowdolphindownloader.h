#ifndef YELLOWDOLPHINDOWNLOADER_H
#define YELLOWDOLPHINDOWNLOADER_H

#include <QtGui/QWidget>
#include "ui_yellowdolphindownloader.h"

class YellowDolphinDownloader : public QWidget
{
    Q_OBJECT

public:
    YellowDolphinDownloader(QWidget *parent = 0);
    ~YellowDolphinDownloader();

private:
    Ui::YellowDolphinDownloaderClass ui;
};

#endif // YELLOWDOLPHINDOWNLOADER_H
