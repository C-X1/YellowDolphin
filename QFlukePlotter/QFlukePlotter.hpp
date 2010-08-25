#ifndef QFLUKEPLOTTER_H
#define QFLUKEPLOTTER_H

#include <QtGui/QWidget>
 #include <QWheelEvent>

#include <qwt-qt4/qwt_plot.h>
#include <qwt-qt4/qwt_scale_div.h>
#include <qwt-qt4/qwt_plot_canvas.h>
#include <iostream> //TODO Remove

#include "Fluke189.hpp"



//class QFlukePlotCanvas : public QwtPlotCanvas
//{
//	Q_OBJECT
//
//public:
//	QFlukePlotCanvas(QwtPlot *plot);
//    ~QFlukePlotCanvas();
//
//    void wheelEvent(QWheelEvent * e)
//    {
//    	std::cout<<" X:"<<e->x();
//    	std::cout<<" Y:"<<e->y();
//    	std::cout<<" Orient: "<<e->orientation();
//    	std::cout<<" Delta: "<<e->delta();
//    	std::cout<<" Dir: ";
//    	if(e->orientation()==1)//MouseWheel HorizontalDirection
//    	{
//    		std::cout<<"h";
//    	}
//    	if(e->orientation()==2)//MouseWheel VerticalDirection
//    	{
//    		std::cout<<"v";
//    	}
//    	std::cout<<std::endl;
//    }
//};




class QFlukePlotter : public QwtPlot
{
    Q_OBJECT

public:

    QFlukePlotter(QWidget *parent = 0);
    ~QFlukePlotter();


private:

    void mouseDoubleClickEvent(QMouseEvent * e)
    {
    	std::cout<<"test"<<std::endl;

    }
    void mouseMoveEvent(QMouseEvent * e)
    {
    	std::cout<<"move move"<<std::endl;
    }



public slots:
	/**
	 * Clears all plot-data
	 */
	void clear();



	void OnCanvasClick();

};

#endif // QFLUKEPLOTTER_H
