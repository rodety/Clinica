/****************************************************************************
** Meta object code from reading C++ file 'imageitem.h'
**
** Created: Wed 27. May 12:30:59 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../imageitem.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'imageitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ImageItem[] = {

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
      17,   11,   10,   10, 0x08,
      31,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ImageItem[] = {
    "ImageItem\0\0frame\0setFrame(int)\0"
    "updateItemPosition()\0"
};

const QMetaObject ImageItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ImageItem,
      qt_meta_data_ImageItem, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ImageItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ImageItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ImageItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ImageItem))
        return static_cast<void*>(const_cast< ImageItem*>(this));
    if (!strcmp(_clname, "QGraphicsPixmapItem"))
        return static_cast< QGraphicsPixmapItem*>(const_cast< ImageItem*>(this));
    return QObject::qt_metacast(_clname);
}

int ImageItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setFrame((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: updateItemPosition(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE