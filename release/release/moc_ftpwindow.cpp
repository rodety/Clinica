/****************************************************************************
** Meta object code from reading C++ file 'ftpwindow.h'
**
** Created: Wed 27. May 12:31:07 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ftpwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ftpwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FtpWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x05,
      24,   10,   10,   10, 0x05,
      42,   10,   10,   10, 0x05,
      60,   10,   10,   10, 0x05,
      78,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      96,   10,   10,   10, 0x0a,
     118,   10,   10,   10, 0x0a,
     140,   10,   10,   10, 0x0a,
     153,   10,   10,   10, 0x0a,
     186,  170,   10,   10, 0x0a,
     223,  215,   10,   10, 0x0a,
     255,  243,   10,   10, 0x0a,
     289,   10,   10,   10, 0x0a,
     323,  302,   10,   10, 0x0a,
     365,   10,   10,   10, 0x0a,
     388,   10,   10,   10, 0x0a,
     410,   10,   10,   10, 0x0a,
     436,  429,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_FtpWindow[] = {
    "FtpWindow\0\0putCorrect()\0downloadCorrect()\0"
    "closeconecction()\0puterror(QString)\0"
    "openconnecction()\0connectOrDisconnect()\0"
    "downloadFile(QString)\0uploadFile()\0"
    "cancelDownload()\0commandId,error\0"
    "ftpCommandFinished(int,bool)\0urlInfo\0"
    "addToList(QUrlInfo)\0item,column\0"
    "processItem(QTreeWidgetItem*,int)\0"
    "cdToParent()\0readBytes,totalBytes\0"
    "updateDataTransferProgress(qint64,qint64)\0"
    "enableDownloadButton()\0enableConnectButton()\0"
    "connectToHost(int)\0estado\0stateChange(int)\0"
};

const QMetaObject FtpWindow::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_FtpWindow,
      qt_meta_data_FtpWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FtpWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FtpWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FtpWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FtpWindow))
        return static_cast<void*>(const_cast< FtpWindow*>(this));
    return QDialog::qt_metacast(_clname);
}

int FtpWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: putCorrect(); break;
        case 1: downloadCorrect(); break;
        case 2: closeconecction(); break;
        case 3: puterror((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: openconnecction(); break;
        case 5: connectOrDisconnect(); break;
        case 6: downloadFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: uploadFile(); break;
        case 8: cancelDownload(); break;
        case 9: ftpCommandFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 10: addToList((*reinterpret_cast< const QUrlInfo(*)>(_a[1]))); break;
        case 11: processItem((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: cdToParent(); break;
        case 13: updateDataTransferProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 14: enableDownloadButton(); break;
        case 15: enableConnectButton(); break;
        case 16: connectToHost((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: stateChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void FtpWindow::putCorrect()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void FtpWindow::downloadCorrect()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void FtpWindow::closeconecction()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void FtpWindow::puterror(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void FtpWindow::openconnecction()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}
QT_END_MOC_NAMESPACE
