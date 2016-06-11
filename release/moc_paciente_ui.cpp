/****************************************************************************
** Meta object code from reading C++ file 'paciente_ui.h'
**
** Created: Sat 11. Jun 15:32:47 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../paciente_ui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'paciente_ui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_paciente_ui[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x08,
      47,   12,   12,   12, 0x08,
      81,   12,   12,   12, 0x08,
     112,   12,   12,   12, 0x08,
     146,   12,   12,   12, 0x08,
     181,   12,   12,   12, 0x08,
     212,   12,   12,   12, 0x08,
     253,  248,   12,   12, 0x08,
     310,  304,   12,   12, 0x08,
     344,  248,   12,   12, 0x08,
     385,  304,   12,   12, 0x08,
     435,  248,   12,   12, 0x08,
     475,   12,   12,   12, 0x08,
     510,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_paciente_ui[] = {
    "paciente_ui\0\0on_newPaciente_paciente_clicked()\0"
    "on_newConsulta_paciente_clicked()\0"
    "on_eliminar_paciente_clicked()\0"
    "on_verImagenes_paciente_clicked()\0"
    "on_verConsultas_paciente_clicked()\0"
    "on_verDatos_paciente_clicked()\0"
    "on_pushButton_editarDatos_clicked()\0"
    "arg1\0on_lineEdit_dniCurrentPatient_textChanged(QString)\0"
    "index\0on_comboBox_search_activated(int)\0"
    "on_comboBox_currentIndexChanged(QString)\0"
    "on_tableView_ListaPacientes1_clicked(QModelIndex)\0"
    "on_lineEdit_buscar_textChanged(QString)\0"
    "on_lineEdit_buscar_returnPressed()\0"
    "update_list()\0"
};

void paciente_ui::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        paciente_ui *_t = static_cast<paciente_ui *>(_o);
        switch (_id) {
        case 0: _t->on_newPaciente_paciente_clicked(); break;
        case 1: _t->on_newConsulta_paciente_clicked(); break;
        case 2: _t->on_eliminar_paciente_clicked(); break;
        case 3: _t->on_verImagenes_paciente_clicked(); break;
        case 4: _t->on_verConsultas_paciente_clicked(); break;
        case 5: _t->on_verDatos_paciente_clicked(); break;
        case 6: _t->on_pushButton_editarDatos_clicked(); break;
        case 7: _t->on_lineEdit_dniCurrentPatient_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_comboBox_search_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_comboBox_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->on_tableView_ListaPacientes1_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 11: _t->on_lineEdit_buscar_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->on_lineEdit_buscar_returnPressed(); break;
        case 13: _t->update_list(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData paciente_ui::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject paciente_ui::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_paciente_ui,
      qt_meta_data_paciente_ui, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &paciente_ui::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *paciente_ui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *paciente_ui::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_paciente_ui))
        return static_cast<void*>(const_cast< paciente_ui*>(this));
    return QWidget::qt_metacast(_clname);
}

int paciente_ui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
