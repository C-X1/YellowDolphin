/****************************************************************************
** Meta object code from reading C++ file 'remoteLogThread.h'
**
** Created: Mon Jun 7 16:20:41 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../remoteLogThread.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'remoteLogThread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_remoteLogThread[] = {

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
      17,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      76,   66,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_remoteLogThread[] = {
    "remoteLogThread\0\0"
    "handOverSerialResponse(Fluke::Fluke189::RCT_QD0)\0"
    "interface\0setInterface(QString)\0"
};

const QMetaObject remoteLogThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_remoteLogThread,
      qt_meta_data_remoteLogThread, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &remoteLogThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *remoteLogThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *remoteLogThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_remoteLogThread))
        return static_cast<void*>(const_cast< remoteLogThread*>(this));
    return QThread::qt_metacast(_clname);
}

int remoteLogThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: handOverSerialResponse((*reinterpret_cast< Fluke::Fluke189::RCT_QD0(*)>(_a[1]))); break;
        case 1: setInterface((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void remoteLogThread::handOverSerialResponse(Fluke::Fluke189::RCT_QD0 _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
