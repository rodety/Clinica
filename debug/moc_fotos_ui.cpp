/****************************************************************************
** Meta object code from reading C++ file 'fotos_ui.h'
**
** Created: Mon 18. Feb 22:33:27 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../fotos_ui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fotos_ui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_fotos_ui[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x08,
      41,   36,    9,    9, 0x08,
     105,    9,    9,    9, 0x08,
     143,    9,    9,    9, 0x08,
     180,    9,    9,    9, 0x08,
     218,    9,    9,    9, 0x08,
     258,    9,    9,    9, 0x08,
     273,    9,    9,    9, 0x08,
     293,    9,    9,    9, 0x08,
     311,    9,    9,    9, 0x08,
     329,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_fotos_ui[] = {
    "fotos_ui\0\0on_pushButton_5_clicked()\0"
    "item\0"
    "on_tableWidget_reporteOperatorio_itemClicked(QTableWidgetItem*)\0"
    "on_pushButton_uploadPicture_clicked()\0"
    "on_pushButton_showPictures_clicked()\0"
    "on_pushButton_goFilePicture_clicked()\0"
    "on_pushButton_downloadPicture_clicked()\0"
    "putCorrected()\0downloadCorrected()\0"
    "puterror(QString)\0closeconecction()\0"
    "openconeccion()\0"
};

const QMetaObject fotos_ui::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_fotos_ui,
      qt_meta_data_fotos_ui, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &fotos_ui::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *fotos_ui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *fotos_ui::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_fotos_ui))
        return static_cast<void*>(const_cast< fotos_ui*>(this));
    return QWidget::qt_metacast(_clname);
}

int fotos_ui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pushButton_5_clicked(); break;
        case 1: on_tableWidget_reporteOperatorio_itemClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 2: on_pushButton_uploadPicture_clicked(); break;
        case 3: on_pushButton_showPictures_clicked(); break;
        case 4: on_pushButton_goFilePicture_clicked(); break;
        case 5: on_pushButton_downloadPicture_clicked(); break;
        case 6: putCorrected(); break;
        case 7: downloadCorrected(); break;
        case 8: puterror((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: closeconecction(); break;
        case 10: openconeccion(); break;
        default: ;
        }
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
