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
#include "QFlukeValueMetaType.h"
#include "remoteLogThread.h"
#include "remoteDataAnalysisThread.h"

#include <qwt-qt4/qwt_plot.h>
#include <qwt-qt4/qwt_plot_curve.h>
#include <qwt-qt4/qwt_painter.h>
#include <qwt-qt4/qwt_plot_canvas.h>
#include <qwt-qt4/qwt_plot_marker.h>
#include <qwt-qt4/qwt_plot_curve.h>
#include <qwt-qt4/qwt_scale_widget.h>
#include <qwt-qt4/qwt_legend.h>
#include <qwt-qt4/qwt_scale_draw.h>
#include <qwt-qt4/qwt_math.h>
#include <QVector>

#include <QPainter>
#include <QImage>

#include "QFlukePlotter/QFlukePlotter.hpp"
#include "QFlukePlotter/qflukeplotcurve.h"


class YellowDolphinDownloader : public QWidget
{
    Q_OBJECT

public:
    YellowDolphinDownloader(QWidget *parent = 0);
    ~YellowDolphinDownloader();



    QFlukePlotter * primaryPlot;
    QFlukePlotCurve * primaryCurve;


    remoteLogThread remlog;
    remoteDataAnalysisThread remanalysis;

private:

    Ui::YellowDolphinDownloaderClass ui;
    void refresh_interfaces_list();

    /*Initialized*/
    bool reset;

    /*Variable to hold begining timestamp*/
    unsigned int begintime;

    /*Current Prefix*/
    int currentPre;

    /*Current value*/
    qreal currentVal;

    /*Current Time*/
    qreal currentTime;

    QVector<double> xprimV, yprimV;


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

public slots:
	void updateCurrentValues(QString priValue,
							 QString priMin,
							 QString priMax,
							 QString priAvg,
							 QString secValue,
							 QString secMin,
							 QString secMax,
							 QString secAvg);
	void addPrimaryPlotValue(unsigned int timeindex, Fluke::Fluke189QD0Logging::Fluke189Value_t value)
	{
		primaryCurve->addDataPoint(timeindex, value);
		primaryPlot->replot();
	}
};


#endif // YELLOWDOLPHINDOWNLOADER_H
