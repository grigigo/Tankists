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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegistrWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_5;
    QLabel *label_3;
    QLineEdit *login_;
    QSpacerItem *horizontalSpacer;
    QLabel *label_4;
    QLineEdit *password_;
    QSpacerItem *verticalSpacer_4;
    QComboBox *comboBox;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_6;
    QVBoxLayout *verticalLayout_2;
    QPushButton *sign_up_button;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *back_button;
    QSpacerItem *verticalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *RegistrWindow)
    {
        if (RegistrWindow->objectName().isEmpty())
            RegistrWindow->setObjectName(QString::fromUtf8("RegistrWindow"));
        RegistrWindow->resize(557, 653);
        RegistrWindow->setStyleSheet(QString::fromUtf8("background-color: #191919;"));
        centralwidget = new QWidget(RegistrWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_5);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font;
        font.setPointSize(32);
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: white;"));
        label_3->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        verticalLayout_3->addWidget(label_3);

        login_ = new QLineEdit(centralwidget);
        login_->setObjectName(QString::fromUtf8("login_"));
        login_->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"background-color: #232323;\n"
"color: white;\n"
"border: 0px;\n"
"}"));

        verticalLayout_3->addWidget(login_);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_3->addItem(horizontalSpacer);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("color: white;"));
        label_4->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        verticalLayout_3->addWidget(label_4);

        password_ = new QLineEdit(centralwidget);
        password_->setObjectName(QString::fromUtf8("password_"));
        password_->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"background-color: #232323;\n"
"color: white;\n"
"border: 0px;\n"
"}"));

        verticalLayout_3->addWidget(password_);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);

        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMinimumSize(QSize(0, 75));
        QFont font1;
        font1.setPointSize(24);
        comboBox->setFont(font1);
        comboBox->setStyleSheet(QString::fromUtf8("QComboBox {background-color: #555555;\n"
"border-radius: 15%;\n"
"color: white;\n"
"border: 2px solid #444444;\n"
"text-align: center;\n"
"}\n"
"\n"
"QComboBox:hover {\n"
" background-color: #666666\n"
"}\n"
"\n"
"QComboBox:pressed {\n"
" background-color: #666666\n"
"}"));

        verticalLayout_3->addWidget(comboBox);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_7);


        verticalLayout->addLayout(verticalLayout_3);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_6);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        sign_up_button = new QPushButton(centralwidget);
        sign_up_button->setObjectName(QString::fromUtf8("sign_up_button"));
        sign_up_button->setMinimumSize(QSize(0, 100));
        sign_up_button->setFont(font1);
        sign_up_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #555555;\n"
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

        verticalLayout_2->addWidget(sign_up_button);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer_2);

        back_button = new QPushButton(centralwidget);
        back_button->setObjectName(QString::fromUtf8("back_button"));
        back_button->setMinimumSize(QSize(0, 100));
        back_button->setFont(font1);
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

        verticalLayout_2->addWidget(back_button);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        verticalLayout->addLayout(verticalLayout_2);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        RegistrWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(RegistrWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 557, 20));
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
        label_3->setText(QCoreApplication::translate("RegistrWindow", "<html><head/><body><p><span style=\" font-size:24pt;\">\320\233\320\276\320\263\320\270\320\275</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("RegistrWindow", "<html><head/><body><p><span style=\" font-size:24pt;\">\320\237\320\260\321\200\320\276\320\273\321\214</span></p></body></html>", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("RegistrWindow", "\320\236\321\202\320\264\320\265\320\273 \320\277\321\200\320\276\320\264\320\260\320\266", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("RegistrWindow", "\320\236\321\202\320\264\320\265\320\273 \320\272\320\260\320\264\321\200\320\276\320\262", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("RegistrWindow", "\320\236\321\202\320\264\320\265\320\273 \320\277\321\200\320\276\320\264\321\203\320\272\321\202\320\260", nullptr));

        sign_up_button->setText(QCoreApplication::translate("RegistrWindow", "\320\227\320\260\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214\321\201\321\217", nullptr));
        back_button->setText(QCoreApplication::translate("RegistrWindow", "\320\235\320\260\320\267\320\260\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegistrWindow: public Ui_RegistrWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRWINDOW_H
