#include "qflukeplotcurve.h"

QFlukePlotCurve::QFlukePlotCurve()
    : QwtPlotCurve()
{
	QwtSymbol symbol;
    symbol.setPen(QPen(Qt::green));
    symbol.setBrush(Qt::transparent);
	symbol.setStyle(QwtSymbol::Rect);
	symbol.setSize(4,4);
    this->setSymbol(&symbol);

}

QFlukePlotCurve::~QFlukePlotCurve()
{

}
