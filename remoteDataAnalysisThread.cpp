/*
 * remoteDataAnalysisThread.cpp
 *
 *  Created on: 02.06.2010
 *      Author: cyborg-x1
 */

#include "remoteDataAnalysisThread.h"
remoteDataAnalysisThread::remoteDataAnalysisThread()
{
	// TODO Auto-generated constructor stub
	//moveToThread(this);
}

remoteDataAnalysisThread::~remoteDataAnalysisThread()
{
	//Wait for thread to terminate
	wait();
}

void remoteDataAnalysisThread::run()
{
	//Create an new Timer
	this->timer_analysis = new QTimer();
	//Connect the Timer to analysis thread
	connect(timer_analysis, SIGNAL(timeout()),this,SLOT(analysis()));
	//Start it with calling the function each 500 ms,
	//should be enough because the multimeter is only
	//capable of sending 2 data sets each secs
	timer_analysis->start(500);
	exec();
}

void remoteDataAnalysisThread::analysis()
{
	Fluke::Fluke189::RCT_QD0 current;

	QString priValue, priMin, priMax, priAvg, secValue, secMin, secMax, secAvg;

	lock.lockForRead();
	if(this->qd0Data.count())
	{
		current=this->qd0Data[this->qd0Data.count()-1];
	}
	lock.unlock();

	if(current.Data()->I_ErrorPV0 == 1)
	{
		priValue.fromStdString(Fluke::getFluke189ValueErrorString(current.Data()->I_ErrorNoPV0));
	}
	else
	{

	}


}

void remoteDataAnalysisThread::stop()
{
	quit();
}

void remoteDataAnalysisThread::getFluke189_QD0(Fluke::Fluke189::RCT_QD0 container)
{
	lock.lockForWrite();
	this->qd0Data.append(container);
	lock.unlock();
}
