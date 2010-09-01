#ifndef QFLUKEPLOTCURVE_H
#define QFLUKEPLOTCURVE_H

#include <QtGui/QWidget>
#include "QFlukePlotter.hpp"
#include <QVector>

#include <qwt-qt4/qwt_plot_curve.h>
#include <qwt-qt4/qwt_painter.h>
#include <qwt-qt4/qwt_plot_canvas.h>
#include <qwt-qt4/qwt_plot_marker.h>
#include <qwt-qt4/qwt_plot_curve.h>
#include <qwt-qt4/qwt_scale_widget.h>
#include <qwt-qt4/qwt_legend.h>
#include <qwt-qt4/qwt_scale_draw.h>
#include <qwt-qt4/qwt_math.h>
#include <qwt-qt4/qwt_symbol.h>


#include <iostream> //TODO delete

class QFlukePlotCurve : public QwtPlotCurve
{

private:

	int currentPrefix;
	unsigned int startvalue;


	QwtPlotCurve * points;

    QVector<double>timestamps;
    QVector<double>values;

public:
    QFlukePlotCurve();
    ~QFlukePlotCurve();

//    void attach(QwtPlot * plot)
//    {
//    	this->QwtPlotCurve::attach(plot);
//    	this->points->attach(plot);
//    }



    /**
     * This function will add a data point to the Curve
     * @param [in] timestamp This hands over the timestamp of the fluke reading
     * @param [in] value This hands over the value from a QD0Logger Class object
     */
    void addDataPoint(unsigned int timestamp, Fluke::Fluke189QD0Logging::Fluke189Value_t value)
    {
	   	if(!this->timestamps.count())
    	{
	   		currentPrefix=value.Prefix;
    		values.clear();
    		startvalue=timestamp;
    	}
    	timestamps.push_back((double)(timestamp-startvalue)/10);
    	values.push_back((value.Value/pow(10,value.Decimal))/pow(10,(currentPrefix-value.Prefix)*3));
    	this->setRawData(timestamps.data(),values.data(),values.size());
    }

    /**
     * This function will delete all data from the curve
     */
    void clearData()
    {
    	values.clear();
    	timestamps.clear();
    }





};

#endif // QFLUKEPLOTCURVE_H
