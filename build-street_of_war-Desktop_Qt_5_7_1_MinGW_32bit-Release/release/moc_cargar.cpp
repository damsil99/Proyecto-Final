/****************************************************************************
** Meta object code from reading C++ file 'cargar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../street_of_war/cargar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cargar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Cargar_t {
    QByteArrayData data[7];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cargar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cargar_t qt_meta_stringdata_Cargar = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Cargar"
QT_MOC_LITERAL(1, 7, 5), // "pers1"
QT_MOC_LITERAL(2, 13, 0), // ""
QT_MOC_LITERAL(3, 14, 5), // "pers2"
QT_MOC_LITERAL(4, 20, 5), // "pers3"
QT_MOC_LITERAL(5, 26, 5), // "pers4"
QT_MOC_LITERAL(6, 32, 16) // "on_nuevo_clicked"

    },
    "Cargar\0pers1\0\0pers2\0pers3\0pers4\0"
    "on_nuevo_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cargar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Cargar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Cargar *_t = static_cast<Cargar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pers1(); break;
        case 1: _t->pers2(); break;
        case 2: _t->pers3(); break;
        case 3: _t->pers4(); break;
        case 4: _t->on_nuevo_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Cargar::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Cargar.data,
      qt_meta_data_Cargar,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Cargar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cargar::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Cargar.stringdata0))
        return static_cast<void*>(const_cast< Cargar*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Cargar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
