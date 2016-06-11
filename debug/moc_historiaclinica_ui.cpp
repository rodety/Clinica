/****************************************************************************
** Meta object code from reading C++ file 'historiaclinica_ui.h'
**
** Created: Fri 10. Jun 20:11:16 2016
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../historiaclinica_ui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'historiaclinica_ui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_historiaClinica_ui[] = {

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
      20,   19,   19,   19, 0x08,
      58,   19,   19,   19, 0x08,
      99,   19,   19,   19, 0x08,
     135,   19,   19,   19, 0x08,
     166,   19,   19,   19, 0x08,
     202,   19,   19,   19, 0x08,
     241,   19,   19,   19, 0x08,
     271,   19,   19,   19, 0x08,
     286,   19,   19,   19, 0x08,
     301,   19,   19,   19, 0x08,
     350,  345,   19,   19, 0x08,
     405,  399,   19,   19, 0x08,
     455,  399,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_historiaClinica_ui[] = {
    "historiaClinica_ui\0\0"
    "on_nuevoDocumento_historial_clicked()\0"
    "on_eliminarDocumento_historial_clicked()\0"
    "on_verDocumento_historial_clicked()\0"
    "on_verDatos_paciente_clicked()\0"
    "on_pushButton_generatePDF_clicked()\0"
    "on_pushButton_editarDocuento_clicked()\0"
    "on_pushButton_Fotos_clicked()\0"
    "putCorrected()\0getCorrected()\0"
    "on_lineEdit_historialSearch_returnPressed()\0"
    "arg1\0on_lineEdit_historialSearch_textChanged(QString)\0"
    "index\0on_tableView_ListaPacientes1_clicked(QModelIndex)\0"
    "on_tableView_DocumentList_clicked(QModelIndex)\0"
};

const QMetaObject historiaClinica_ui::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_historiaClinica_ui,
      qt_meta_data_historiaClinica_ui, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &historiaClinica_ui::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *historiaClinica_ui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *historiaClinica_ui::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_historiaClinica_ui))
        return static_cast<void*>(const_cast< historiaClinica_ui*>(this));
    return QWidget::qt_metacast(_clname);
}

int historiaClinica_ui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_nuevoDocumento_historial_clicked(); break;
        case 1: on_eliminarDocumento_historial_clicked(); break;
        case 2: on_verDocumento_historial_clicked(); break;
        case 3: on_verDatos_paciente_clicked(); break;
        case 4: on_pushButton_generatePDF_clicked(); break;
        case 5: on_pushButton_editarDocuento_clicked(); break;
        case 6: on_pushButton_Fotos_clicked(); break;
        case 7: putCorrected(); break;
        case 8: getCorrected(); break;
        case 9: on_lineEdit_historialSearch_returnPressed(); break;
        case 10: on_lineEdit_historialSearch_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: on_tableView_ListaPacientes1_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 12: on_tableView_DocumentList_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
