/*
 * remoteLogThread.h
 *
 *  Created on: 27.05.2010
 *      Author: cyborg-x1
 */

#ifndef REMOTELOGTHREAD_H_
#define REMOTELOGTHREAD_H_

#include <QThread>
#include <QObject>
#include <QString>
#include <QVector>
#include <QMutex>
#include <QMutexLocker>
#include "Fluke189.hpp"
#include "QFlukeMetaType.h"

class remoteLogThread : public QThread
{
	Q_OBJECT
private:
	QString interface;

	QMutex stop_mutex;
	bool stop_requested;

public:
	remoteLogThread();
	virtual ~remoteLogThread();



	void stop();
	void run();

signals:
		void handOverSerialResponse(Fluke::Fluke189::RCT_QD0);

public slots:
        void setInterface(QString interface);

};

#endif /* REMOTELOGTHREAD_H_ */
