#ifndef FLUKEVIEWPORT_H
#define FLUKEVIEWPORT_H

#include <QtGui/QWidget>
#include "ui_flukeviewport.h"

class FlukeViewPort : public QWidget
{
    Q_OBJECT




public:
    FlukeViewPort(QWidget *parent = 0);
    ~FlukeViewPort();


private:
    Ui::FlukeViewPortClass ui;
    QGraphicsScene * scene;


protected:

    void paintEvent(QPaintEvent * event)
    {

    }

};

#endif // FLUKEVIEWPORT_H
