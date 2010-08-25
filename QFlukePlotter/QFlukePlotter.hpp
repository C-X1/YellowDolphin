#ifndef QFLUKEPLOTTER_H
#define QFLUKEPLOTTER_H

#include <QtGui/QWidget>
 #include <QWheelEvent>

#include <qwt-qt4/qwt_plot.h>
#include <qwt-qt4/qwt_scale_div.h>
#include <qwt-qt4/qwt_plot_canvas.h>
#include <iostream> //TODO Remove

#include "Fluke189.hpp"



class QFlukeCanvasEventFilter : public QObject
{
	Q_OBJECT

public:
	QFlukeCanvasEventFilter(QObject *parent)
	: QObject(parent)
	{

	}
	~QFlukeCanvasEventFilter()
	{

	}

protected:
	bool eventFilter(QObject *obj, QEvent *event)
	{
		if(event->type() == QEvent::MouseButtonDblClick)
		{
		std::cout<<"OnCanvasClick"<<std::endl;
		return true;
		}
		return false;
	}
};




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

};

#endif // QFLUKEPLOTTER_H
