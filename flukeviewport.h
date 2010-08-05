#ifndef FLUKEVIEWPORT_H
#define FLUKEVIEWPORT_H

#include <QtGui/QWidget>
#include <QGraphicsItem>
#include <Fluke189.hpp>
#include "ui_flukeviewport.h"
#include <math.h>



class FlukeViewPort : public QWidget
{
    Q_OBJECT




public:
    FlukeViewPort(QWidget *parent = 0);
    ~FlukeViewPort();


private:
    Ui::FlukeViewPortClass ui;
    QGraphicsScene * scene;
    QGraphicsLineItem * middleline;

    QGraphicsPolygonItem * PrimaryData;
    QPolygonF * PrimaryDataPolygon;

    /*Initialized*/
    bool reset;

    /*Variable to hold begining timestamp*/
    unsigned int begintime;

    /*Current Prefix*/
    int currentPre;

    /*Current value*/
    qreal currentVal;

    /*Current Time*/
    qreal currentTime;

protected:

    void paintEvent(QPaintEvent * event)
    {
    	this->middleline->setPen(QPen(Qt::gray,1));

    	if(this->ui.graphicsView->sceneRect().width()<this->ui.graphicsView->width()-6)
    	{
    		this->middleline->setLine(0,0,this->ui.graphicsView->width()-6,0);
    	}
    	else
    	{
        	this->middleline->setLine(0,0,this->ui.graphicsView->sceneRect().width(),0);
    	}
    }

public slots:

	void addValue(unsigned int timeindex, Fluke::Fluke189QD0Logging::Fluke189Value_t value)
	{

		if(this->reset) //move to reset
		{
			this->reset=false;
			currentPre=value.Prefix;
			begintime=timeindex;
		}
		else
		{
			if(timeindex-begintime<=0)
			{
				return;
			}
		}


		qreal newvalue=-(value.Value/pow(10,value.Decimal))/pow(10,(currentPre-value.Prefix)*3);
		qreal newtime=timeindex-begintime;

		this->scene->addLine(this->currentTime,this->currentVal,newtime, newvalue,QPen(Qt::blue,1));

		this->currentTime=newtime;
		this->currentVal=newvalue;
	}


};



#endif // FLUKEVIEWPORT_H
