/****************************************************************************
** Meta object code from reading C++ file 'vbuscar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../textpredictor/vbuscar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vbuscar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_vbuscar_t {
    QByteArrayData data[8];
    char stringdata0[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_vbuscar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_vbuscar_t qt_meta_stringdata_vbuscar = {
    {
QT_MOC_LITERAL(0, 0, 7), // "vbuscar"
QT_MOC_LITERAL(1, 8, 7), // "FSignal"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 4), // "text"
QT_MOC_LITERAL(4, 22, 8), // "FSignalA"
QT_MOC_LITERAL(5, 31, 5), // "textA"
QT_MOC_LITERAL(6, 37, 16), // "on_Atras_clicked"
QT_MOC_LITERAL(7, 54, 19) // "on_Adelante_clicked"

    },
    "vbuscar\0FSignal\0\0text\0FSignalA\0textA\0"
    "on_Atras_clicked\0on_Adelante_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_vbuscar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   40,    2, 0x08 /* Private */,
       7,    0,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void vbuscar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        vbuscar *_t = static_cast<vbuscar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->FSignal((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->FSignalA((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_Atras_clicked(); break;
        case 3: _t->on_Adelante_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (vbuscar::*_t)(const QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&vbuscar::FSignal)) {
                *result = 0;
            }
        }
        {
            typedef void (vbuscar::*_t)(const QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&vbuscar::FSignalA)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject vbuscar::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_vbuscar.data,
      qt_meta_data_vbuscar,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *vbuscar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *vbuscar::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_vbuscar.stringdata0))
        return static_cast<void*>(const_cast< vbuscar*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int vbuscar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void vbuscar::FSignal(const QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void vbuscar::FSignalA(const QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
