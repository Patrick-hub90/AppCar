/****************************************************************************
** Meta object code from reading C++ file 'info.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Source/info.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'info.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_info_t {
    const uint offsetsAndSize[14];
    char stringdata0[34];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_info_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_info_t qt_meta_stringdata_info = {
    {
QT_MOC_LITERAL(0, 4), // "info"
QT_MOC_LITERAL(5, 3), // "car"
QT_MOC_LITERAL(9, 0), // ""
QT_MOC_LITERAL(10, 8), // "location"
QT_MOC_LITERAL(19, 3), // "inf"
QT_MOC_LITERAL(23, 3), // "add"
QT_MOC_LITERAL(27, 6) // "locate"

    },
    "info\0car\0\0location\0inf\0add\0locate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_info[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,    1 /* Public */,
       3,    1,   47,    2, 0x06,    3 /* Public */,
       4,    1,   50,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   53,    2, 0x0a,    7 /* Public */,
       6,    0,   54,    2, 0x0a,    8 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QStringList,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void info::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<info *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->car((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->location((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 2: _t->inf((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->add(); break;
        case 4: _t->locate(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (info::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&info::car)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (info::*)(QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&info::location)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (info::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&info::inf)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject info::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_info.offsetsAndSize,
    qt_meta_data_info,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_info_t
, QtPrivate::TypeAndForceComplete<info, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QStringList, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *info::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *info::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_info.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int info::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void info::car(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void info::location(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void info::inf(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
