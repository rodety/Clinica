/****************************************************************************
** Meta object code from reading C++ file 'newtask_agenda_ui.h'
**
** Created: Sat 11. Jun 15:32:56 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../newtask_agenda_ui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'newtask_agenda_ui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_newTask_agenda_ui[] = {

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
      19,   18,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
      33,   18,   18,   18, 0x08,
      63,   18,   18,   18, 0x08,
      92,   18,   18,   18, 0x08,
     128,  123,   18,   18, 0x08,
     171,  165,   18,   18, 0x08,
     205,   18,   18,   18, 0x08,
     244,  123,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_newTask_agenda_ui[] = {
    "newTask_agenda_ui\0\0update_list()\0"
    "on_pushButton_Acept_clicked()\0"
    "on_pushButton_Save_clicked()\0"
    "on_pushButton_Cancel_clicked()\0arg1\0"
    "on_lineEdit_Name_textEdited(QString)\0"
    "index\0on_tableView_clicked(QModelIndex)\0"
    "on_lineEdit_Telefono_editingFinished()\0"
    "on_lineEdit_Name_textChanged(QString)\0"
};

void newTask_agenda_ui::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        newTask_agenda_ui *_t = static_cast<newTask_agenda_ui *>(_o);
        switch (_id) {
        case 0: _t->update_list(); break;
        case 1: _t->on_pushButton_Acept_clicked(); break;
        case 2: _t->on_pushButton_Save_clicked(); break;
        case 3: _t->on_pushButton_Cancel_clicked(); break;
        case 4: _t->on_lineEdit_Name_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_tableView_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 6: _t->on_lineEdit_Telefono_editingFinished(); break;
        case 7: _t->on_lineEdit_Name_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData newTask_agenda_ui::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject newTask_agenda_ui::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_newTask_agenda_ui,
      qt_meta_data_newTask_agenda_ui, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &newTask_agenda_ui::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *newTask_agenda_ui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *newTask_agenda_ui::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_newTask_agenda_ui))
        return static_cast<void*>(const_cast< newTask_agenda_ui*>(this));
    return QWidget::qt_metacast(_clname);
}

int newTask_agenda_ui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void newTask_agenda_ui::update_list()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
