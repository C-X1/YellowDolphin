/****************************************************************************
** Meta object code from reading C++ file 'yellowdolphindownloader.h'
**
** Created: Thu Sep 2 01:34:34 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../yellowdolphindownloader.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'yellowdolphindownloader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_YellowDolphinDownloader[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x08,
      62,   24,   24,   24, 0x08,
      92,   24,   24,   24, 0x08,
     126,   24,   24,   24, 0x08,
     214,  154,   24,   24, 0x0a,
     369,  299,   24,   24, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_YellowDolphinDownloader[] = {
    "YellowDolphinDownloader\0\0"
    "on_pushButton_remlog_query_clicked()\0"
    "on_searchmultimeter_clicked()\0"
    "on_refreshInterfacesBut_clicked()\0"
    "on_downloadButton_clicked()\0"
    "priValue,priMin,priMax,priAvg,secValue,secMin,secMax,secAvg\0"
    "updateCurrentValues(QString,QString,QString,QString,QString,QString,QS"
    "tring,QString)\0"
    "timeindex,privalue,primax,primin,priavg,secvalue,secmax,secmin,secavg\0"
    "addPlotValues(uint,Fluke::Fluke189QD0Logging::Fluke189Value_t,Fluke::F"
    "luke189QD0Logging::Fluke189Value_t,Fluke::Fluke189QD0Logging::Fluke189"
    "Value_t,Fluke::Fluke189QD0Logging::Fluke189Value_t,Fluke::Fluke189QD0L"
    "ogging::Fluke189Value_t,Fluke::Fluke189QD0Logging::Fluke189Value_t,Flu"
    "ke::Fluke189QD0Logging::Fluke189Value_t,Fluke::Fluke189QD0Logging::Flu"
    "ke189Value_t)\0"
};

const QMetaObject YellowDolphinDownloader::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_YellowDolphinDownloader,
      qt_meta_data_YellowDolphinDownloader, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &YellowDolphinDownloader::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *YellowDolphinDownloader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *YellowDolphinDownloader::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_YellowDolphinDownloader))
        return static_cast<void*>(const_cast< YellowDolphinDownloader*>(this));
    return QWidget::qt_metacast(_clname);
}

int YellowDolphinDownloader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pushButton_remlog_query_clicked(); break;
        case 1: on_searchmultimeter_clicked(); break;
        case 2: on_refreshInterfacesBut_clicked(); break;
        case 3: on_downloadButton_clicked(); break;
        case 4: updateCurrentValues((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< QString(*)>(_a[7])),(*reinterpret_cast< QString(*)>(_a[8]))); break;
        case 5: addPlotValues((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< Fluke::Fluke189QD0Logging::Fluke189Value_t(*)>(_a[2])),(*reinterpret_cast< Fluke::Fluke189QD0Logging::Fluke189Value_t(*)>(_a[3])),(*reinterpret_cast< Fluke::Fluke189QD0Logging::Fluke189Value_t(*)>(_a[4])),(*reinterpret_cast< Fluke::Fluke189QD0Logging::Fluke189Value_t(*)>(_a[5])),(*reinterpret_cast< Fluke::Fluke189QD0Logging::Fluke189Value_t(*)>(_a[6])),(*reinterpret_cast< Fluke::Fluke189QD0Logging::Fluke189Value_t(*)>(_a[7])),(*reinterpret_cast< Fluke::Fluke189QD0Logging::Fluke189Value_t(*)>(_a[8])),(*reinterpret_cast< Fluke::Fluke189QD0Logging::Fluke189Value_t(*)>(_a[9]))); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
