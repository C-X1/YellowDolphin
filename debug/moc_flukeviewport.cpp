/****************************************************************************
** Meta object code from reading C++ file 'flukeviewport.h'
**
** Created: Thu Aug 5 01:48:30 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../flukeviewport.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'flukeviewport.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FlukeViewPort[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      31,   15,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_FlukeViewPort[] = {
    "FlukeViewPort\0\0timeindex,value\0"
    "addValue(uint,Fluke::Fluke189QD0Logging::Fluke189Value_t)\0"
};

const QMetaObject FlukeViewPort::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FlukeViewPort,
      qt_meta_data_FlukeViewPort, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FlukeViewPort::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FlukeViewPort::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FlukeViewPort::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FlukeViewPort))
        return static_cast<void*>(const_cast< FlukeViewPort*>(this));
    return QWidget::qt_metacast(_clname);
}

int FlukeViewPort::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: addValue((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< Fluke::Fluke189QD0Logging::Fluke189Value_t(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
