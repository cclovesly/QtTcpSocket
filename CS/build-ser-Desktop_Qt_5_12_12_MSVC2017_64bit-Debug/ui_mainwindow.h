/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *portnum;
    QLabel *label;
    QLineEdit *ipnum;
    QPlainTextEdit *receivewd;
    QLineEdit *sendwd;
    QPushButton *openclient;
    QPushButton *closeclient;
    QPushButton *sent;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(632, 434);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        portnum = new QLineEdit(centralwidget);
        portnum->setObjectName(QString::fromUtf8("portnum"));
        portnum->setGeometry(QRect(90, 70, 171, 21));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 70, 45, 16));
        ipnum = new QLineEdit(centralwidget);
        ipnum->setObjectName(QString::fromUtf8("ipnum"));
        ipnum->setGeometry(QRect(70, 20, 171, 21));
        receivewd = new QPlainTextEdit(centralwidget);
        receivewd->setObjectName(QString::fromUtf8("receivewd"));
        receivewd->setGeometry(QRect(320, 10, 256, 192));
        sendwd = new QLineEdit(centralwidget);
        sendwd->setObjectName(QString::fromUtf8("sendwd"));
        sendwd->setGeometry(QRect(340, 210, 201, 101));
        openclient = new QPushButton(centralwidget);
        openclient->setObjectName(QString::fromUtf8("openclient"));
        openclient->setGeometry(QRect(100, 130, 93, 28));
        closeclient = new QPushButton(centralwidget);
        closeclient->setObjectName(QString::fromUtf8("closeclient"));
        closeclient->setGeometry(QRect(60, 320, 93, 28));
        sent = new QPushButton(centralwidget);
        sent->setObjectName(QString::fromUtf8("sent"));
        sent->setGeometry(QRect(440, 330, 93, 28));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 20, 16, 16));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 632, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        portnum->setText(QApplication::translate("MainWindow", "6000", nullptr));
        label->setText(QApplication::translate("MainWindow", "\347\253\257\345\217\243\345\217\267", nullptr));
        ipnum->setText(QApplication::translate("MainWindow", "127.0.0.1", nullptr));
        openclient->setText(QApplication::translate("MainWindow", "\350\277\236\346\216\245", nullptr));
        closeclient->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255", nullptr));
        sent->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "IP", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
