/********************************************************************************
** Form generated from reading UI file 'work.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORK_H
#define UI_WORK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Work
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *back_button;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Work)
    {
        if (Work->objectName().isEmpty())
            Work->setObjectName(QString::fromUtf8("Work"));
        Work->resize(401, 594);
        centralwidget = new QWidget(Work);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        back_button = new QPushButton(centralwidget);
        back_button->setObjectName(QString::fromUtf8("back_button"));
        back_button->setMinimumSize(QSize(0, 100));
        back_button->setStyleSheet(QString::fromUtf8("QPushButton {background-color: #555555;\n"
"border-radius: 15%;\n"
"color: white;\n"
"border: 2px solid #444444;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
" background-color: #666666\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" background-color: #666666\n"
"}"));

        gridLayout->addWidget(back_button, 1, 0, 1, 1);

        Work->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Work);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 401, 20));
        Work->setMenuBar(menubar);
        statusbar = new QStatusBar(Work);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Work->setStatusBar(statusbar);

        retranslateUi(Work);

        QMetaObject::connectSlotsByName(Work);
    } // setupUi

    void retranslateUi(QMainWindow *Work)
    {
        Work->setWindowTitle(QCoreApplication::translate("Work", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("Work", "<html><head/><body><p align=\"center\"><span style=\" font-size:22pt;\">\320\227\320\264\320\265\321\201\321\214 \321\207\321\202\320\276-\321\202\320\276 \320\261\321\203\320\264\320\265\321\202</span></p><p align=\"center\"><span style=\" font-size:22pt;\">(working field)</span></p></body></html>", nullptr));
        back_button->setText(QCoreApplication::translate("Work", "\320\235\320\260\320\267\320\260\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Work: public Ui_Work {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORK_H
