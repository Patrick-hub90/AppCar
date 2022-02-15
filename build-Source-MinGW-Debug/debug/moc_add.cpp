/****************************************************************************
** Meta object code from reading C++ file 'add.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Source/add.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'add.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_add_t {
    const uint offsetsAndSize[28];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_add_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_add_t qt_meta_stringdata_add = {
    {
QT_MOC_LITERAL(0, 3), // "add"
QT_MOC_LITERAL(4, 4), // "addi"
QT_MOC_LITERAL(9, 0), // ""
QT_MOC_LITERAL(10, 7), // "history"
QT_MOC_LITERAL(18, 5), // "editt"
QT_MOC_LITERAL(24, 6), // "retour"
QT_MOC_LITERAL(31, 5), // "homed"
QT_MOC_LITERAL(37, 7), // "logoute"
QT_MOC_LITERAL(45, 6), // "addCar"
QT_MOC_LITERAL(52, 11), // "select_file"
QT_MOC_LITERAL(64, 8), // "checking"
QT_MOC_LITERAL(73, 9), // "loadImage"
QT_MOC_LITERAL(83, 13), // "renitialising"
QT_MOC_LITERAL(97, 17) // "on_logout_clicked"

    },
    "add\0addi\0\0history\0editt\0retour\0homed\0"
    "logoute\0addCar\0select_file\0checking\0"
    "loadImage\0renitialising\0on_logout_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_add[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x06,    1 /* Public */,
       3,    0,   87,    2, 0x06,    2 /* Public */,
       4,    0,   88,    2, 0x06,    3 /* Public */,
       5,    0,   89,    2, 0x06,    4 /* Public */,
       6,    0,   90,    2, 0x06,    5 /* Public */,
       7,    0,   91,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    0,   92,    2, 0x0a,    7 /* Public */,
       9,    0,   93,    2, 0x0a,    8 /* Public */,
      10,    0,   94,    2, 0x0a,    9 /* Public */,
      11,    0,   95,    2, 0x0a,   10 /* Public */,
      12,    0,   96,    2, 0x0a,   11 /* Public */,
      13,    0,   97,    2, 0x0a,   12 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void add::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<add *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->addi(); break;
        case 1: _t->history(); break;
        case 2: _t->editt(); break;
        case 3: _t->retour(); break;
        case 4: _t->homed(); break;
        case 5: _t->logoute(); break;
        case 6: _t->addCar(); break;
        case 7: _t->select_file(); break;
        case 8: _t->checking(); break;
        case 9: _t->loadImage(); break;
        case 10: _t->renitialising(); break;
        case 11: _t->on_logout_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (add::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&add::addi)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (add::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&add::history)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (add::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&add::editt)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (add::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&add::retour)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (add::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&add::homed)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (add::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&add::logoute)) {
                *result = 5;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject add::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_add.offsetsAndSize,
    qt_meta_data_add,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_add_t
, QtPrivate::TypeAndForceComplete<add, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *add::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *add::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_add.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int add::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void add::addi()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void add::history()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void add::editt()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void add::retour()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void add::homed()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void add::logoute()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
