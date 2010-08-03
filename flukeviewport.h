#ifndef FLUKEVIEWPORT_H
#define FLUKEVIEWPORT_H

#include <QtGui/QWidget>
#include <QGraphicsItem>
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



protected:

    void paintEvent(QPaintEvent * event)
    {
    	this->middleline->setPen(QPen(Qt::gray,1));

    }

};

#endif // FLUKEVIEWPORT_H
