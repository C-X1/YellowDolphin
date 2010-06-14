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
	stat_reset=true;
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
	static std::string p_current_unit,s_current_unit;
	static long long pAverage=0,sAverage=0;  //Store everything in piko thats why we need this huge integer here


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
		priValue=QString::fromStdString(Fluke::getFluke189ValueErrorString(current.Data()->I_ErrorNoPV0));
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
		pValue.strSymbolsBefore="";
		Fluke::fluke189ValueMinMaxAverage(pValue,pMin,pMax,pAvg,pAverage,numberDataSet,stat_reset, p_current_unit);


	}
	//secondary Value
	if(current.Data()->I_ErrorSV0 == 1)
	{
		secValue=QString::fromStdString(Fluke::getFluke189ValueErrorString(current.Data()->I_ErrorNoSV0));
		serr=true;
	}
	else
	{
		//There seems to be a strange behaviour on the Hz value, the decimal is 129 instead of 2
		//decimal=(current.Data()->I_secDecimal!=129)? current.Data()->I_secDecimal : 2 ;
		sValue.intDecimal=(current.Data()->I_secDecimal!=129)? current.Data()->I_priDecimal0 : 2 ;
		sValue.intPrefix=current.Data()->I_secSi_Prefix;
		sValue.intValue=current.Data()->I_secValue0;
		sValue.strUnit=currentinfo.s_secUnit;
		sValue.strSymbolsAfter="";
		sValue.strSymbolsBefore="";
		Fluke::fluke189ValueMinMaxAverage(sValue,sMin,sMax,sAvg,sAverage,numberDataSet,stat_reset, s_current_unit);
	}













	if(!perr)
	{
			priValue=QString::fromStdString(Fluke::fluke189ValueToString(pValue));
			if(!stat_reset)priMax=QString::fromStdString(Fluke::fluke189ValueToString(pMax));
			if(!stat_reset)priMin=QString::fromStdString(Fluke::fluke189ValueToString(pMin));
			priAvg=QString::fromStdString(Fluke::fluke189ValueToString(pAvg));
	}


	if(!serr)
	{
			secValue=QString::fromStdString(Fluke::fluke189ValueToString(sValue));
			if(!stat_reset)secMax=QString::fromStdString(Fluke::fluke189ValueToString(sMax));
			if(!stat_reset)secMin=QString::fromStdString(Fluke::fluke189ValueToString(sMin));
			secAvg=QString::fromStdString(Fluke::fluke189ValueToString(sAvg));
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
