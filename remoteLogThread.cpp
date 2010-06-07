/*
 * remoteLogThread.cpp
 *
 *  Created on: 27.05.2010
 *      Author: cyborg-x1
 */

#include "remoteLogThread.h"
#include "remoteDataAnalysisThread.h"
remoteLogThread::remoteLogThread()
{
	// TODO Auto-generated constructor stub
	stop_requested=false;
}

remoteLogThread::~remoteLogThread()
{
	//Wait for process to end before destruction
	wait();
}


void remoteLogThread::run()
{
	Fluke::Fluke189 logdev(this->interface.toStdString());

	while(1)
	{
		{
			QMutexLocker locker(&stop_mutex);
			if(stop_requested)
			{
				stop_requested=false;
				break;
			}
		}
		Fluke::Fluke189::RCT_QD0 container=logdev.CMD_QD0(1,0,0);

		emit handOverSerialResponse(container);
	}
}

void remoteLogThread::setInterface(QString interface)
{
	QMutexLocker locker(&stop_mutex);
	this->interface=interface;
}

void remoteLogThread::stop()
{
	QMutexLocker locker(&stop_mutex);
	this->stop_requested=true;
}
