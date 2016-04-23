/****************************************************************************
** Meta object code from reading C++ file 'light.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../traffic_light/light.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'light.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Light_t {
    QByteArrayData data[9];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Light_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Light_t qt_meta_stringdata_Light = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Light"
QT_MOC_LITERAL(1, 6, 9), // "set_color"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 5), // "Color"
QT_MOC_LITERAL(4, 23, 5), // "color"
QT_MOC_LITERAL(5, 29, 9), // "get_color"
QT_MOC_LITERAL(6, 39, 9), // "set_light"
QT_MOC_LITERAL(7, 49, 5), // "is_on"
QT_MOC_LITERAL(8, 55, 9) // "get_light"

    },
    "Light\0set_color\0\0Color\0color\0get_color\0"
    "set_light\0is_on\0get_light"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Light[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       5,    0,   37,    2, 0x0a /* Public */,
       6,    1,   38,    2, 0x0a /* Public */,
       8,    0,   41,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Bool,

       0        // eod
};

void Light::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Light *_t = static_cast<Light *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->set_color((*reinterpret_cast< Color(*)>(_a[1]))); break;
        case 1: { int _r = _t->get_color();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 2: _t->set_light((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: { bool _r = _t->get_light();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject Light::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Light.data,
      qt_meta_data_Light,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Light::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Light::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Light.stringdata0))
        return static_cast<void*>(const_cast< Light*>(this));
    return QObject::qt_metacast(_clname);
}

int Light::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
