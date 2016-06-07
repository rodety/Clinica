/****************************************************************************
** Meta object code from reading C++ file 'newpersonal_personal_ui.h'
**
** Created: Wed 27. May 12:30:52 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../newpersonal_personal_ui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'newpersonal_personal_ui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_newpersonal_personal_ui[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x08,
      55,   24,   24,   24, 0x08,
      86,   24,   24,   24, 0x08,
     120,  115,   24,   24, 0x08,
     162,  156,   24,   24, 0x08,
     214,  204,   24,   24, 0x08,
     261,  115,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_newpersonal_personal_ui[] = {
    "newpersonal_personal_ui\0\0"
    "on_pushButton_Acept_clicked()\0"
    "on_pushButton_Cancel_clicked()\0"
    "on_pushButton_Save_clicked()\0arg1\0"
    "on_comboBox_tipo_activated(QString)\0"
    "index\0on_comboBox_tipo_currentIndexChanged(int)\0"
    "arg1,arg2\0on_lineEdit_Dni_cursorPositionChanged(int,int)\0"
    "on_lineEdit_Dni_textChanged(QString)\0"
};

const QMetaObject newpersonal_personal_ui::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_newpersonal_personal_ui,
      qt_meta_data_newpersonal_personal_ui, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &newpersonal_personal_ui::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *newpersonal_personal_ui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *newpersonal_personal_ui::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_newpersonal_personal_ui))
        return static_cast<void*>(const_cast< newpersonal_personal_ui*>(this));
    return QWidget::qt_metacast(_clname);
}

int newpersonal_personal_ui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pushButton_Acept_clicked(); break;
        case 1: on_pushButton_Cancel_clicked(); break;
        case 2: on_pushButton_Save_clicked(); break;
        case 3: on_comboBox_tipo_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: on_comboBox_tipo_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: on_lineEdit_Dni_cursorPositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: on_lineEdit_Dni_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
