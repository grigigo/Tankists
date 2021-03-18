/********************************************************************************
** Form generated from reading UI file 'registrwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRWINDOW_H
#define UI_REGISTRWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegistrWindow
{
public:
    QWidget *centralwidget;
    QPushButton *sign_up_button;
    QLineEdit *login_edit;
    QLineEdit *password_edit;
    QComboBox *comboBox;
    QLabel *password_1;
    QPushButton *back_button;
    QLabel *login_1;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *RegistrWindow)
    {
        if (RegistrWindow->objectName().isEmpty())
            RegistrWindow->setObjectName(QString::fromUtf8("RegistrWindow"));
        RegistrWindow->resize(629, 795);
        RegistrWindow->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #333333;\n"
"border-radius: 15%;\n"
"color: white;\n"
"border: 2px solid #303030;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
" background-color: #505050;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" background-color: #505050;\n"
"}\n"
"\n"
"QMainWindow {\n"
"background-color: #191919;\n"
"}\n"
"\n"
"QLineEdit {\n"
"background-color: #282828;\n"
"color: white;\n"
"border: 0px;\n"
"}\n"
"\n"
"QLabel {\n"
"color: white;\n"
"}\n"
"\n"
"QComboBox {\n"
"background-color: #333333;\n"
"border-radius: 15%;\n"
"color: white;\n"
"border: 2px solid #303030;\n"
"}\n"
"\n"
"QComboBox:hover {\n"
" background-color: #505050;\n"
"}\n"
"\n"
"QComboBox:pressed {\n"
" background-color: #505050;\n"
"}\n"
"\n"
"QComboBox:drop-down {\n"
"border: 1px solid #303030;\n"
"border-radius: 15%;\n"
" }"));
        centralwidget = new QWidget(RegistrWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        sign_up_button = new QPushButton(centralwidget);
        sign_up_button->setObjectName(QString::fromUtf8("sign_up_button"));
        sign_up_button->setGeometry(QRect(10, 534, 302, 100));
        sign_up_button->setMinimumSize(QSize(0, 100));
        QFont font;
        font.setPointSize(24);
        sign_up_button->setFont(font);
        sign_up_button->setStyleSheet(QString::fromUtf8(""));
        login_edit = new QLineEdit(centralwidget);
        login_edit->setObjectName(QString::fromUtf8("login_edit"));
        login_edit->setGeometry(QRect(10, 127, 106, 75));
        login_edit->setMinimumSize(QSize(0, 75));
        login_edit->setStyleSheet(QString::fromUtf8(""));
        password_edit = new QLineEdit(centralwidget);
        password_edit->setObjectName(QString::fromUtf8("password_edit"));
        password_edit->setGeometry(QRect(10, 331, 106, 75));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(password_edit->sizePolicy().hasHeightForWidth());
        password_edit->setSizePolicy(sizePolicy);
        password_edit->setMinimumSize(QSize(0, 75));
        password_edit->setStyleSheet(QString::fromUtf8(""));
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(10, 453, 264, 75));
        comboBox->setMinimumSize(QSize(0, 75));
        comboBox->setFont(font);
        comboBox->setStyleSheet(QString::fromUtf8(""));
        password_1 = new QLabel(centralwidget);
        password_1->setObjectName(QString::fromUtf8("password_1"));
        password_1->setGeometry(QRect(10, 208, 124, 45));
        QFont font1;
        font1.setPointSize(32);
        password_1->setFont(font1);
        password_1->setStyleSheet(QString::fromUtf8(""));
        password_1->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        back_button = new QPushButton(centralwidget);
        back_button->setObjectName(QString::fromUtf8("back_button"));
        back_button->setGeometry(QRect(10, 640, 93, 100));
        back_button->setMinimumSize(QSize(0, 100));
        back_button->setFont(font);
        back_button->setStyleSheet(QString::fromUtf8(""));
        login_1 = new QLabel(centralwidget);
        login_1->setObjectName(QString::fromUtf8("login_1"));
        login_1->setGeometry(QRect(10, 5, 102, 45));
        login_1->setFont(font1);
        login_1->setStyleSheet(QString::fromUtf8(""));
        login_1->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        RegistrWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(RegistrWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 629, 20));
        RegistrWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(RegistrWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        RegistrWindow->setStatusBar(statusbar);

        retranslateUi(RegistrWindow);

        QMetaObject::connectSlotsByName(RegistrWindow);
    } // setupUi

    void retranslateUi(QMainWindow *RegistrWindow)
    {
        RegistrWindow->setWindowTitle(QCoreApplication::translate("RegistrWindow", "MainWindow", nullptr));
        sign_up_button->setText(QCoreApplication::translate("RegistrWindow", "\320\227\320\260\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214\321\201\321\217", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("RegistrWindow", "\320\236\321\202\320\264\320\265\320\273 \320\277\321\200\320\276\320\264\320\260\320\266", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("RegistrWindow", "\320\236\321\202\320\264\320\265\320\273 \320\272\320\260\320\264\321\200\320\276\320\262", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("RegistrWindow", "\320\236\321\202\320\264\320\265\320\273 \320\277\321\200\320\276\320\264\321\203\320\272\321\202\320\260", nullptr));

        password_1->setText(QCoreApplication::translate("RegistrWindow", "<html><head/><body><p><span style=\" font-size:24pt;\">\320\237\320\260\321\200\320\276\320\273\321\214</span></p></body></html>", nullptr));
        back_button->setText(QCoreApplication::translate("RegistrWindow", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        login_1->setText(QCoreApplication::translate("RegistrWindow", "<html><head/><body><p><span style=\" font-size:24pt;\">\320\233\320\276\320\263\320\270\320\275</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegistrWindow: public Ui_RegistrWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRWINDOW_H
