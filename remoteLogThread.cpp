/*
 * remoteLogThread.cpp
 *
 *  Created on: 27.05.2010
 *      Author: cyborg-x1
 */

#include "remoteLogThread.h"

remoteLogThread::remoteLogThread()
{
	// TODO Auto-generated constructor stub
}

remoteLogThread::~remoteLogThread()
{
	// TODO Auto-generated destructor stub
}


void remoteLogThread::run()
{
	Fluke::Fluke189 logdev(this->interface.toStdString());
	while(1)
	{
		this->data.append(logdev.CMD_QD0(1,0,0));
		std::cout<<this->data.count()<<std::endl;
	}
}






void remoteLogThread::setInterface(QString interface)
{
	this->interface=interface;
}
