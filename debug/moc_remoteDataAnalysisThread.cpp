/****************************************************************************
** Meta object code from reading C++ file 'remoteDataAnalysisThread.h'
**
** Created: Fri Jun 4 00:32:14 2010
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
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      35,   26,   25,   25, 0x05,

 // slots: signature, parameters, type, tag, flags
      67,   57,   25,   25, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_remoteDataAnalysisThread[] = {
    "remoteDataAnalysisThread\0\0priValue\0"
    "primaryValue(QString)\0container\0"
    "getFluke189_QD0(Fluke::Fluke189::RCT_QD0)\0"
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
        case 0: primaryValue((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: getFluke189_QD0((*reinterpret_cast< Fluke::Fluke189::RCT_QD0(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void remoteDataAnalysisThread::primaryValue(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
