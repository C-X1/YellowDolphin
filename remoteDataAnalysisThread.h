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
#include <QVector>
#include <QMutex>
#include <QMutexLocker>
#include "Fluke189.hpp"


class remoteDataAnalysisThread : public QThread
{
Q_OBJECT
public:
	remoteDataAnalysisThread();
	virtual ~remoteDataAnalysisThread();

	void run();
	void stop();

private:
	QVector<Fluke::Fluke189::RCT_QD0> qd0Data;
	QMutex mutex;
	bool stop_requested;

signals:
	void primaryValue(QString priValue);

public slots:
	void getFluke189_QD0(Fluke::Fluke189::RCT_QD0 container);

private slots:


};

#endif /* REMOTEDATAANALYSISTHREAD_H_ */
