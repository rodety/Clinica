/****************************************************************************
** Meta object code from reading C++ file 'newtask_agenda_ui.h'
**
** Created: Wed 27. May 12:30:35 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../newtask_agenda_ui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'newtask_agenda_ui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_newTask_agenda_ui[] = {

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
      19,   18,   18,   18, 0x08,
      49,   18,   18,   18, 0x08,
      78,   18,   18,   18, 0x08,
     114,  109,   18,   18, 0x08,
     157,  151,   18,   18, 0x08,
     191,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_newTask_agenda_ui[] = {
    "newTask_agenda_ui\0\0on_pushButton_Acept_clicked()\0"
    "on_pushButton_Save_clicked()\0"
    "on_pushButton_Cancel_clicked()\0arg1\0"
    "on_lineEdit_Name_textEdited(QString)\0"
    "index\0on_tableView_clicked(QModelIndex)\0"
    "on_lineEdit_Telefono_editingFinished()\0"
};

const QMetaObject newTask_agenda_ui::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_newTask_agenda_ui,
      qt_meta_data_newTask_agenda_ui, 0 }
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
        switch (_id) {
        case 0: on_pushButton_Acept_clicked(); break;
        case 1: on_pushButton_Save_clicked(); break;
        case 2: on_pushButton_Cancel_clicked(); break;
        case 3: on_lineEdit_Name_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: on_tableView_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: on_lineEdit_Telefono_editingFinished(); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
