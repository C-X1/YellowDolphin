#include "flukeviewport.h"

FlukeViewPort::FlukeViewPort(QWidget *parent)
    : QWidget(parent)
{
	ui.setupUi(this);
	this->scene=new QGraphicsScene();
	this->scene->setBackgroundBrush(QBrush(Qt::black,Qt::SolidPattern));

	this->scene->addLine(-120,this->ui.graphicsView->frameGeometry().height()/2,this->ui.graphicsView->frameGeometry().width(),this->ui.graphicsView->frameGeometry().height()/2,QPen(Qt::gray,1));

	this->ui.graphicsView->setScene(this->scene);
}

FlukeViewPort::~FlukeViewPort()
{

}
