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
	pMin=100000000;
	pMax=-100000000;
	pAvg=0;
	sMin=0;
	sMax=0;
	sAvg=0;
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
	//
	static unsigned int numberDataSet;
	Fluke::Fluke189::RCT_QD0 current;

	QString priValue, priMin, priMax, priAvg, secValue, secMin, secMax, secAvg;

	//Variables for calculation of current values
	double pvalue, svalue;

	//Values for storing decimal (calculation)
	unsigned int decimal;

	//Variables for ValueErrors
	bool perr=false, serr=false;


	lock.lockForRead();
	//Usually this function should be faster than the logthread
	//But otherwise it will not leave out any value
	//each time it is called it checks if there is a new container
	//if there is it will get the next, if not it returns
	if(this->qd0Data.count() > (signed)numberDataSet)
	{
		current=this->qd0Data[numberDataSet];
		lock.unlock();
	}
	else
	{
		lock.unlock();
		return;
	}



	Fluke::Fluke189::analysedInfo_t currentinfo=Fluke::Fluke189AnalyseQdInfo((Fluke::Fluke189::qdInfo_t*) &(current.Data()->I_QDInfo));

	//primary Value
	if(current.Data()->I_ErrorPV0 == 1)
	{
		priValue.fromStdString(Fluke::getFluke189ValueErrorString(current.Data()->I_ErrorNoPV0));
		perr=true;
	}
	else
	{
		//There seems to be a strange behaviour on the Hz value, the decimal is 129 instead of 2
		decimal=(current.Data()->I_priDecimal0!=129)? current.Data()->I_priDecimal0 : 2 ;
		pvalue=(current.Data()->I_priValue0/pow(10,decimal))*pow(1000,current.Data()->I_priSI_Prefix0);
		//Min Max
		if(pMin > pvalue) pMin=pvalue;
		if(pMax < pvalue) pMax=pvalue;
		//Avg
		//numberDataSet is equal to the number of previous values
		pAvg=(pAvg*numberDataSet+pvalue)/(numberDataSet+1);

	}
	//secondary Value
	if(current.Data()->I_ErrorPV0 == 1)
	{
		secValue.fromStdString(Fluke::getFluke189ValueErrorString(current.Data()->I_ErrorNoSV0));
		serr=true;
	}
	else
	{
		//There seems to be a strange behaviour on the Hz value, the decimal is 129 instead of 2
		decimal=(current.Data()->I_secDecimal!=129)? current.Data()->I_secDecimal : 2 ;
		svalue=current.Data()->I_secValue0/pow(10,decimal);
		//Min Max
		if(sMin > svalue) sMin=svalue;
		if(sMax < svalue) sMax=svalue;
		//Avg
		//numberDataSet is equal to the number of previous values
		sAvg=(sAvg*numberDataSet+svalue)/(numberDataSet+1);
	}




	if(!perr)
	{
		priValue.sprintf("%5f", pvalue);
		priMin.sprintf("%5f", pMin);
		priMax.sprintf("%5f", pMax);
		priAvg.sprintf("%5f", pAvg);
	}


	emit updateCurrentValues(priValue,priMin,priMax,priAvg,secValue,secMin,secMax,secAvg);



	numberDataSet++; //increase number
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