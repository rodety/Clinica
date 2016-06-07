/****************************************************************************
** Meta object code from reading C++ file 'login_ui.h'
**
** Created: Wed 27. May 12:25:13 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../login_ui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'login_ui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_login_ui[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x08,
      40,    9,    9,    9, 0x08,
      75,    9,    9,    9, 0x08,
     100,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_login_ui[] = {
    "login_ui\0\0on_pushButton_Login_clicked()\0"
    "on_pushButton_configurar_clicked()\0"
    "on_tabWidget_destroyed()\0"
    "on_lineEdit_Password_returnPressed()\0"
};

const QMetaObject login_ui::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_login_ui,
      qt_meta_data_login_ui, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &login_ui::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *login_ui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *login_ui::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_login_ui))
        return static_cast<void*>(const_cast< login_ui*>(this));
    return QWidget::qt_metacast(_clname);
}

int login_ui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pushButton_Login_clicked(); break;
        case 1: on_pushButton_configurar_clicked(); break;
        case 2: on_tabWidget_destroyed(); break;
        case 3: on_lineEdit_Password_returnPressed(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
