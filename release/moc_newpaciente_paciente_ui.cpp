/****************************************************************************
** Meta object code from reading C++ file 'newpaciente_paciente_ui.h'
**
** Created: Sat 11. Jun 15:33:06 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../newpaciente_paciente_ui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'newpaciente_paciente_ui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_newPaciente_paciente_ui[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
      48,   24,   24,   24, 0x08,
      78,   24,   24,   24, 0x08,
     107,   24,   24,   24, 0x08,
     143,  138,   24,   24, 0x08,
     180,   24,   24,   24, 0x08,
     221,  138,   24,   24, 0x08,
     273,  265,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_newPaciente_paciente_ui[] = {
    "newPaciente_paciente_ui\0\0"
    "update_List_patients()\0"
    "on_pushButton_Acept_clicked()\0"
    "on_pushButton_Save_clicked()\0"
    "on_pushButton_Cancel_clicked()\0arg1\0"
    "on_lineEdit_Dni_textChanged(QString)\0"
    "on_lineEdit_FatherName_editingFinished()\0"
    "on_lineEdit_FatherName_textChanged(QString)\0"
    "checked\0on_checkBox_Historia_clicked(bool)\0"
};

void newPaciente_paciente_ui::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        newPaciente_paciente_ui *_t = static_cast<newPaciente_paciente_ui *>(_o);
        switch (_id) {
        case 0: _t->update_List_patients(); break;
        case 1: _t->on_pushButton_Acept_clicked(); break;
        case 2: _t->on_pushButton_Save_clicked(); break;
        case 3: _t->on_pushButton_Cancel_clicked(); break;
        case 4: _t->on_lineEdit_Dni_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_lineEdit_FatherName_editingFinished(); break;
        case 6: _t->on_lineEdit_FatherName_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_checkBox_Historia_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData newPaciente_paciente_ui::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject newPaciente_paciente_ui::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_newPaciente_paciente_ui,
      qt_meta_data_newPaciente_paciente_ui, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &newPaciente_paciente_ui::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *newPaciente_paciente_ui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *newPaciente_paciente_ui::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_newPaciente_paciente_ui))
        return static_cast<void*>(const_cast< newPaciente_paciente_ui*>(this));
    return QWidget::qt_metacast(_clname);
}

int newPaciente_paciente_ui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void newPaciente_paciente_ui::update_List_patients()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
