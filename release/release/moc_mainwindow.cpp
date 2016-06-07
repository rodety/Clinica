/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Wed 27. May 12:30:31 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      39,   11,   11,   11, 0x08,
      69,   11,   11,   11, 0x08,
      96,   11,   11,   11, 0x08,
     125,   11,   11,   11, 0x08,
     154,   11,   11,   11, 0x08,
     185,   11,   11,   11, 0x08,
     219,   11,   11,   11, 0x08,
     249,   11,   11,   11, 0x08,
     286,   11,   11,   11, 0x08,
     316,   11,   11,   11, 0x08,
     344,   11,   11,   11, 0x08,
     374,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0on_actionLogin_triggered()\0"
    "on_actionFacebook_triggered()\0"
    "on_actionAyuda_triggered()\0"
    "on_actionAlertas_triggered()\0"
    "on_actionMailing_triggered()\0"
    "on_actionSeguridad_triggered()\0"
    "on_actionTratamientos_triggered()\0"
    "on_actionUsuarios_triggered()\0"
    "on_actionHistoriaClinica_triggered()\0"
    "on_actionPaciente_triggered()\0"
    "on_actionAgenda_triggered()\0"
    "on_actionPersonal_triggered()\0"
    "on_actionCaja_triggered()\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_actionLogin_triggered(); break;
        case 1: on_actionFacebook_triggered(); break;
        case 2: on_actionAyuda_triggered(); break;
        case 3: on_actionAlertas_triggered(); break;
        case 4: on_actionMailing_triggered(); break;
        case 5: on_actionSeguridad_triggered(); break;
        case 6: on_actionTratamientos_triggered(); break;
        case 7: on_actionUsuarios_triggered(); break;
        case 8: on_actionHistoriaClinica_triggered(); break;
        case 9: on_actionPaciente_triggered(); break;
        case 10: on_actionAgenda_triggered(); break;
        case 11: on_actionPersonal_triggered(); break;
        case 12: on_actionCaja_triggered(); break;
        default: ;
        }
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
