/****************************************************************************
** Meta object code from reading C++ file 'locate.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Source/locate.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'locate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Form_t {
    const uint offsetsAndSize[28];
    char stringdata0[107];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Form_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Form_t qt_meta_stringdata_Form = {
    {
QT_MOC_LITERAL(0, 4), // "Form"
QT_MOC_LITERAL(5, 4), // "addi"
QT_MOC_LITERAL(10, 0), // ""
QT_MOC_LITERAL(11, 7), // "history"
QT_MOC_LITERAL(19, 5), // "editt"
QT_MOC_LITERAL(25, 6), // "retour"
QT_MOC_LITERAL(32, 5), // "homed"
QT_MOC_LITERAL(38, 7), // "logoute"
QT_MOC_LITERAL(46, 7), // "setPrix"
QT_MOC_LITERAL(54, 6), // "setQte"
QT_MOC_LITERAL(61, 10), // "calculPrix"
QT_MOC_LITERAL(72, 8), // "Location"
QT_MOC_LITERAL(81, 7), // "checked"
QT_MOC_LITERAL(89, 17) // "on_logout_clicked"

    },
    "Form\0addi\0\0history\0editt\0retour\0homed\0"
    "logoute\0setPrix\0setQte\0calculPrix\0"
    "Location\0checked\0on_logout_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Form[] = {

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
    QMetaType::Bool,
    QMetaType::Void,

       0        // eod
};

void Form::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Form *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->addi(); break;
        case 1: _t->history(); break;
        case 2: _t->editt(); break;
        case 3: _t->retour(); break;
        case 4: _t->homed(); break;
        case 5: _t->logoute(); break;
        case 6: _t->setPrix(); break;
        case 7: _t->setQte(); break;
        case 8: _t->calculPrix(); break;
        case 9: _t->Location(); break;
        case 10: { bool _r = _t->checked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->on_logout_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Form::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Form::addi)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Form::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Form::history)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Form::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Form::editt)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Form::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Form::retour)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Form::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Form::homed)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Form::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Form::logoute)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject Form::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Form.offsetsAndSize,
    qt_meta_data_Form,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Form_t
, QtPrivate::TypeAndForceComplete<Form, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Form::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Form::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Form.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Form::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Form::addi()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Form::history()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Form::editt()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Form::retour()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Form::homed()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Form::logoute()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
