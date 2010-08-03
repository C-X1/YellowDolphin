#include "flukeviewport.h"

FlukeViewPort::FlukeViewPort(QWidget *parent)
    : QWidget(parent)
{
	ui.setupUi(this);
	this->scene=new QGraphicsScene();
	this->scene->setBackgroundBrush(QBrush(Qt::black,Qt::SolidPattern));
	this->middleline=new QGraphicsLineItem();
	this->scene->addItem(this->middleline);
	this->middleline->setLine(0,0,this->ui.graphicsView->frameSize().width(),0);

	int xs=0;
	int ys=0;

	for(double i=1; i <= 10; i=i+0.001)
	{
		int xn=i*20;
		int yn=sin(i)*20;
		this->scene->addLine(xs,ys,xn,yn,QPen(Qt::red, 1));
		xs=xn;
		ys=yn;
	}
	this->ui.graphicsView->setScene(this->scene);


}

FlukeViewPort::~FlukeViewPort()
{

}
