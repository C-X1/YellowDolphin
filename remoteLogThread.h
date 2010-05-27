/*
 * remoteLogThread.h
 *
 *  Created on: 27.05.2010
 *      Author: cyborg-x1
 */

#ifndef REMOTELOGTHREAD_H_
#define REMOTELOGTHREAD_H_

#include <qthread.h>
#include <qobject.h>

class remoteLogThread : public QThread
{
	Q_OBJECT
public:
	remoteLogThread();
	virtual ~remoteLogThread();

	void run();

signals:


};

#endif /* REMOTELOGTHREAD_H_ */
