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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_registrationwind
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *Autho;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_6;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *login_;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLineEdit *password_;
    QVBoxLayout *verticalLayout_7;
    QPushButton *pushButton_3;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_2;

    void setupUi(QDialog *registrationwind)
    {
        if (registrationwind->objectName().isEmpty())
            registrationwind->setObjectName(QString::fromUtf8("registrationwind"));
        registrationwind->resize(480, 586);
        verticalLayout = new QVBoxLayout(registrationwind);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        Autho = new QGroupBox(registrationwind);
        Autho->setObjectName(QString::fromUtf8("Autho"));
        horizontalLayout = new QHBoxLayout(Autho);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));

        verticalLayout_4->addLayout(verticalLayout_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));

        verticalLayout_4->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));

        verticalLayout_4->addLayout(verticalLayout_6);

        comboBox = new QComboBox(Autho);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMinimumSize(QSize(0, 40));

        verticalLayout_4->addWidget(comboBox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(Autho);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        login_ = new QLineEdit(Autho);
        login_->setObjectName(QString::fromUtf8("login_"));

        horizontalLayout_3->addWidget(login_);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_4 = new QLabel(Autho);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_5->addWidget(label_4);

        password_ = new QLineEdit(Autho);
        password_->setObjectName(QString::fromUtf8("password_"));

        horizontalLayout_5->addWidget(password_);


        verticalLayout_4->addLayout(horizontalLayout_5);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));

        verticalLayout_4->addLayout(verticalLayout_7);

        pushButton_3 = new QPushButton(Autho);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(0, 50));

        verticalLayout_4->addWidget(pushButton_3);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));

        verticalLayout_4->addLayout(verticalLayout_8);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));

        verticalLayout_4->addLayout(verticalLayout_2);


        horizontalLayout->addLayout(verticalLayout_4);


        verticalLayout->addWidget(Autho);


        retranslateUi(registrationwind);

        QMetaObject::connectSlotsByName(registrationwind);
    } // setupUi

    void retranslateUi(QDialog *registrationwind)
    {
        registrationwind->setWindowTitle(QCoreApplication::translate("registrationwind", "Dialog", nullptr));
        Autho->setTitle(QString());
        comboBox->setItemText(0, QCoreApplication::translate("registrationwind", "\320\236\321\202\320\264\320\265\320\273 \320\277\321\200\320\276\320\264\320\260\320\266", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("registrationwind", "\320\236\321\202\320\264\320\265\320\273 \320\272\320\260\320\264\321\200\320\276\320\262", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("registrationwind", "\320\236\321\202\320\264\320\265\320\273 \320\277\321\200\320\276\320\264\321\203\320\272\321\202\320\260", nullptr));

        label_3->setText(QCoreApplication::translate("registrationwind", "<html><head/><body><p><span style=\" font-size:11pt;\">\320\233\320\276\320\263\320\270\320\275</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("registrationwind", "<html><head/><body><p><span style=\" font-size:11pt;\">\320\237\320\260\321\200\320\276\320\273\321\214</span></p></body></html>", nullptr));
        pushButton_3->setText(QCoreApplication::translate("registrationwind", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214 \320\267\320\260\321\217\320\262\320\272\321\203", nullptr));
    } // retranslateUi

};

namespace Ui {
    class registrationwind: public Ui_registrationwind {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATIONWIND_H
