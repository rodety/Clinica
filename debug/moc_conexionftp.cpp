/****************************************************************************
** Meta object code from reading C++ file 'conexionftp.h'
**
** Created: Mon 18. Feb 22:34:22 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../conexionftp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'conexionftp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Conexionftp[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,
      32,   12,   12,   12, 0x05,
      47,   12,   12,   12, 0x05,
      65,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      94,   87,   12,   12, 0x0a,
     139,  118,   12,   12, 0x0a,
     188,  181,   12,   12, 0x0a,
     205,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Conexionftp[] = {
    "Conexionftp\0\0conexionfinished()\0"
    "putcorrected()\0puterror(QString)\0"
    "conexionestablished()\0,error\0"
    "commandfinish(int,bool)\0readBytes,totalBytes\0"
    "updateDataTransferProgress(qint64,qint64)\0"
    "estado\0stateChange(int)\0enableConnectButton()\0"
};

const QMetaObject Conexionftp::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Conexionftp,
      qt_meta_data_Conexionftp, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Conexionftp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Conexionftp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Conexionftp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Conexionftp))
        return static_cast<void*>(const_cast< Conexionftp*>(this));
    return QWidget::qt_metacast(_clname);
}

int Conexionftp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: conexionfinished(); break;
        case 1: putcorrected(); break;
        case 2: puterror((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: conexionestablished(); break;
        case 4: commandfinish((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: updateDataTransferProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 6: stateChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: enableConnectButton(); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Conexionftp::conexionfinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Conexionftp::putcorrected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void Conexionftp::puterror(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Conexionftp::conexionestablished()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
