/****************************************************************************
** Meta object code from reading C++ file 'work.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../CCPS/work.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'work.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Work_t {
    QByteArrayData data[15];
    char stringdata0[222];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Work_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Work_t qt_meta_stringdata_Work = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Work"
QT_MOC_LITERAL(1, 5, 6), // "signMy"
QT_MOC_LITERAL(2, 12, 0), // ""
QT_MOC_LITERAL(3, 13, 12), // "setPalmalive"
QT_MOC_LITERAL(4, 26, 5), // "login"
QT_MOC_LITERAL(5, 32, 10), // "Functions*"
QT_MOC_LITERAL(6, 43, 4), // "user"
QT_MOC_LITERAL(7, 48, 22), // "on_back_button_clicked"
QT_MOC_LITERAL(8, 71, 22), // "on_chat_button_clicked"
QT_MOC_LITERAL(9, 94, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(10, 116, 29), // "on_depart_chat_button_clicked"
QT_MOC_LITERAL(11, 146, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(12, 170, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(13, 194, 19), // "writeToQTextBrowser"
QT_MOC_LITERAL(14, 214, 7) // "history"

    },
    "Work\0signMy\0\0setPalmalive\0login\0"
    "Functions*\0user\0on_back_button_clicked\0"
    "on_chat_button_clicked\0on_pushButton_clicked\0"
    "on_depart_chat_button_clicked\0"
    "on_pushButton_2_clicked\0on_pushButton_3_clicked\0"
    "writeToQTextBrowser\0history"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Work[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    2,   60,    2, 0x0a /* Public */,
       7,    0,   65,    2, 0x08 /* Private */,
       8,    0,   66,    2, 0x08 /* Private */,
       9,    0,   67,    2, 0x08 /* Private */,
      10,    0,   68,    2, 0x08 /* Private */,
      11,    0,   69,    2, 0x08 /* Private */,
      12,    0,   70,    2, 0x08 /* Private */,
      13,    1,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 5,    4,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,

       0        // eod
};

void Work::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Work *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signMy(); break;
        case 1: _t->setPalmalive((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< Functions*(*)>(_a[2]))); break;
        case 2: _t->on_back_button_clicked(); break;
        case 3: _t->on_chat_button_clicked(); break;
        case 4: _t->on_pushButton_clicked(); break;
        case 5: _t->on_depart_chat_button_clicked(); break;
        case 6: _t->on_pushButton_2_clicked(); break;
        case 7: _t->on_pushButton_3_clicked(); break;
        case 8: _t->writeToQTextBrowser((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Work::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Work::signMy)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Work::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_Work.data,
    qt_meta_data_Work,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Work::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Work::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Work.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Work::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void Work::signMy()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE