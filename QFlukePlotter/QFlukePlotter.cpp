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
        connect(this->canvas(),SIGNAL(customContextMenuRequested(QPoint)),this,SLOT(OnCanvasClick()));

}




QFlukePlotter::~QFlukePlotter()
{

}

void QFlukePlotter::OnCanvasClick()
{
	std::cout<<"testtt"<<std::endl;
}


void QFlukePlotter::clear()
{

}


