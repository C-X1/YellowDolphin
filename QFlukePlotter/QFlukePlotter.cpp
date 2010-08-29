#include "QFlukePlotter.hpp"



QFlukeCanvasEventFilter::QFlukeCanvasEventFilter(QFlukePlotter *parent)
:QwtPlotPicker(parent->canvas())
{
	plotter=parent;

	zoomer=new QwtPlotZoomer(plotter->canvas());
	zoomer->setTrackerPen(QPen(Qt::red));
	zoomer->setRubberBandPen(QPen(Qt::red));

	//Actions
	AutoScale = new QAction("AutoScale",this);
	AutoScale->connect(AutoScale,SIGNAL(triggered()),this,SLOT(resetToAutoScale()));


}


void QFlukeCanvasEventFilter::WheelHandler(QWheelEvent * event)
{



	std::cout<<std::endl;
	//X-Axis
	double x_currentUpperBound=plotter->axisScaleDiv(0)->upperBound();
	double x_currentLowerBound=plotter->axisScaleDiv(0)->lowerBound();

	double dotsPerScaleFactor=abs((double)x_currentUpperBound-x_currentLowerBound)/(double)plotter->canvas()->width();
	double x_currentPosValue=x_currentLowerBound+event->x()*dotsPerScaleFactor;

	//Y-Axis
	double y_currentLowerBound=plotter->axisScaleDiv(2)->lowerBound();
	double y_currentUpperBound=plotter->axisScaleDiv(2)->upperBound();

	double newupper=plotter->axisScaleDiv(2)->upperBound()+event->delta()/15;

	if(newupper<=0)
	{
		newupper=1;
	}

	plotter->setAxisScale(2,0,newupper);
	plotter->replot();
}

void QFlukeCanvasEventFilter::ResizeHandler(QResizeEvent * event)
{

}


void QFlukeCanvasEventFilter::showContextMenu(QContextMenuEvent * event)
{
    QMenu menu;
    menu.addSeparator();
    menu.addAction(AutoScale);
    menu.exec(event->globalPos());

  //Actions must be done as a class variable and connected like this:
  //  connect(printAct, SIGNAL(triggered()), this, SLOT(print()));

}

bool QFlukeCanvasEventFilter::MousePressHandler(QMouseEvent *event)
{
	switch(event->button())
	{
	case 1:
		std::cout<<"press"<<std::endl;

		return false;

	default:
		return false;

	}
	return true;
}

QFlukePlotter::QFlukePlotter(QWidget *parent)
    : QwtPlot(parent)
{
	this->setAxisTitle(2,"Time [s]");
	QFlukeCanvasEventFilter * CanvasEventFilter=new QFlukeCanvasEventFilter(this);
	//this->canvas()->installEventFilter(CanvasEventFilter);



}



//Slots

void QFlukeCanvasEventFilter::resetToAutoScale()
{
	plotter->setAxisAutoScale(0);
	plotter->setAxisAutoScale(2);
	plotter->replot();
}



QFlukePlotter::~QFlukePlotter()
{

}


void QFlukePlotter::clear()
{

}


