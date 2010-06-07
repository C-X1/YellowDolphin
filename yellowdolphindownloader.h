#ifndef YELLOWDOLPHINDOWNLOADER_H
#define YELLOWDOLPHINDOWNLOADER_H

#include <QtGui/QWidget>
#include <qmessagebox.h>
#include <iostream>
#include <dirent.h>
#include <fstream>
#include <sstream>
#include "ui_yellowdolphindownloader.h"
#include "CalTime.hpp"
#include "Fluke189.hpp"
#include "QFlukeMetaType.h"
#include "remoteLogThread.h"
#include "remoteDataAnalysisThread.h"


class YellowDolphinDownloader : public QWidget
{
    Q_OBJECT

public:
    YellowDolphinDownloader(QWidget *parent = 0);
    ~YellowDolphinDownloader();

    remoteLogThread remlog;
    remoteDataAnalysisThread remanalysis;

private:
    Ui::YellowDolphinDownloaderClass ui;
    void refresh_interfaces_list();

public:
    static void Wrapper_to_progress_bar(void* progressbarobject, unsigned int current_byte, unsigned int byte_amount)
    {
    	YellowDolphinDownloader* currentclass=(YellowDolphinDownloader*) progressbarobject;

    	currentclass->progress_bar(current_byte, byte_amount);
    }


    void progress_bar(unsigned int current_byte, unsigned int byte_amount)
    {
    	if(byte_amount != 0)
    	{
    		unsigned int current_percent=(unsigned int)((double)(current_byte)/(byte_amount)*100);
    		if(current_percent > 100)
    		{
    			current_percent=100;
				std::cerr<<"YellowDolphinDownloader::progress_bar - Value for Progressbar > 100% !!!";
    		}
    		ui.progressBar->setValue(current_percent);
    	}
    	else
    	{
    		ui.progressBar->setValue(1);
    	}
    }

private slots:
    void on_pushButton_remlog_query_clicked();
    void on_searchmultimeter_clicked();
    void on_refreshInterfacesBut_clicked();
    void on_downloadButton_clicked();
};


#endif // YELLOWDOLPHINDOWNLOADER_H
