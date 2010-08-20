#include "QFlukePlotter.hpp"

QFlukePlotter::QFlukePlotter(QWidget *parent)
    : QwtPlot(parent)
{
	this->setAxisTitle(2,"Time [s]");
}


QFlukePlotter::~QFlukePlotter()
{

}






void QFlukePlotter::clear()
{

}


