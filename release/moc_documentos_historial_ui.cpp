/****************************************************************************
** Meta object code from reading C++ file 'documentos_historial_ui.h'
**
** Created: Sat 11. Jun 15:33:32 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../documentos_historial_ui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'documentos_historial_ui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_documentos_historial_ui[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x08,
      73,   67,   24,   24, 0x08,
     129,   24,   24,   24, 0x08,
     174,  169,   24,   24, 0x08,
     220,   24,   24,   24, 0x08,
     267,   24,   24,   24, 0x08,
     310,   24,   24,   24, 0x08,
     357,   24,   24,   24, 0x08,
     403,   24,   24,   24, 0x08,
     436,   24,   24,   24, 0x08,
     470,   24,   24,   24, 0x08,
     494,   24,   24,   24, 0x08,
     533,   24,   24,   24, 0x08,
     571,   24,   24,   24, 0x08,
     606,   24,   24,   24, 0x08,
     650,   24,   24,   24, 0x08,
     698,   24,   24,   24, 0x08,
     739,  734,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_documentos_historial_ui[] = {
    "documentos_historial_ui\0\0"
    "on_pushButton_AceptAntecedentes_clicked()\0"
    "index\0on_comboBox_DoctorAntecedentes_currentIndexChanged(int)\0"
    "on_pushButton_consultarMedico_clicked()\0"
    "arg1\0on_lineEdit_medicoGlobal_textChanged(QString)\0"
    "on_pushButton_AceptReporteOperatorio_clicked()\0"
    "on_pushButton_AceptExamenClinico_clicked()\0"
    "on_pushButton_AceptTerapeuticaMedica_clicked()\0"
    "on_pushButton_SaveTerapeuticaMedica_clicked()\0"
    "on_pushButton_SaveRQCV_clicked()\0"
    "on_pushButton_AceptRQCV_clicked()\0"
    "on_pushButton_clicked()\0"
    "on_pushButton_AceptEpicrisis_clicked()\0"
    "on_pushButton_SaveEpicrisis_clicked()\0"
    "on_pushButton_CancelRQCV_clicked()\0"
    "on_pushButton_addItem_terapeutica_clicked()\0"
    "on_lineEdit_dni_medico_consulta_returnPressed()\0"
    "on_pushButton_quitar_Item_clicked()\0"
    "item\0on_tableWidget_Terapeutica_itemClicked(QTableWidgetItem*)\0"
};

void documentos_historial_ui::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        documentos_historial_ui *_t = static_cast<documentos_historial_ui *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_AceptAntecedentes_clicked(); break;
        case 1: _t->on_comboBox_DoctorAntecedentes_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_pushButton_consultarMedico_clicked(); break;
        case 3: _t->on_lineEdit_medicoGlobal_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_pushButton_AceptReporteOperatorio_clicked(); break;
        case 5: _t->on_pushButton_AceptExamenClinico_clicked(); break;
        case 6: _t->on_pushButton_AceptTerapeuticaMedica_clicked(); break;
        case 7: _t->on_pushButton_SaveTerapeuticaMedica_clicked(); break;
        case 8: _t->on_pushButton_SaveRQCV_clicked(); break;
        case 9: _t->on_pushButton_AceptRQCV_clicked(); break;
        case 10: _t->on_pushButton_clicked(); break;
        case 11: _t->on_pushButton_AceptEpicrisis_clicked(); break;
        case 12: _t->on_pushButton_SaveEpicrisis_clicked(); break;
        case 13: _t->on_pushButton_CancelRQCV_clicked(); break;
        case 14: _t->on_pushButton_addItem_terapeutica_clicked(); break;
        case 15: _t->on_lineEdit_dni_medico_consulta_returnPressed(); break;
        case 16: _t->on_pushButton_quitar_Item_clicked(); break;
        case 17: _t->on_tableWidget_Terapeutica_itemClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData documentos_historial_ui::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject documentos_historial_ui::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_documentos_historial_ui,
      qt_meta_data_documentos_historial_ui, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &documentos_historial_ui::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *documentos_historial_ui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *documentos_historial_ui::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_documentos_historial_ui))
        return static_cast<void*>(const_cast< documentos_historial_ui*>(this));
    return QWidget::qt_metacast(_clname);
}

int documentos_historial_ui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
