/****************************************************************************
** Meta object code from reading C++ file 'remoteDataAnalysisThread.h'
**
** Created: Thu Sep 2 23:25:26 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../remoteDataAnalysisThread.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'remoteDataAnalysisThread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_remoteDataAnalysisThread[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      86,   26,   25,   25, 0x05,
     254,  171,   25,   25, 0x05,
     618,   25,   25,   25, 0x05,
     634,   25,   25,   25, 0x05,

 // slots: signature, parameters, type, tag, flags
     662,  652,   25,   25, 0x0a,
     704,   25,   25,   25, 0x0a,
     720,   25,   25,   25, 0x0a,
     738,   25,   25,   25, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_remoteDataAnalysisThread[] = {
    "remoteDataAnalysisThread\0\0"
    "priValue,priMin,priMax,priAvg,secValue,secMin,secMax,secAvg\0"
    "updateCurrentValues(QString,QString,QString,QString,QString,QString,QS"
    "tring,QString)\0"
    "priTimeIndex,secTimeIndex,value,primax,primin,priavg,secvalue,secmax,s"
    "ecmin,secavg\0"
    "setGraph(uint,uint,Fluke::Fluke189QD0Logging::Fluke189Value_t,Fluke::F"
    "luke189QD0Logging::Fluke189Value_t,Fluke::Fluke189QD0Logging::Fluke189"
    "Value_t,Fluke::Fluke189QD0Logging::Fluke189Value_t,Fluke::Fluke189QD0L"
    "ogging::Fluke189Value_t,Fluke::Fluke189QD0Logging::Fluke189Value_t,Flu"
    "ke::Fluke189QD0Logging::Fluke189Value_t,Fluke::Fluke189QD0Logging::Flu"
    "ke189Value_t)\0"
    "primary_reset()\0secondary_reset()\0"
    "container\0getFluke189_QD0(Fluke::Fluke189::RCT_QD0)\0"
    "reset_primary()\0reset_secondary()\0"
    "analysis()\0"
};

const QMetaObject remoteDataAnalysisThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_remoteDataAnalysisThread,
      qt_meta_data_remoteDataAnalysisThread, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &remoteDataAnalysisThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *remoteDataAnalysisThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *remoteDataAnalysisThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_remoteDataAnalysisThread))
        return static_cast<void*>(const_cast< remoteDataAnalysisThread*>(this));
    return QThread::qt_metacast(_clname);
}

int remoteDataAnalysisThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: updateCurrentValues((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< QString(*)>(_a[7])),(*reinterpret_cast< QString(*)>(_a[8]))); break;
        case 1: setGraph((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< Fluke::Fluke189QD0Logging::Fluke189Value_t(*)>(_a[3])),(*reinterpret_cast< Fluke::Fluke189QD0Logging::Fluke189Value_t(*)>(_a[4])),(*reinterpret_cast< Fluke::Fluke189QD0Logging::Fluke189Value_t(*)>(_a[5])),(*reinterpret_cast< Fluke::Fluke189QD0Logging::Fluke189Value_t(*)>(_a[6])),(*reinterpret_cast< Fluke::Fluke189QD0Logging::Fluke189Value_t(*)>(_a[7])),(*reinterpret_cast< Fluke::Fluke189QD0Logging::Fluke189Value_t(*)>(_a[8])),(*reinterpret_cast< Fluke::Fluke189QD0Logging::Fluke189Value_t(*)>(_a[9])),(*reinterpret_cast< Fluke::Fluke189QD0Logging::Fluke189Value_t(*)>(_a[10]))); break;
        case 2: primary_reset(); break;
        case 3: secondary_reset(); break;
        case 4: getFluke189_QD0((*reinterpret_cast< Fluke::Fluke189::RCT_QD0(*)>(_a[1]))); break;
        case 5: reset_primary(); break;
        case 6: reset_secondary(); break;
        case 7: analysis(); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void remoteDataAnalysisThread::updateCurrentValues(QString _t1, QString _t2, QString _t3, QString _t4, QString _t5, QString _t6, QString _t7, QString _t8)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void remoteDataAnalysisThread::setGraph(unsigned int _t1, unsigned int _t2, Fluke::Fluke189QD0Logging::Fluke189Value_t _t3, Fluke::Fluke189QD0Logging::Fluke189Value_t _t4, Fluke::Fluke189QD0Logging::Fluke189Value_t _t5, Fluke::Fluke189QD0Logging::Fluke189Value_t _t6, Fluke::Fluke189QD0Logging::Fluke189Value_t _t7, Fluke::Fluke189QD0Logging::Fluke189Value_t _t8, Fluke::Fluke189QD0Logging::Fluke189Value_t _t9, Fluke::Fluke189QD0Logging::Fluke189Value_t _t10)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)), const_cast<void*>(reinterpret_cast<const void*>(&_t9)), const_cast<void*>(reinterpret_cast<const void*>(&_t10)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void remoteDataAnalysisThread::primary_reset()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void remoteDataAnalysisThread::secondary_reset()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
