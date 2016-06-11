/****************************************************************************
** Meta object code from reading C++ file 'alertas_ui.h'
**
** Created: Sat 11. Jun 15:33:43 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../alertas_ui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'alertas_ui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_alertas_ui[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      41,   11,   11,   11, 0x08,
      68,   11,   11,   11, 0x08,
      91,   11,   11,   11, 0x08,
     128,  123,   11,   11, 0x08,
     184,   11,   11,   11, 0x08,
     218,  213,   11,   11, 0x08,
     249,   11,   11,   11, 0x08,
     291,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_alertas_ui[] = {
    "alertas_ui\0\0on_newAlert_alerta_clicked()\0"
    "on_editar_alerta_clicked()\0"
    "on_verAlerta_clicked()\0"
    "on_pushButton_showAll_clicked()\0item\0"
    "on_tableWidget_AlertList_itemClicked(QTableWidgetItem*)\0"
    "on_eliminar_alerta_clicked()\0date\0"
    "on_dateEdit_dateChanged(QDate)\0"
    "on_pushButton_Alert_changeColor_clicked()\0"
    "on_dateEdit_editingFinished()\0"
};

void alertas_ui::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        alertas_ui *_t = static_cast<alertas_ui *>(_o);
        switch (_id) {
        case 0: _t->on_newAlert_alerta_clicked(); break;
        case 1: _t->on_editar_alerta_clicked(); break;
        case 2: _t->on_verAlerta_clicked(); break;
        case 3: _t->on_pushButton_showAll_clicked(); break;
        case 4: _t->on_tableWidget_AlertList_itemClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 5: _t->on_eliminar_alerta_clicked(); break;
        case 6: _t->on_dateEdit_dateChanged((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 7: _t->on_pushButton_Alert_changeColor_clicked(); break;
        case 8: _t->on_dateEdit_editingFinished(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData alertas_ui::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject alertas_ui::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_alertas_ui,
      qt_meta_data_alertas_ui, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &alertas_ui::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *alertas_ui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *alertas_ui::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_alertas_ui))
        return static_cast<void*>(const_cast< alertas_ui*>(this));
    return QWidget::qt_metacast(_clname);
}

int alertas_ui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
