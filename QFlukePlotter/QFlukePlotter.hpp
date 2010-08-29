#ifndef QFLUKEPLOTTER_H
#define QFLUKEPLOTTER_H

#include <QtGui/QWidget>
#include <QWheelEvent>
#include <QScrollBar>
#include <qwt-qt4/qwt_plot.h>
#include <qwt-qt4/qwt_scale_div.h>
#include <qwt-qt4/qwt_plot_canvas.h>
#include <qwt-qt4/qwt_scale_widget.h>
#include <qwt-qt4/qwt_plot_layout.h>
#include <qwt-qt4/qwt_plot_zoomer.h>
#include <qwt-qt4/qwt_plot_picker.h>

#include <QMenu>
#include <QAction>
#include <math.h>

#include <iostream> //TODO Remove


#include "Fluke189.hpp"

class QFlukePlotter;
class QFlukeCanvasEventFilter : public QwtPlotPicker
{
	Q_OBJECT

	QAction * AutoScale;
	QFlukePlotter * plotter;
	QwtScaleWidget * scale;
	QwtPlotZoomer * zoomer;

public:
	QFlukeCanvasEventFilter(QFlukePlotter *parent);
	~QFlukeCanvasEventFilter()
	{

	}

protected:

	void showContextMenu(QContextMenuEvent * event);

	void WheelHandler(QWheelEvent * event);

	void ResizeHandler(QResizeEvent * event);

	bool MousePressHandler(QMouseEvent *event);

	bool eventFilter(QObject *obj, QEvent *event)
	{

		switch(event->type())
		{
		case QEvent::Resize:
			ResizeHandler((QResizeEvent *)event);
			return false;
		break;

		case QEvent::MouseButtonPress:
			return MousePressHandler((QMouseEvent *) event);
		break;

		case QEvent::Wheel:
			WheelHandler((QWheelEvent *) event);
		break;

		case QEvent::ContextMenu:
			showContextMenu((QContextMenuEvent *) event);
		break;

		default:
			return false;
		}
		return true;
	}

	public slots:

	void resetToAutoScale();



	void tellselection(QwtDoublePoint tpnt)
	{
		std::cout<<"tellselect"<<std::endl;
	}

};




class QFlukePlotter : public QwtPlot
{
    Q_OBJECT

public:

    QFlukePlotter(QWidget *parent = 0);
    ~QFlukePlotter();


private:

//    void mouseDoubleClickEvent(QMouseEvent * e)
//    {
//    	std::cout<<"test"<<std::endl;
//
//    }
//    void mouseMoveEvent(QMouseEvent * e)
//    {
//    	std::cout<<"move move"<<std::endl;
//    }




public slots:
	/**
	 * Clears all plot-data
	 */
	void clear();


};

#endif // QFLUKEPLOTTER_H
