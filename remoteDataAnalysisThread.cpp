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

}

remoteDataAnalysisThread::~remoteDataAnalysisThread()
{
	//Wait for thread to terminate
	std::cout<<"destructor analysis"<<std::endl;
	wait();
}

void remoteDataAnalysisThread::run()
{
	forever
	{
		{
			QMutexLocker locker(&mutex);
			if(this->stop_requested)
			{
				this->stop_requested=false;
				break;
			}

		}
		{
			QMutexLocker locker(&mutex);
			std::cout<<this->qd0Data.count()<<std::endl;
		}
		usleep(100000);
	}
}

void remoteDataAnalysisThread::stop()
{
	QMutexLocker locker(&mutex);
	this->stop_requested = true;
}

void remoteDataAnalysisThread::getFluke189_QD0(Fluke::Fluke189::RCT_QD0 container)
{
	QMutexLocker locker(&mutex);
	this->qd0Data.append(container);
}
