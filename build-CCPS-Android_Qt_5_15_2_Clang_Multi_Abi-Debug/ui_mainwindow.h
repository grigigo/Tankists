/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
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

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QLabel *label_5;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *authorization;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *login;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *password;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton;
    QLabel *info;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(614, 657);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 0, 0, 1, 1);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 1, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        authorization = new QGroupBox(centralwidget);
        authorization->setObjectName(QString::fromUtf8("authorization"));
        authorization->setEnabled(true);
        gridLayout = new QGridLayout(authorization);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(authorization);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        login = new QLineEdit(authorization);
        login->setObjectName(QString::fromUtf8("login"));

        horizontalLayout->addWidget(login);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(authorization);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        password = new QLineEdit(authorization);
        password->setObjectName(QString::fromUtf8("password"));

        horizontalLayout_2->addWidget(password);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(1, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_2->addItem(verticalSpacer);

        pushButton = new QPushButton(authorization);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(20, 100));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {background-color: #555555;\n"
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

        verticalLayout_2->addWidget(pushButton);


        gridLayout->addLayout(verticalLayout_2, 1, 0, 1, 1);

        info = new QLabel(authorization);
        info->setObjectName(QString::fromUtf8("info"));
        info->setMaximumSize(QSize(16777215, 100));

        gridLayout->addWidget(info, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(authorization);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(0, 50));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(pushButton_2, 2, 0, 1, 1);


        verticalLayout_3->addWidget(authorization);


        gridLayout_2->addLayout(verticalLayout_3, 2, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 614, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">\320\227\320\260\321\217\320\262\320\272\320\260 \320\261\321\213\320\273\320\260 \320\276\321\202\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\260</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">\320\235\320\265\320\272\320\276\321\200\321\200\320\265\320\272\321\202\320\275\321\213\320\271 \320\273\320\276\320\263\320\270\320\275 \320\270\320\273\320\270 \320\277\320\260\321\200\320\276\320\273\321\214</span></p><p align=\"center\"><span style=\" font-size:16pt;\">\320\273\320\276\320\263\320\270\320\275/\320\277\320\260\321\200\320\276\320\273\321\214 \320\264\320\276\320\273\320\266\320\265\320\275 \320\270\320\274\320\265\321\202\321\214 \320\261\320\276\320\273\321\214\321\210\320\265 3 \321\201\320\270\320\274\320\262\320\276\320\273\320\276\320\262</span></p></body></html>", nullptr));
        authorization->setTitle(QString());
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt;\">\320\233\320\276\320\263\320\270\320\275</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt;\">\320\237\320\260\321\200\320\276\320\273\321\214</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\276\320\262\320\260\321\202\321\214\321\201\321\217", nullptr));
        info->setText(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
