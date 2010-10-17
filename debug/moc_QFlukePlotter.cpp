/****************************************************************************
** Meta object code from reading C++ file 'QFlukePlotter.hpp'
**
** Created: Thu Sep 2 21:54:17 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../QFlukePlotter/QFlukePlotter.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QFlukePlotter.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QFlukeCanvasEventFilter[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x0a,
      49,   44,   24,   24, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QFlukeCanvasEventFilter[] = {
    "QFlukeCanvasEventFilter\0\0resetToAutoScale()\0"
    "tpnt\0tellselection(QwtDoublePoint)\0"
};

const QMetaObject QFlukeCanvasEventFilter::staticMetaObject = {
    { &QwtPlotPicker::staticMetaObject, qt_meta_stringdata_QFlukeCanvasEventFilter,
      qt_meta_data_QFlukeCanvasEventFilter, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QFlukeCanvasEventFilter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QFlukeCanvasEventFilter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QFlukeCanvasEventFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QFlukeCanvasEventFilter))
        return static_cast<void*>(const_cast< QFlukeCanvasEventFilter*>(this));
    return QwtPlotPicker::qt_metacast(_clname);
}

int QFlukeCanvasEventFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QwtPlotPicker::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: resetToAutoScale(); break;
        case 1: tellselection((*reinterpret_cast< QwtDoublePoint(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_QFlukePlotter[] = {

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
      15,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QFlukePlotter[] = {
    "QFlukePlotter\0\0clear()\0"
};

const QMetaObject QFlukePlotter::staticMetaObject = {
    { &QwtPlot::staticMetaObject, qt_meta_stringdata_QFlukePlotter,
      qt_meta_data_QFlukePlotter, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QFlukePlotter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QFlukePlotter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QFlukePlotter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QFlukePlotter))
        return static_cast<void*>(const_cast< QFlukePlotter*>(this));
    return QwtPlot::qt_metacast(_clname);
}

int QFlukePlotter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QwtPlot::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: clear(); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
