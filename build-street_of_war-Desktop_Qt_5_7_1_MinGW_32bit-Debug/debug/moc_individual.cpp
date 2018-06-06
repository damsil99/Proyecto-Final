/****************************************************************************
** Meta object code from reading C++ file 'individual.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../street_of_war/individual.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'individual.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_individual_t {
    QByteArrayData data[11];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_individual_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_individual_t qt_meta_stringdata_individual = {
    {
QT_MOC_LITERAL(0, 0, 10), // "individual"
QT_MOC_LITERAL(1, 11, 6), // "inicio"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 4), // "anim"
QT_MOC_LITERAL(4, 24, 3), // "mov"
QT_MOC_LITERAL(5, 28, 6), // "opcion"
QT_MOC_LITERAL(6, 35, 7), // "opcion2"
QT_MOC_LITERAL(7, 43, 7), // "opcion3"
QT_MOC_LITERAL(8, 51, 27), // "on_progressBar_valueChanged"
QT_MOC_LITERAL(9, 79, 5), // "value"
QT_MOC_LITERAL(10, 85, 29) // "on_progressBar_2_valueChanged"

    },
    "individual\0inicio\0\0anim\0mov\0opcion\0"
    "opcion2\0opcion3\0on_progressBar_valueChanged\0"
    "value\0on_progressBar_2_valueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_individual[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a /* Public */,
       3,    0,   55,    2, 0x0a /* Public */,
       4,    0,   56,    2, 0x0a /* Public */,
       5,    0,   57,    2, 0x0a /* Public */,
       6,    0,   58,    2, 0x0a /* Public */,
       7,    0,   59,    2, 0x0a /* Public */,
       8,    1,   60,    2, 0x08 /* Private */,
      10,    1,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,

       0        // eod
};

void individual::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        individual *_t = static_cast<individual *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->inicio(); break;
        case 1: _t->anim(); break;
        case 2: _t->mov(); break;
        case 3: _t->opcion(); break;
        case 4: _t->opcion2(); break;
        case 5: _t->opcion3(); break;
        case 6: _t->on_progressBar_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_progressBar_2_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject individual::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_individual.data,
      qt_meta_data_individual,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *individual::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *individual::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_individual.stringdata0))
        return static_cast<void*>(const_cast< individual*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int individual::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
