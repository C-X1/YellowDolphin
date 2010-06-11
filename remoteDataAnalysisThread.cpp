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
	pMinset=false;
	pMaxset=false;
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
	static unsigned int numberDataSet;
	Fluke::Fluke189::RCT_QD0 current;

	QString priValue, priMin, priMax, priAvg, secValue, secMin, secMax, secAvg;

	//Variables for ValueErrors

	bool perr, serr;

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
		pValue.intDecimal=(current.Data()->I_priDecimal0!=129)? current.Data()->I_priDecimal0 : 2 ;
		pValue.intPrefix=current.Data()->I_priSI_Prefix0;
		pValue.intValue=current.Data()->I_priValue0;
		pValue.strUnit=currentinfo.s_priUnit;
		pValue.strSymbolsAfter="";









	}
	//secondary Value
	if(current.Data()->I_ErrorSV0 == 1)
	{
		secValue.fromStdString(Fluke::getFluke189ValueErrorString(current.Data()->I_ErrorNoSV0));
		serr=true;
	}
	else
	{
		//There seems to be a strange behaviour on the Hz value, the decimal is 129 instead of 2
		//decimal=(current.Data()->I_secDecimal!=129)? current.Data()->I_secDecimal : 2 ;
		sValue.intDecimal=(current.Data()->I_secDecimal!=129)? current.Data()->I_priDecimal0 : 2 ;
		sValue.intPrefix=current.Data()->I_secSi_Prefix;
		sValue.intValue=current.Data()->I_secValue0;



	}


	//Max pMax < pCurrent
	if((Fluke::fluke189ValueSmallerThan(pMax,pValue)  || !pMaxset) &&!perr)
	{
		pMax=pValue;
		pMaxset=true;
	}

	//Min pMin > pCurrent
	if((Fluke::fluke189ValueSmallerThan(pValue,pMin) || !pMinset) &&!perr )
	{
		pMin=pValue;
		pMinset=true;
	}


	//Max sMax < sValue
	if((Fluke::fluke189ValueSmallerThan(sMax,sValue)  || !sMaxset) &&!perr)
	{
		sMax=sValue;
		sMaxset=true;
	}

	//Min sMin > sValue
	if((Fluke::fluke189ValueSmallerThan(sValue,sMin) || !sMinset) &&!perr )
	{
		sMin=sValue;
		sMinset=true;
	}





	if(!perr)
	{
			priValue=QString::fromStdString(Fluke::fluke189ValueToString(pValue));
			if(pMaxset)priMax=QString::fromStdString(Fluke::fluke189ValueToString(pMax));
			if(pMinset)priMin=QString::fromStdString(Fluke::fluke189ValueToString(pMin));
	//		priAvg=QString::fromStdString(Fluke::fluke189ValueToString(pAvg));
	}


	if(!serr)
	{
			secValue=QString::fromStdString(Fluke::fluke189ValueToString(sValue));
			if(sMaxset)secMax=QString::fromStdString(Fluke::fluke189ValueToString(sMax));
			if(sMinset)secMin=QString::fromStdString(Fluke::fluke189ValueToString(sMin));
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
