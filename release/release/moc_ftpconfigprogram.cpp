/****************************************************************************
** Meta object code from reading C++ file 'ftpconfigprogram.h'
**
** Created: Wed 27. May 12:31:17 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ftpconfigprogram.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ftpconfigprogram.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ftpconfigprogram[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x08,
      44,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ftpconfigprogram[] = {
    "ftpconfigprogram\0\0on_pushButton_2_clicked()\0"
    "on_pushButton_clicked()\0"
};

const QMetaObject ftpconfigprogram::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ftpconfigprogram,
      qt_meta_data_ftpconfigprogram, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ftpconfigprogram::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ftpconfigprogram::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ftpconfigprogram::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ftpconfigprogram))
        return static_cast<void*>(const_cast< ftpconfigprogram*>(this));
    return QWidget::qt_metacast(_clname);
}

int ftpconfigprogram::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pushButton_2_clicked(); break;
        case 1: on_pushButton_clicked(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
