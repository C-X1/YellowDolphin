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
#include <string>
#include "Fluke189.hpp"

class remoteLogThread : public QThread
{
	Q_OBJECT
private:
	QString interface;

public:
	remoteLogThread();
	virtual ~remoteLogThread();

	QVector<Fluke::Fluke189::RCT_QD0> data;
	void run();

signals:

public slots:
        void setInterface(QString interface);

};

#endif /* REMOTELOGTHREAD_H_ */
