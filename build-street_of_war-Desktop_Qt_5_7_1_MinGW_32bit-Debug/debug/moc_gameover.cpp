/****************************************************************************
** Meta object code from reading C++ file 'gameover.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../street_of_war/gameover.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gameover.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GameOver_t {
    QByteArrayData data[10];
    char stringdata0[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GameOver_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GameOver_t qt_meta_stringdata_GameOver = {
    {
QT_MOC_LITERAL(0, 0, 8), // "GameOver"
QT_MOC_LITERAL(1, 9, 6), // "inicio"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 4), // "anim"
QT_MOC_LITERAL(4, 22, 3), // "mov"
QT_MOC_LITERAL(5, 26, 6), // "opcion"
QT_MOC_LITERAL(6, 33, 7), // "opcion2"
QT_MOC_LITERAL(7, 41, 29), // "on_progressBar_2_valueChanged"
QT_MOC_LITERAL(8, 71, 5), // "value"
QT_MOC_LITERAL(9, 77, 27) // "on_progressBar_valueChanged"

    },
    "GameOver\0inicio\0\0anim\0mov\0opcion\0"
    "opcion2\0on_progressBar_2_valueChanged\0"
    "value\0on_progressBar_valueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GameOver[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,
       3,    0,   50,    2, 0x0a /* Public */,
       4,    0,   51,    2, 0x0a /* Public */,
       5,    0,   52,    2, 0x0a /* Public */,
       6,    0,   53,    2, 0x0a /* Public */,
       7,    1,   54,    2, 0x08 /* Private */,
       9,    1,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,

       0        // eod
};

void GameOver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GameOver *_t = static_cast<GameOver *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->inicio(); break;
        case 1: _t->anim(); break;
        case 2: _t->mov(); break;
        case 3: _t->opcion(); break;
        case 4: _t->opcion2(); break;
        case 5: _t->on_progressBar_2_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_progressBar_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject GameOver::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_GameOver.data,
      qt_meta_data_GameOver,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GameOver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GameOver::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GameOver.stringdata0))
        return static_cast<void*>(const_cast< GameOver*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int GameOver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
