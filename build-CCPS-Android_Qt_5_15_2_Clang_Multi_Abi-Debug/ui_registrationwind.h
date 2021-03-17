/********************************************************************************
** Form generated from reading UI file 'registrationwind.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATIONWIND_H
#define UI_REGISTRATIONWIND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_registrationwind
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *login_;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLineEdit *password_;
    QVBoxLayout *verticalLayout_2;
    QPushButton *sign_up_button;
    QPushButton *back_button;

    void setupUi(QDialog *registrationwind)
    {
        if (registrationwind->objectName().isEmpty())
            registrationwind->setObjectName(QString::fromUtf8("registrationwind"));
        registrationwind->resize(551, 634);
        gridLayout = new QGridLayout(registrationwind);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        comboBox = new QComboBox(registrationwind);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMinimumSize(QSize(0, 40));
        comboBox->setStyleSheet(QString::fromUtf8("QComboBox {background-color: #555555;\n"
"border-radius: 15%;\n"
"color: white;\n"
"border: 2px solid #444444;\n"
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

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_3->addItem(horizontalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(registrationwind);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        login_ = new QLineEdit(registrationwind);
        login_->setObjectName(QString::fromUtf8("login_"));

        horizontalLayout_3->addWidget(login_);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_4 = new QLabel(registrationwind);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);

        password_ = new QLineEdit(registrationwind);
        password_->setObjectName(QString::fromUtf8("password_"));

        horizontalLayout->addWidget(password_);


        verticalLayout_3->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout_3, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        sign_up_button = new QPushButton(registrationwind);
        sign_up_button->setObjectName(QString::fromUtf8("sign_up_button"));
        sign_up_button->setStyleSheet(QString::fromUtf8("QPushButton {background-color: #555555;\n"
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

        back_button = new QPushButton(registrationwind);
        back_button->setObjectName(QString::fromUtf8("back_button"));
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


        gridLayout->addLayout(verticalLayout_2, 1, 0, 1, 1);


        retranslateUi(registrationwind);

        QMetaObject::connectSlotsByName(registrationwind);
    } // setupUi

    void retranslateUi(QDialog *registrationwind)
    {
        registrationwind->setWindowTitle(QCoreApplication::translate("registrationwind", "Dialog", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("registrationwind", "\320\236\321\202\320\264\320\265\320\273 \320\277\321\200\320\276\320\264\320\260\320\266", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("registrationwind", "\320\236\321\202\320\264\320\265\320\273 \320\272\320\260\320\264\321\200\320\276\320\262", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("registrationwind", "\320\236\321\202\320\264\320\265\320\273 \320\277\321\200\320\276\320\264\321\203\320\272\321\202\320\260", nullptr));

        label_3->setText(QCoreApplication::translate("registrationwind", "<html><head/><body><p><span style=\" font-size:11pt;\">\320\233\320\276\320\263\320\270\320\275</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("registrationwind", "<html><head/><body><p><span style=\" font-size:11pt;\">\320\237\320\260\321\200\320\276\320\273\321\214</span></p></body></html>", nullptr));
        sign_up_button->setText(QCoreApplication::translate("registrationwind", "\320\227\320\260\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214\321\201\321\217", nullptr));
        back_button->setText(QCoreApplication::translate("registrationwind", "\320\235\320\260\320\267\320\260\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class registrationwind: public Ui_registrationwind {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATIONWIND_H
