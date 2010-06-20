/****************************************************************************
** Meta object code from reading C++ file 'remoteDataAnalysisThread.h'
**
** Created: Fri Jun 18 00:30:33 2010
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
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      86,   26,   25,   25, 0x05,

 // slots: signature, parameters, type, tag, flags
     181,  171,   25,   25, 0x0a,
     223,   25,   25,   25, 0x0a,
     239,   25,   25,   25, 0x0a,
     257,   25,   25,   25, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_remoteDataAnalysisThread[] = {
    "remoteDataAnalysisThread\0\0"
    "priValue,priMin,priMax,priAvg,secValue,secMin,secMax,secAvg\0"
    "updateCurrentValues(QString,QString,QString,QString,QString,QString,QS"
    "tring,QString)\0"
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
        case 1: getFluke189_QD0((*reinterpret_cast< Fluke::Fluke189::RCT_QD0(*)>(_a[1]))); break;
        case 2: reset_primary(); break;
        case 3: reset_secondary(); break;
        case 4: analysis(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void remoteDataAnalysisThread::updateCurrentValues(QString _t1, QString _t2, QString _t3, QString _t4, QString _t5, QString _t6, QString _t7, QString _t8)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
