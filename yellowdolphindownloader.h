#ifndef YELLOWDOLPHINDOWNLOADER_H
#define YELLOWDOLPHINDOWNLOADER_H

#include <QtGui/QWidget>
#include <QVector>
#include <QPainter>
#include <QImage>
#include <QMessageBox>

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



#include "QFlukePlotter/QFlukePlotter.hpp"
#include "QFlukePlotter/qflukeplotcurve.h"


class YellowDolphinDownloader : public QWidget
{
    Q_OBJECT

public:
    YellowDolphinDownloader(QWidget *parent = 0);
    ~YellowDolphinDownloader();



    QFlukePlotter * primaryPlot;
    QFlukePlotter * secondaryPlot;

    QFlukePlotCurve * primaryValueCurve;
    QFlukePlotCurve * primaryMaxCurve;
    QFlukePlotCurve * primaryMinCurve;
    QFlukePlotCurve * primaryAvgCurve;

    QFlukePlotCurve * secondaryValueCurve;
    QFlukePlotCurve * secondaryMaxCurve;
    QFlukePlotCurve * secondaryMinCurve;
    QFlukePlotCurve * secondaryAvgCurve;

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

public slots:
	void updateCurrentValues(QString priValue,
							 QString priMin,
							 QString priMax,
							 QString priAvg,
							 QString secValue,
							 QString secMin,
							 QString secMax,
							 QString secAvg);

	void addPlotValues(unsigned int pritimeindex, unsigned int sectimeindex,
							 Fluke::Fluke189QD0Logging::Fluke189Value_t privalue,
							 Fluke::Fluke189QD0Logging::Fluke189Value_t primax,
							 Fluke::Fluke189QD0Logging::Fluke189Value_t primin,
							 Fluke::Fluke189QD0Logging::Fluke189Value_t priavg,
							 Fluke::Fluke189QD0Logging::Fluke189Value_t secvalue,
							 Fluke::Fluke189QD0Logging::Fluke189Value_t secmax,
							 Fluke::Fluke189QD0Logging::Fluke189Value_t secmin,
							 Fluke::Fluke189QD0Logging::Fluke189Value_t secavg)
	{
		primaryValueCurve->addDataPoint(pritimeindex, privalue);
		primaryMaxCurve->addDataPoint(pritimeindex, primax);
		primaryMinCurve->addDataPoint(pritimeindex, primin);
		//primaryAvgCurve->addDataPoint(pritimeindex, priavg);
		primaryPlot->replot();

		secondaryValueCurve->addDataPoint(sectimeindex, secvalue);
		secondaryMaxCurve->addDataPoint(sectimeindex, secmax);
		secondaryMinCurve->addDataPoint(sectimeindex, secmin);
		//secondaryAvgCurve->addDataPoint(sectimeindex, secavg);
		secondaryPlot->replot();
	}

	void reset_primary_plot();
	void reset_secondary_plot();
};


#endif // YELLOWDOLPHINDOWNLOADER_H
