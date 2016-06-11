/****************************************************************************
** Meta object code from reading C++ file 'consulta_paciente_ui.h'
**
** Created: Fri 10. Jun 12:24:50 2016
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../consulta_paciente_ui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'consulta_paciente_ui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_consulta_paciente_ui[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      27,   22,   21,   21, 0x08,
      85,   21,   21,   21, 0x08,
     122,   21,   21,   21, 0x08,
     161,   21,   21,   21, 0x08,
     199,   21,   21,   21, 0x08,
     232,   21,   21,   21, 0x08,
     269,   21,   21,   21, 0x08,
     293,   21,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_consulta_paciente_ui[] = {
    "consulta_paciente_ui\0\0item\0"
    "on_tableWidget_SurgeryList_itemClicked(QTableWidgetItem*)\0"
    "on_pushButton_editConsulta_clicked()\0"
    "on_pushButton_deleteConsulta_clicked()\0"
    "on_pushButton_printConsulta_clicked()\0"
    "on_pushButton_printAll_clicked()\0"
    "on_pushButton_showConsulta_clicked()\0"
    "on_pushButton_clicked()\0"
    "on_pushButton_generarPDF_clicked()\0"
};

const QMetaObject consulta_paciente_ui::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_consulta_paciente_ui,
      qt_meta_data_consulta_paciente_ui, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &consulta_paciente_ui::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *consulta_paciente_ui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *consulta_paciente_ui::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_consulta_paciente_ui))
        return static_cast<void*>(const_cast< consulta_paciente_ui*>(this));
    return QWidget::qt_metacast(_clname);
}

int consulta_paciente_ui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_tableWidget_SurgeryList_itemClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 1: on_pushButton_editConsulta_clicked(); break;
        case 2: on_pushButton_deleteConsulta_clicked(); break;
        case 3: on_pushButton_printConsulta_clicked(); break;
        case 4: on_pushButton_printAll_clicked(); break;
        case 5: on_pushButton_showConsulta_clicked(); break;
        case 6: on_pushButton_clicked(); break;
        case 7: on_pushButton_generarPDF_clicked(); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
