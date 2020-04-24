/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *Login;
    QGroupBox *groupBox;
    QPushButton *Loginbtn;
    QPushButton *ClearBtn;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *usernamelineedit;
    QLineEdit *passwordlineedit;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *usernamelbl;
    QLabel *passwordlbl;
    QWidget *Planning;
    QWidget *Admin;
    QPushButton *loadDatabtn;
    QPushButton *gotodisplaybtn;
    QWidget *Displaytable;
    QTableView *tableView;
    QComboBox *teamcombobox;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_3;
    QPushButton *displaystadiumteambtn;
    QPushButton *disstadiumstadiumbtn;
    QPushButton *disAmericanTeam;
    QPushButton *disNationalbtn;
    QPushButton *disstadiumtypobtn;
    QPushButton *disteamopenroof;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_4;
    QPushButton *disstaddatebtn;
    QPushButton *disstadiumseats;
    QPushButton *disstadiumlarcenter;
    QPushButton *disstadiumsmalcenter;
    QWidget *Loadpage;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_5;
    QPushButton *loadSouvenirInfo;
    QPushButton *loadTeamInfo;
    QPushButton *loadstadiumsbtn;
    QPushButton *Backtoadmin;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, -10, 771, 551));
        Login = new QWidget();
        Login->setObjectName(QString::fromUtf8("Login"));
        groupBox = new QGroupBox(Login);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(200, 150, 381, 221));
        Loginbtn = new QPushButton(groupBox);
        Loginbtn->setObjectName(QString::fromUtf8("Loginbtn"));
        Loginbtn->setGeometry(QRect(60, 170, 112, 32));
        ClearBtn = new QPushButton(groupBox);
        ClearBtn->setObjectName(QString::fromUtf8("ClearBtn"));
        ClearBtn->setGeometry(QRect(220, 170, 112, 32));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(170, 50, 171, 101));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        usernamelineedit = new QLineEdit(layoutWidget);
        usernamelineedit->setObjectName(QString::fromUtf8("usernamelineedit"));

        verticalLayout->addWidget(usernamelineedit);

        passwordlineedit = new QLineEdit(layoutWidget);
        passwordlineedit->setObjectName(QString::fromUtf8("passwordlineedit"));
        passwordlineedit->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(passwordlineedit);

        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(40, 50, 101, 91));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        usernamelbl = new QLabel(layoutWidget1);
        usernamelbl->setObjectName(QString::fromUtf8("usernamelbl"));

        verticalLayout_2->addWidget(usernamelbl);

        passwordlbl = new QLabel(layoutWidget1);
        passwordlbl->setObjectName(QString::fromUtf8("passwordlbl"));

        verticalLayout_2->addWidget(passwordlbl);

        stackedWidget->addWidget(Login);
        Planning = new QWidget();
        Planning->setObjectName(QString::fromUtf8("Planning"));
        stackedWidget->addWidget(Planning);
        Admin = new QWidget();
        Admin->setObjectName(QString::fromUtf8("Admin"));
        loadDatabtn = new QPushButton(Admin);
        loadDatabtn->setObjectName(QString::fromUtf8("loadDatabtn"));
        loadDatabtn->setGeometry(QRect(250, 60, 281, 32));
        gotodisplaybtn = new QPushButton(Admin);
        gotodisplaybtn->setObjectName(QString::fromUtf8("gotodisplaybtn"));
        gotodisplaybtn->setGeometry(QRect(250, 120, 281, 32));
        stackedWidget->addWidget(Admin);
        Displaytable = new QWidget();
        Displaytable->setObjectName(QString::fromUtf8("Displaytable"));
        tableView = new QTableView(Displaytable);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(50, 30, 701, 301));
        teamcombobox = new QComboBox(Displaytable);
        teamcombobox->setObjectName(QString::fromUtf8("teamcombobox"));
        teamcombobox->setGeometry(QRect(560, 510, 191, 32));
        layoutWidget2 = new QWidget(Displaytable);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(50, 349, 333, 205));
        verticalLayout_3 = new QVBoxLayout(layoutWidget2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        displaystadiumteambtn = new QPushButton(layoutWidget2);
        displaystadiumteambtn->setObjectName(QString::fromUtf8("displaystadiumteambtn"));

        verticalLayout_3->addWidget(displaystadiumteambtn);

        disstadiumstadiumbtn = new QPushButton(layoutWidget2);
        disstadiumstadiumbtn->setObjectName(QString::fromUtf8("disstadiumstadiumbtn"));

        verticalLayout_3->addWidget(disstadiumstadiumbtn);

        disAmericanTeam = new QPushButton(layoutWidget2);
        disAmericanTeam->setObjectName(QString::fromUtf8("disAmericanTeam"));

        verticalLayout_3->addWidget(disAmericanTeam);

        disNationalbtn = new QPushButton(layoutWidget2);
        disNationalbtn->setObjectName(QString::fromUtf8("disNationalbtn"));

        verticalLayout_3->addWidget(disNationalbtn);

        disstadiumtypobtn = new QPushButton(layoutWidget2);
        disstadiumtypobtn->setObjectName(QString::fromUtf8("disstadiumtypobtn"));

        verticalLayout_3->addWidget(disstadiumtypobtn);

        disteamopenroof = new QPushButton(layoutWidget2);
        disteamopenroof->setObjectName(QString::fromUtf8("disteamopenroof"));

        verticalLayout_3->addWidget(disteamopenroof);

        layoutWidget3 = new QWidget(Displaytable);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(390, 350, 382, 141));
        verticalLayout_4 = new QVBoxLayout(layoutWidget3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        disstaddatebtn = new QPushButton(layoutWidget3);
        disstaddatebtn->setObjectName(QString::fromUtf8("disstaddatebtn"));

        verticalLayout_4->addWidget(disstaddatebtn);

        disstadiumseats = new QPushButton(layoutWidget3);
        disstadiumseats->setObjectName(QString::fromUtf8("disstadiumseats"));

        verticalLayout_4->addWidget(disstadiumseats);

        disstadiumlarcenter = new QPushButton(layoutWidget3);
        disstadiumlarcenter->setObjectName(QString::fromUtf8("disstadiumlarcenter"));

        verticalLayout_4->addWidget(disstadiumlarcenter);

        disstadiumsmalcenter = new QPushButton(layoutWidget3);
        disstadiumsmalcenter->setObjectName(QString::fromUtf8("disstadiumsmalcenter"));

        verticalLayout_4->addWidget(disstadiumsmalcenter);

        stackedWidget->addWidget(Displaytable);
        Loadpage = new QWidget();
        Loadpage->setObjectName(QString::fromUtf8("Loadpage"));
        layoutWidget4 = new QWidget(Loadpage);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(200, 70, 381, 391));
        verticalLayout_5 = new QVBoxLayout(layoutWidget4);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        loadSouvenirInfo = new QPushButton(layoutWidget4);
        loadSouvenirInfo->setObjectName(QString::fromUtf8("loadSouvenirInfo"));

        verticalLayout_5->addWidget(loadSouvenirInfo);

        loadTeamInfo = new QPushButton(layoutWidget4);
        loadTeamInfo->setObjectName(QString::fromUtf8("loadTeamInfo"));

        verticalLayout_5->addWidget(loadTeamInfo);

        loadstadiumsbtn = new QPushButton(layoutWidget4);
        loadstadiumsbtn->setObjectName(QString::fromUtf8("loadstadiumsbtn"));

        verticalLayout_5->addWidget(loadstadiumsbtn);

        Backtoadmin = new QPushButton(layoutWidget4);
        Backtoadmin->setObjectName(QString::fromUtf8("Backtoadmin"));

        verticalLayout_5->addWidget(Backtoadmin);

        stackedWidget->addWidget(Loadpage);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Login", nullptr));
        Loginbtn->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        ClearBtn->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        usernamelbl->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        passwordlbl->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        loadDatabtn->setText(QCoreApplication::translate("MainWindow", "Load Data", nullptr));
        gotodisplaybtn->setText(QCoreApplication::translate("MainWindow", "Go to Display", nullptr));
        displaystadiumteambtn->setText(QCoreApplication::translate("MainWindow", "Display Teams Stadium sorted by Team Name", nullptr));
        disstadiumstadiumbtn->setText(QCoreApplication::translate("MainWindow", "Display Teams Stadium sorted by Stadium Name", nullptr));
        disAmericanTeam->setText(QCoreApplication::translate("MainWindow", "Display American League", nullptr));
        disNationalbtn->setText(QCoreApplication::translate("MainWindow", "Display National League", nullptr));
        disstadiumtypobtn->setText(QCoreApplication::translate("MainWindow", "Display Stadium sorted by Park Typology", nullptr));
        disteamopenroof->setText(QCoreApplication::translate("MainWindow", "Display Teams with Open Roof", nullptr));
        disstaddatebtn->setText(QCoreApplication::translate("MainWindow", "Display Stadiums in Chronological order", nullptr));
        disstadiumseats->setText(QCoreApplication::translate("MainWindow", "Display Stadiums sorted by Seating Capacity", nullptr));
        disstadiumlarcenter->setText(QCoreApplication::translate("MainWindow", "Display Stadiums sorted by distance to center (Largest)", nullptr));
        disstadiumsmalcenter->setText(QCoreApplication::translate("MainWindow", "Display Stadiums sorted by distance to center (Smallest)", nullptr));
        loadSouvenirInfo->setText(QCoreApplication::translate("MainWindow", "Load Souvenir Info", nullptr));
        loadTeamInfo->setText(QCoreApplication::translate("MainWindow", "Load MLB Info", nullptr));
        loadstadiumsbtn->setText(QCoreApplication::translate("MainWindow", "Load Stadiums", nullptr));
        Backtoadmin->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
