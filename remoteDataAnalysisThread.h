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


	//Variables showing if inital values for min or max have been already set
	bool pMaxset, pMinset, sMaxset, sMinset;

	//Variables for calculation of current values
	Fluke::fluke189Value_t pValue, pMin, pMax, pAvg, sValue, sMin, sMax, sAvg;


signals:
	void updateCurrentValues(QString priValue,
							 QString priMin,
							 QString priMax,
							 QString priAvg,
							 QString secValue,
							 QString secMin,
							 QString secMax,
							 QString secAvg);

public slots:
	void getFluke189_QD0(Fluke::Fluke189::RCT_QD0 container);

private slots:
	void analysis();

};

#endif /* REMOTEDATAANALYSISTHREAD_H_ */
