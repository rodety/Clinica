/****************************************************************************
** Meta object code from reading C++ file 'facebook_ui.h'
**
** Created: Sat 16. May 16:00:21 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../facebook_ui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'facebook_ui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_facebook_ui[] = {

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

static const char qt_meta_stringdata_facebook_ui[] = {
    "facebook_ui\0"
};

const QMetaObject facebook_ui::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_facebook_ui,
      qt_meta_data_facebook_ui, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &facebook_ui::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *facebook_ui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *facebook_ui::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_facebook_ui))
        return static_cast<void*>(const_cast< facebook_ui*>(this));
    return QWidget::qt_metacast(_clname);
}

int facebook_ui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
