#include "QFlukePlotter.hpp"



//
//QFlukePlotCanvas::QFlukePlotCanvas(QwtPlot *plot)
//  :QwtPlotCanvas(*plot->canvas())
//{
//
//}
//
//QFlukePlotCanvas::~QFlukePlotCanvas()
//{
//
//}


QFlukePlotter::QFlukePlotter(QWidget *parent)
    : QwtPlot(parent)
{
	this->setAxisTitle(2,"Time [s]");
	QFlukeCanvasEventFilter * CanvasEventFilter=new QFlukeCanvasEventFilter(this);
	this->canvas()->installEventFilter(CanvasEventFilter);

}




QFlukePlotter::~QFlukePlotter()
{

}


void QFlukePlotter::clear()
{

}


