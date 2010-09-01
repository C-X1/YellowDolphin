#include "qflukeplotcurve.h"

QFlukePlotCurve::QFlukePlotCurve()
    : QwtPlotCurve()
{
	QwtSymbol symbol;
    symbol.setPen(QPen(Qt::green));
    symbol.setBrush(Qt::transparent);
	symbol.setStyle(QwtSymbol::DTriangle);
	symbol.setSize(10,10);
    this->setSymbol(symbol);
}

QFlukePlotCurve::~QFlukePlotCurve()
{

}
