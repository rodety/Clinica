/****************************************************************************
** Meta object code from reading C++ file 'nuevo_ingreso_ui.h'
**
** Created: Thu 14. May 11:51:22 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../caja/nuevo_ingreso_ui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'nuevo_ingreso_ui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_nuevo_ingreso_ui[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_nuevo_ingreso_ui[] = {
    "nuevo_ingreso_ui\0"
};

const QMetaObject nuevo_ingreso_ui::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_nuevo_ingreso_ui,
      qt_meta_data_nuevo_ingreso_ui, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &nuevo_ingreso_ui::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *nuevo_ingreso_ui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *nuevo_ingreso_ui::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_nuevo_ingreso_ui))
        return static_cast<void*>(const_cast< nuevo_ingreso_ui*>(this));
    return QWidget::qt_metacast(_clname);
}

int nuevo_ingreso_ui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
