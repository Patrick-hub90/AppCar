/****************************************************************************
** Meta object code from reading C++ file 'voiture.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Source/voiture.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'voiture.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_voiture_t {
    const uint offsetsAndSize[26];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_voiture_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_voiture_t qt_meta_stringdata_voiture = {
    {
QT_MOC_LITERAL(0, 7), // "voiture"
QT_MOC_LITERAL(8, 11), // "information"
QT_MOC_LITERAL(20, 0), // ""
QT_MOC_LITERAL(21, 5), // "added"
QT_MOC_LITERAL(27, 3), // "nam"
QT_MOC_LITERAL(31, 12), // "showFeatures"
QT_MOC_LITERAL(44, 16), // "showPageLocation"
QT_MOC_LITERAL(61, 8), // "location"
QT_MOC_LITERAL(70, 4), // "list"
QT_MOC_LITERAL(75, 3), // "add"
QT_MOC_LITERAL(79, 3), // "nom"
QT_MOC_LITERAL(83, 6), // "compte"
QT_MOC_LITERAL(90, 2) // "nb"

    },
    "voiture\0information\0\0added\0nam\0"
    "showFeatures\0showPageLocation\0location\0"
    "list\0add\0nom\0compte\0nb"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_voiture[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   56,    2, 0x06,    1 /* Public */,
       3,    1,   59,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   62,    2, 0x0a,    5 /* Public */,
       6,    0,   63,    2, 0x0a,    6 /* Public */,
       7,    1,   64,    2, 0x0a,    7 /* Public */,
       9,    1,   67,    2, 0x0a,    9 /* Public */,
      11,    1,   70,    2, 0x0a,   11 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList,    2,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::Int,   12,

       0        // eod
};

void voiture::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<voiture *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->information((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 1: _t->added((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->showFeatures(); break;
        case 3: _t->showPageLocation(); break;
        case 4: _t->location((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 5: _t->add((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->compte((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (voiture::*)(QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&voiture::information)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (voiture::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&voiture::added)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject voiture::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_voiture.offsetsAndSize,
    qt_meta_data_voiture,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_voiture_t
, QtPrivate::TypeAndForceComplete<voiture, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QStringList, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QStringList, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *voiture::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *voiture::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_voiture.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int voiture::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void voiture::information(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void voiture::added(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
