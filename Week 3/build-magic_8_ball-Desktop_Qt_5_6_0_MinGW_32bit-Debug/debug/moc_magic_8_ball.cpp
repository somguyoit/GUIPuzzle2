/****************************************************************************
** Meta object code from reading C++ file 'magic_8_ball.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/magic_8_ball.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'magic_8_ball.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_magic_8_ball_t {
    QByteArrayData data[12];
    char stringdata0[126];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_magic_8_ball_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_magic_8_ball_t qt_meta_stringdata_magic_8_ball = {
    {
QT_MOC_LITERAL(0, 0, 12), // "magic_8_ball"
QT_MOC_LITERAL(1, 13, 12), // "set_question"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 8), // "question"
QT_MOC_LITERAL(4, 36, 12), // "get_question"
QT_MOC_LITERAL(5, 49, 5), // "index"
QT_MOC_LITERAL(6, 55, 10), // "get_saying"
QT_MOC_LITERAL(7, 66, 16), // "get_is_draggable"
QT_MOC_LITERAL(8, 83, 13), // "set_draggable"
QT_MOC_LITERAL(9, 97, 12), // "is_draggable"
QT_MOC_LITERAL(10, 110, 9), // "get_state"
QT_MOC_LITERAL(11, 120, 5) // "State"

    },
    "magic_8_ball\0set_question\0\0question\0"
    "get_question\0index\0get_saying\0"
    "get_is_draggable\0set_draggable\0"
    "is_draggable\0get_state\0State"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_magic_8_ball[] = {

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
       1,    1,   49,    2, 0x0a /* Public */,
       4,    0,   52,    2, 0x0a /* Public */,
       4,    1,   53,    2, 0x0a /* Public */,
       6,    1,   56,    2, 0x0a /* Public */,
       7,    0,   59,    2, 0x0a /* Public */,
       8,    1,   60,    2, 0x0a /* Public */,
      10,    0,   63,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::QString,
    QMetaType::QString, QMetaType::Int,    5,
    QMetaType::QString, QMetaType::Int,    5,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,    9,
    0x80000000 | 11,

       0        // eod
};

void magic_8_ball::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        magic_8_ball *_t = static_cast<magic_8_ball *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->set_question((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: { QString _r = _t->get_question();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 2: { QString _r = _t->get_question((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 3: { QString _r = _t->get_saying((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->get_is_draggable();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: _t->set_draggable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: { State _r = _t->get_state();
            if (_a[0]) *reinterpret_cast< State*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject magic_8_ball::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_magic_8_ball.data,
      qt_meta_data_magic_8_ball,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *magic_8_ball::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *magic_8_ball::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_magic_8_ball.stringdata0))
        return static_cast<void*>(const_cast< magic_8_ball*>(this));
    return QObject::qt_metacast(_clname);
}

int magic_8_ball::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
