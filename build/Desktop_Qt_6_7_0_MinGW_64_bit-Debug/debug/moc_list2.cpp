/****************************************************************************
** Meta object code from reading C++ file 'list2.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../list2.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'list2.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSLIST2ENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSLIST2ENDCLASS = QtMocHelpers::stringData(
    "LIST2",
    "on_MINE_clicked",
    "",
    "on_QUIZ_clicked",
    "on_TIC_clicked",
    "on_ROCK_clicked",
    "on_HAN_clicked",
    "on_ROW_clicked",
    "on_SEA_clicked",
    "on_EXIT_clicked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSLIST2ENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x08,    1 /* Private */,
       3,    0,   63,    2, 0x08,    2 /* Private */,
       4,    0,   64,    2, 0x08,    3 /* Private */,
       5,    0,   65,    2, 0x08,    4 /* Private */,
       6,    0,   66,    2, 0x08,    5 /* Private */,
       7,    0,   67,    2, 0x08,    6 /* Private */,
       8,    0,   68,    2, 0x08,    7 /* Private */,
       9,    0,   69,    2, 0x08,    8 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject LIST2::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSLIST2ENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSLIST2ENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSLIST2ENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<LIST2, std::true_type>,
        // method 'on_MINE_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_QUIZ_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_TIC_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_ROCK_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_HAN_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_ROW_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_SEA_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_EXIT_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void LIST2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LIST2 *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_MINE_clicked(); break;
        case 1: _t->on_QUIZ_clicked(); break;
        case 2: _t->on_TIC_clicked(); break;
        case 3: _t->on_ROCK_clicked(); break;
        case 4: _t->on_HAN_clicked(); break;
        case 5: _t->on_ROW_clicked(); break;

        case 7: _t->on_EXIT_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *LIST2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LIST2::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSLIST2ENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int LIST2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP