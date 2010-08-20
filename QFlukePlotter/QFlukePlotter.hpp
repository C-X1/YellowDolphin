#ifndef QFLUKEPLOTTER_H
#define QFLUKEPLOTTER_H

#include <QtGui/QWidget>
 #include <QWheelEvent>
#include <qwt-qt4/qwt_plot.h>

#include <iostream> //TODO Remove

#include "Fluke189.hpp"

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
    void wheelEvent(QWheelEvent * e)
    {

    	std::cout<<e->delta()<<std::endl;
    	//std::cout<<"down"<<std::endl;
    }


public slots:
	/**
	 * Clears all plot-data
	 */
	void clear();

};

#endif // QFLUKEPLOTTER_H
