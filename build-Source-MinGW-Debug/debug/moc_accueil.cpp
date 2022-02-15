/****************************************************************************
** Meta object code from reading C++ file 'accueil.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Source/accueil.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'accueil.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Accueil_t {
    const uint offsetsAndSize[40];
    char stringdata0[159];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Accueil_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Accueil_t qt_meta_stringdata_Accueil = {
    {
QT_MOC_LITERAL(0, 7), // "Accueil"
QT_MOC_LITERAL(8, 4), // "addi"
QT_MOC_LITERAL(13, 0), // ""
QT_MOC_LITERAL(14, 7), // "history"
QT_MOC_LITERAL(22, 5), // "editt"
QT_MOC_LITERAL(28, 6), // "retour"
QT_MOC_LITERAL(35, 5), // "homed"
QT_MOC_LITERAL(41, 7), // "logoute"
QT_MOC_LITERAL(49, 5), // "infod"
QT_MOC_LITERAL(55, 5), // "liste"
QT_MOC_LITERAL(61, 7), // "showCar"
QT_MOC_LITERAL(69, 7), // "compare"
QT_MOC_LITERAL(77, 6), // "verify"
QT_MOC_LITERAL(84, 7), // "chaine1"
QT_MOC_LITERAL(92, 7), // "chaine2"
QT_MOC_LITERAL(100, 8), // "location"
QT_MOC_LITERAL(109, 6), // "adding"
QT_MOC_LITERAL(116, 6), // "chaine"
QT_MOC_LITERAL(123, 17), // "on_panier_clicked"
QT_MOC_LITERAL(141, 17) // "on_logout_clicked"

    },
    "Accueil\0addi\0\0history\0editt\0retour\0"
    "homed\0logoute\0infod\0liste\0showCar\0"
    "compare\0verify\0chaine1\0chaine2\0location\0"
    "adding\0chaine\0on_panier_clicked\0"
    "on_logout_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Accueil[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   98,    2, 0x06,    1 /* Public */,
       3,    0,   99,    2, 0x06,    2 /* Public */,
       4,    0,  100,    2, 0x06,    3 /* Public */,
       5,    0,  101,    2, 0x06,    4 /* Public */,
       6,    0,  102,    2, 0x06,    5 /* Public */,
       7,    0,  103,    2, 0x06,    6 /* Public */,
       8,    1,  104,    2, 0x06,    7 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    0,  107,    2, 0x0a,    9 /* Public */,
      11,    0,  108,    2, 0x0a,   10 /* Public */,
      12,    2,  109,    2, 0x0a,   11 /* Public */,
      15,    0,  114,    2, 0x0a,   14 /* Public */,
      16,    1,  115,    2, 0x0a,   15 /* Public */,
      18,    0,  118,    2, 0x0a,   17 /* Public */,
      19,    0,  119,    2, 0x0a,   18 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,    9,

 // slots: parameters
    QMetaType::Void,
    QMetaType::QStringList,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,   13,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Accueil::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Accueil *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->addi(); break;
        case 1: _t->history(); break;
        case 2: _t->editt(); break;
        case 3: _t->retour(); break;
        case 4: _t->homed(); break;
        case 5: _t->logoute(); break;
        case 6: _t->infod((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 7: _t->showCar(); break;
        case 8: { QStringList _r = _t->compare();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 9: { bool _r = _t->verify((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->location(); break;
        case 11: _t->adding((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->on_panier_clicked(); break;
        case 13: _t->on_logout_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Accueil::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Accueil::addi)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Accueil::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Accueil::history)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Accueil::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Accueil::editt)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Accueil::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Accueil::retour)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Accueil::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Accueil::homed)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Accueil::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Accueil::logoute)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Accueil::*)(QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Accueil::infod)) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject Accueil::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Accueil.offsetsAndSize,
    qt_meta_data_Accueil,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Accueil_t
, QtPrivate::TypeAndForceComplete<Accueil, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QStringList, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QStringList, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Accueil::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Accueil::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Accueil.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Accueil::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void Accueil::addi()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Accueil::history()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Accueil::editt()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Accueil::retour()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Accueil::homed()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Accueil::logoute()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Accueil::infod(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
