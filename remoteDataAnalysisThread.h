/*
 * remoteDataAnalysisThread.h
 *
 *  Created on: 02.06.2010
 *      Author: cyborg-x1
 */

#ifndef REMOTEDATAANALYSISTHREAD_H_
#define REMOTEDATAANALYSISTHREAD_H_

#include <QThread>
#include <QObject>
#include <QTimer>
#include <QReadWriteLock>
#include <math.h>
#include <stdlib.h>

#include <QVector>
#include "Fluke189.hpp"
#include "QFlukeMetaType.h"



class remoteDataAnalysisThread : public QThread
{
Q_OBJECT
public:
	remoteDataAnalysisThread();
	virtual ~remoteDataAnalysisThread();

	void run();
	void stop();



private:
	QTimer* timer_analysis;
	QReadWriteLock lock;

	QVector<Fluke::Fluke189::RCT_QD0> qd0Data;


	//Variables to clear min max and avg
	bool pReset, sReset;

	Fluke::Fluke189QD0Logging Logger;



signals:
	void updateCurrentValues(QString priValue,
							 QString priMin,
							 QString priMax,
							 QString priAvg,
							 QString secValue,
							 QString secMin,
							 QString secMax,
							 QString secAvg);
	void setGraph(unsigned int priTimeIndex, unsigned int secTimeIndex,
			 Fluke::Fluke189QD0Logging::Fluke189Value_t value,
			 Fluke::Fluke189QD0Logging::Fluke189Value_t primax,
			 Fluke::Fluke189QD0Logging::Fluke189Value_t primin,
			 Fluke::Fluke189QD0Logging::Fluke189Value_t priavg,
			 Fluke::Fluke189QD0Logging::Fluke189Value_t secvalue,
			 Fluke::Fluke189QD0Logging::Fluke189Value_t secmax,
			 Fluke::Fluke189QD0Logging::Fluke189Value_t secmin,
			 Fluke::Fluke189QD0Logging::Fluke189Value_t secavg);

signals:
	void primary_reset();
	void secondary_reset();

public slots:
	void getFluke189_QD0(Fluke::Fluke189::RCT_QD0 container);
	void reset_primary();
	void reset_secondary();

private slots:
	void analysis();

};

#endif /* REMOTEDATAANALYSISTHREAD_H_ */
