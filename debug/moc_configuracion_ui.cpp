/****************************************************************************
** Meta object code from reading C++ file 'configuracion_ui.h'
**
** Created: Thu 14. May 11:51:01 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../configuracion_ui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'configuracion_ui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_configuracion_ui[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x08,
      51,   17,   17,   17, 0x08,
      82,   17,   17,   17, 0x08,
     123,  118,   17,   17, 0x08,
     182,   17,   17,   17, 0x08,
     213,  208,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_configuracion_ui[] = {
    "configuracion_ui\0\0on_pushButton_VerDatos_clicked()\0"
    "on_pushButton_Editar_clicked()\0"
    "on_pushButton_newPersonal_clicked()\0"
    "item\0on_tableWidget_trabajadores_itemClicked(QTableWidgetItem*)\0"
    "on_pushButton_3_clicked()\0arg1\0"
    "on_lineEdit_Dni_textChanged(QString)\0"
};

const QMetaObject configuracion_ui::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_configuracion_ui,
      qt_meta_data_configuracion_ui, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &configuracion_ui::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *configuracion_ui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *configuracion_ui::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_configuracion_ui))
        return static_cast<void*>(const_cast< configuracion_ui*>(this));
    return QWidget::qt_metacast(_clname);
}

int configuracion_ui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pushButton_VerDatos_clicked(); break;
        case 1: on_pushButton_Editar_clicked(); break;
        case 2: on_pushButton_newPersonal_clicked(); break;
        case 3: on_tableWidget_trabajadores_itemClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 4: on_pushButton_3_clicked(); break;
        case 5: on_lineEdit_Dni_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
