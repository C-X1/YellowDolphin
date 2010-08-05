#include "flukeviewport.h"

/*
 * Notes
 * QPainter
 * drawPath
 * QImageObject
 */

FlukeViewPort::FlukeViewPort(QWidget *parent)
    : QWidget(parent)
{
	this->reset=true;

	ui.setupUi(this);
	this->scene=new QGraphicsScene();
	this->scene->setBackgroundBrush(QBrush(Qt::black,Qt::SolidPattern));
	this->middleline=new QGraphicsLineItem();
	this->scene->addItem(this->middleline);
	this->middleline->setLine(0,0,this->ui.graphicsView->frameSize().width(),0);

	int xs=0;
	int ys=0;

//	for(double i=1; i <= 10; i=i+0.01)
//	{
//		int xn=i*20;
//		int yn=sin(i)*20;
//		this->scene->addLine(xs,ys,xn,yn,QPen(Qt::red, 1));
//		xs=xn;
//		ys=yn;
//	}
	this->ui.graphicsView->setScene(this->scene);
	this->ui.graphicsView->setAlignment(Qt::AlignLeft);

	this->currentVal = 0;

	this->ui.graphicsView->scale(10,10);


}

FlukeViewPort::~FlukeViewPort()
{

}
