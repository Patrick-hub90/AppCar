/****************************************************************************
** Meta object code from reading C++ file 'historique.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Source/historique.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'historique.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_remove_t {
    const uint offsetsAndSize[20];
    char stringdata0[84];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_remove_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_remove_t qt_meta_stringdata_remove = {
    {
QT_MOC_LITERAL(0, 6), // "remove"
QT_MOC_LITERAL(7, 4), // "addi"
QT_MOC_LITERAL(12, 0), // ""
QT_MOC_LITERAL(13, 7), // "history"
QT_MOC_LITERAL(21, 5), // "editt"
QT_MOC_LITERAL(27, 6), // "retour"
QT_MOC_LITERAL(34, 5), // "homed"
QT_MOC_LITERAL(40, 7), // "logoute"
QT_MOC_LITERAL(48, 17), // "checking_registry"
QT_MOC_LITERAL(66, 17) // "on_logout_clicked"

    },
    "remove\0addi\0\0history\0editt\0retour\0"
    "homed\0logoute\0checking_registry\0"
    "on_logout_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_remove[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    1 /* Public */,
       3,    0,   63,    2, 0x06,    2 /* Public */,
       4,    0,   64,    2, 0x06,    3 /* Public */,
       5,    0,   65,    2, 0x06,    4 /* Public */,
       6,    0,   66,    2, 0x06,    5 /* Public */,
       7,    0,   67,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    0,   68,    2, 0x0a,    7 /* Public */,
       9,    0,   69,    2, 0x0a,    8 /* Public */,

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

       0        // eod
};

void remove::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<remove *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->addi(); break;
        case 1: _t->history(); break;
        case 2: _t->editt(); break;
        case 3: _t->retour(); break;
        case 4: _t->homed(); break;
        case 5: _t->logoute(); break;
        case 6: _t->checking_registry(); break;
        case 7: _t->on_logout_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (remove::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&remove::addi)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (remove::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&remove::history)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (remove::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&remove::editt)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (remove::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&remove::retour)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (remove::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&remove::homed)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (remove::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&remove::logoute)) {
                *result = 5;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject remove::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_remove.offsetsAndSize,
    qt_meta_data_remove,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_remove_t
, QtPrivate::TypeAndForceComplete<remove, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *remove::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *remove::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_remove.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int remove::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void remove::addi()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void remove::history()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void remove::editt()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void remove::retour()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void remove::homed()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void remove::logoute()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
