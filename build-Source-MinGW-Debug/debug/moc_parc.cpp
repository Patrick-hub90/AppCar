/****************************************************************************
** Meta object code from reading C++ file 'parc.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Source/parc.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'parc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_parc_t {
    const uint offsetsAndSize[24];
    char stringdata0[72];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_parc_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_parc_t qt_meta_stringdata_parc = {
    {
QT_MOC_LITERAL(0, 4), // "parc"
QT_MOC_LITERAL(5, 5), // "Login"
QT_MOC_LITERAL(11, 0), // ""
QT_MOC_LITERAL(12, 4), // "sign"
QT_MOC_LITERAL(17, 7), // "affiche"
QT_MOC_LITERAL(25, 7), // "accueil"
QT_MOC_LITERAL(33, 6), // "adding"
QT_MOC_LITERAL(40, 4), // "info"
QT_MOC_LITERAL(45, 8), // "eddition"
QT_MOC_LITERAL(54, 6), // "locate"
QT_MOC_LITERAL(61, 6), // "listed"
QT_MOC_LITERAL(68, 3) // "etr"

    },
    "parc\0Login\0\0sign\0affiche\0accueil\0"
    "adding\0info\0eddition\0locate\0listed\0"
    "etr"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_parc[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x0a,    1 /* Public */,
       3,    0,   69,    2, 0x0a,    2 /* Public */,
       4,    0,   70,    2, 0x0a,    3 /* Public */,
       5,    0,   71,    2, 0x0a,    4 /* Public */,
       6,    0,   72,    2, 0x0a,    5 /* Public */,
       7,    0,   73,    2, 0x0a,    6 /* Public */,
       8,    0,   74,    2, 0x0a,    7 /* Public */,
       9,    1,   75,    2, 0x0a,    8 /* Public */,
      11,    0,   78,    2, 0x0a,   10 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,   10,
    QMetaType::Void,

       0        // eod
};

void parc::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<parc *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->Login(); break;
        case 1: _t->sign(); break;
        case 2: _t->affiche(); break;
        case 3: _t->accueil(); break;
        case 4: _t->adding(); break;
        case 5: _t->info(); break;
        case 6: _t->eddition(); break;
        case 7: _t->locate((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 8: _t->etr(); break;
        default: ;
        }
    }
}

const QMetaObject parc::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_parc.offsetsAndSize,
    qt_meta_data_parc,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_parc_t
, QtPrivate::TypeAndForceComplete<parc, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QStringList, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *parc::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *parc::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_parc.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int parc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
