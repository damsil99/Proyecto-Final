/****************************************************************************
** Meta object code from reading C++ file 'maquina.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../street_of_war/maquina.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'maquina.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_maquina_t {
    QByteArrayData data[14];
    char stringdata0[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_maquina_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_maquina_t qt_meta_stringdata_maquina = {
    {
QT_MOC_LITERAL(0, 0, 7), // "maquina"
QT_MOC_LITERAL(1, 8, 7), // "opcion4"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 6), // "inicio"
QT_MOC_LITERAL(4, 24, 4), // "anim"
QT_MOC_LITERAL(5, 29, 3), // "mov"
QT_MOC_LITERAL(6, 33, 6), // "opcion"
QT_MOC_LITERAL(7, 40, 7), // "opcion2"
QT_MOC_LITERAL(8, 48, 7), // "opcion3"
QT_MOC_LITERAL(9, 56, 27), // "on_progressBar_valueChanged"
QT_MOC_LITERAL(10, 84, 5), // "value"
QT_MOC_LITERAL(11, 90, 29), // "on_progressBar_2_valueChanged"
QT_MOC_LITERAL(12, 120, 26), // "on_actionGuardar_triggered"
QT_MOC_LITERAL(13, 147, 25) // "on_actionPausar_triggered"

    },
    "maquina\0opcion4\0\0inicio\0anim\0mov\0"
    "opcion\0opcion2\0opcion3\0"
    "on_progressBar_valueChanged\0value\0"
    "on_progressBar_2_valueChanged\0"
    "on_actionGuardar_triggered\0"
    "on_actionPausar_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_maquina[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x0a /* Public */,
       3,    0,   70,    2, 0x0a /* Public */,
       4,    0,   71,    2, 0x0a /* Public */,
       5,    0,   72,    2, 0x0a /* Public */,
       6,    0,   73,    2, 0x0a /* Public */,
       7,    0,   74,    2, 0x0a /* Public */,
       8,    0,   75,    2, 0x0a /* Public */,
       9,    1,   76,    2, 0x08 /* Private */,
      11,    1,   79,    2, 0x08 /* Private */,
      12,    0,   82,    2, 0x08 /* Private */,
      13,    0,   83,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void maquina::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        maquina *_t = static_cast<maquina *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->opcion4(); break;
        case 1: _t->inicio(); break;
        case 2: _t->anim(); break;
        case 3: _t->mov(); break;
        case 4: _t->opcion(); break;
        case 5: _t->opcion2(); break;
        case 6: _t->opcion3(); break;
        case 7: _t->on_progressBar_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_progressBar_2_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_actionGuardar_triggered(); break;
        case 10: _t->on_actionPausar_triggered(); break;
        default: ;
        }
    }
}

const QMetaObject maquina::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_maquina.data,
      qt_meta_data_maquina,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *maquina::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *maquina::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_maquina.stringdata0))
        return static_cast<void*>(const_cast< maquina*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int maquina::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
