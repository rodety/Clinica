/****************************************************************************
** Meta object code from reading C++ file 'agenda_ui.h'
**
** Created: Fri 10. Jun 20:10:29 2016
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../agenda_ui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'agenda_ui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_agenda_ui[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      31,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x08,
      43,   10,   10,   10, 0x08,
      76,   10,   10,   10, 0x08,
     109,   10,   10,   10, 0x08,
     144,   10,   10,   10, 0x08,
     182,  176,   10,   10, 0x08,
     230,  225,   10,   10, 0x08,
     273,  268,   10,   10, 0x08,
     323,  225,   10,   10, 0x08,
     366,  361,   10,   10, 0x08,
     411,   10,   10,   10, 0x08,
     446,   10,   10,   10, 0x08,
     487,   10,   10,   10, 0x08,
     531,  268,   10,   10, 0x08,
     583,   10,   10,   10, 0x08,
     633,   10,   10,   10, 0x08,
     678,  225,   10,   10, 0x08,
     727,   10,   10,   10, 0x08,
     781,   10,   10,   10, 0x08,
     832,  268,   10,   10, 0x08,
     895,   10,   10,   10, 0x08,
     939,   10,   10,   10, 0x08,
     985,   10,   10,   10, 0x08,
    1033,   10,   10,   10, 0x08,
    1069,   10,   10,   10, 0x08,
    1112,   10,   10,   10, 0x08,
    1150,  176,   10,   10, 0x08,
    1191,  225,   10,   10, 0x08,
    1224,  176,   10,   10, 0x08,
    1270,   10,   10,   10, 0x08,
    1304,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_agenda_ui[] = {
    "agenda_ui\0\0on_pushButton_newTask_clicked()\0"
    "on_pushButton_showTask_clicked()\0"
    "on_pushButton_editTask_clicked()\0"
    "on_pushButton_deleteTask_clicked()\0"
    "on_pushButton_showAll_clicked()\0index\0"
    "on_comboBox_Names_currentIndexChanged(int)\0"
    "date\0on_dateEdit_Agenda_dateChanged(QDate)\0"
    "item\0on_tablaView_Agend_itemClicked(QTableWidgetItem*)\0"
    "on_dateEdit_Alerta_dateChanged(QDate)\0"
    "arg1\0on_comboBox_dni_currentIndexChanged(QString)\0"
    "on_pushButton_showSelect_clicked()\0"
    "on_pushButton_show_SelectAlert_clicked()\0"
    "on_pushButton_Alerta_General_show_clicked()\0"
    "on_tableWidget_Alert_itemClicked(QTableWidgetItem*)\0"
    "on_pushButton_AlertaGeneral_changeColor_clicked()\0"
    "on_pushButton_Alert_Personales_add_clicked()\0"
    "on_dateEdit_Alerta_Personales_dateChanged(QDate)\0"
    "on_pushButton_show_SelectAlert_Personales_4_clicked()\0"
    "on_pushButton_Alert_Personal_changeColor_clicked()\0"
    "on_tableWidget_Alert_Personales_itemClicked(QTableWidgetItem*)\0"
    "on_pushButton_Alert_Personal_show_clicked()\0"
    "on_pushButton_Alert_Personales_edit_clicked()\0"
    "on_pushButton_Alert_Personales_remove_clicked()\0"
    "on_pushButton_show_Agenda_clicked()\0"
    "on_pushButton_agenda_changeColor_clicked()\0"
    "on_pushButton_update_Agenda_clicked()\0"
    "on_comboBox_dni_currentIndexChanged(int)\0"
    "on_calendarWidget_clicked(QDate)\0"
    "on_tablaView_Agend_doubleClicked(QModelIndex)\0"
    "on_pushButton_printList_clicked()\0"
    "update_table()\0"
};

const QMetaObject agenda_ui::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_agenda_ui,
      qt_meta_data_agenda_ui, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &agenda_ui::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *agenda_ui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *agenda_ui::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_agenda_ui))
        return static_cast<void*>(const_cast< agenda_ui*>(this));
    return QWidget::qt_metacast(_clname);
}

int agenda_ui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pushButton_newTask_clicked(); break;
        case 1: on_pushButton_showTask_clicked(); break;
        case 2: on_pushButton_editTask_clicked(); break;
        case 3: on_pushButton_deleteTask_clicked(); break;
        case 4: on_pushButton_showAll_clicked(); break;
        case 5: on_comboBox_Names_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: on_dateEdit_Agenda_dateChanged((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 7: on_tablaView_Agend_itemClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 8: on_dateEdit_Alerta_dateChanged((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 9: on_comboBox_dni_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: on_pushButton_showSelect_clicked(); break;
        case 11: on_pushButton_show_SelectAlert_clicked(); break;
        case 12: on_pushButton_Alerta_General_show_clicked(); break;
        case 13: on_tableWidget_Alert_itemClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 14: on_pushButton_AlertaGeneral_changeColor_clicked(); break;
        case 15: on_pushButton_Alert_Personales_add_clicked(); break;
        case 16: on_dateEdit_Alerta_Personales_dateChanged((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 17: on_pushButton_show_SelectAlert_Personales_4_clicked(); break;
        case 18: on_pushButton_Alert_Personal_changeColor_clicked(); break;
        case 19: on_tableWidget_Alert_Personales_itemClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 20: on_pushButton_Alert_Personal_show_clicked(); break;
        case 21: on_pushButton_Alert_Personales_edit_clicked(); break;
        case 22: on_pushButton_Alert_Personales_remove_clicked(); break;
        case 23: on_pushButton_show_Agenda_clicked(); break;
        case 24: on_pushButton_agenda_changeColor_clicked(); break;
        case 25: on_pushButton_update_Agenda_clicked(); break;
        case 26: on_comboBox_dni_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: on_calendarWidget_clicked((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 28: on_tablaView_Agend_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 29: on_pushButton_printList_clicked(); break;
        case 30: update_table(); break;
        default: ;
        }
        _id -= 31;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
