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
	pReset=false;
	sReset=false;
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
	static long numberDataSet;
	QString priValue,priMin,priMax,priAvg,secValue,secMin,secMax,secAvg;
	Fluke::Fluke189::RCT_QD0 current;

	lock.lockForRead();
	//have a look if user wants to reset min,max,avg
	bool sReset=this->sReset;
	bool pReset=this->pReset;
	//Usually this function should be faster than the logthread
	//But otherwise it will not leave out any value
	//each time it is called it checks if there is a new container
	//if there is it will get the next, if not it returns
	if(this->qd0Data.count() > (signed)numberDataSet)
	{
		numberDataSet++;
		current=this->qd0Data[numberDataSet];
		lock.unlock();
	}
	else
	{
		lock.unlock();
		return;
	}


	if(pReset) Logger.reset_primary();
	if(sReset) Logger.reset_secondary();


	if(pReset || sReset)
	{

		//Clear class member
		lock.lockForWrite();
			this->pReset=false;
			this->sReset=false;
		lock.unlock();
	}

	Logger.addContainer(current);


priValue=QString::fromUtf8(Logger.get_Primary_ValueAndUnit_String().c_str());
priMin=QString::fromUtf8(Logger.get_Primary_Min_ValueAndUnit_String().c_str());
priMax=QString::fromUtf8(Logger.get_Primary_Max_ValueAndUnit_String().c_str());
priAvg=QString::fromUtf8(Logger.get_Primary_Avg_ValueAndUnit_String().c_str());
secValue=QString::fromUtf8(Logger.get_Secondary_ValueAndUnit_String().c_str());
secMin=QString::fromUtf8(Logger.get_Secondary_Min_ValueAndUnit_String().c_str());
secMax=QString::fromUtf8(Logger.get_Secondary_Max_ValueAndUnit_String().c_str());
secAvg=QString::fromUtf8(Logger.get_Secondary_Avg_ValueAndUnit_String().c_str());

emit updateCurrentValues(priValue,priMin,priMax,priAvg,secValue,secMin,secMax,secAvg);






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

void remoteDataAnalysisThread::reset_primary()
{
	lock.lockForWrite();
		pReset=true;
	lock.unlock();
}
void remoteDataAnalysisThread::reset_secondary()
{
	lock.lockForWrite();
		sReset=true;
	lock.unlock();
}
