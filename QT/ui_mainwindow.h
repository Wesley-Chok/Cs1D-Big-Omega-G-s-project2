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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
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
    QTableWidget *planningtable;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *MSTbtn;
    QPushButton *DFSbtn;
    QPushButton *BFSbtn;
    QPushButton *backtologin;
    QComboBox *tripBox;
    QWidget *Admin;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_6;
    QPushButton *loadDatabtn;
    QPushButton *gotodisplaybtn;
    QPushButton *Souvenirbtn;
    QPushButton *EditMlBbtn;
    QPushButton *backtopass;
    QWidget *Displaytable;
    QTableView *tableView;
    QComboBox *teamcombobox;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_3;
    QPushButton *displaystadiumteambtn;
    QPushButton *disstadiumstadiumbtn;
    QPushButton *disAmericanTeam;
    QPushButton *disNationalbtn;
    QPushButton *disstadiumtypobtn;
    QPushButton *disteamopenroof;
    QWidget *layoutWidget5;
    QVBoxLayout *verticalLayout_4;
    QPushButton *disstaddatebtn;
    QPushButton *disstadiumseats;
    QPushButton *disstadiumlarcenter;
    QPushButton *disstadiumsmalcenter;
    QPushButton *backtoadmin;
    QWidget *Loadpage;
    QWidget *layoutWidget6;
    QVBoxLayout *verticalLayout_5;
    QPushButton *loadSouvenirInfo;
    QPushButton *loadTeamInfo;
    QPushButton *loadstadiumsbtn;
    QPushButton *Backtoadmin;
    QWidget *souvenirspage;
    QComboBox *TeamCombosouv;
    QPushButton *BacktoAdmin;
    QTableView *Souveniralltable;
    QLineEdit *LineEditsouv;
    QLabel *itemssouvlbl;
    QLabel *pricesouvlabel;
    QSpinBox *spinBoxDollar;
    QSpinBox *spinBoxCents;
    QLabel *label_3;
    QLabel *Teamnamelbl;
    QLabel *itemnamelbl;
    QPushButton *AddSouv;
    QWidget *layoutWidget7;
    QHBoxLayout *horizontalLayout;
    QLabel *label_9;
    QSpinBox *spinBoxDollar2;
    QLabel *label_8;
    QSpinBox *spinBoxCents2;
    QPushButton *Editsouvbtn;
    QPushButton *deleteSouvbtn;
    QWidget *stadiuminfopage;
    QComboBox *stadiumcombobox;
    QTableView *stadiumtableview;
    QWidget *layoutWidget8;
    QVBoxLayout *verticalLayout_7;
    QSpinBox *capacityspinbox;
    QLineEdit *stadiumnameedit;
    QComboBox *playingsurfacespinbox;
    QComboBox *rooftypespinbox;
    QWidget *layoutWidget9;
    QVBoxLayout *verticalLayout_8;
    QLabel *capacitylbl;
    QLabel *stadiumnamelbl;
    QLabel *playingsurfacelbl;
    QLabel *rooftypelbl;
    QWidget *layoutWidget10;
    QVBoxLayout *verticalLayout_9;
    QComboBox *ballparkspinbox;
    QSpinBox *dateopenededit;
    QSpinBox *distancespin;
    QLineEdit *locationedit;
    QWidget *layoutWidget11;
    QVBoxLayout *verticalLayout_10;
    QLabel *ballparklbl;
    QLabel *dateopenedlbl;
    QLabel *ditancecenterlbl;
    QLabel *locationlbl;
    QLabel *teamlbl;
    QLabel *leaguelbl;
    QSplitter *splitter;
    QPushButton *editstadium;
    QPushButton *Backtoadmin_2;
    QWidget *TripSelect;
    QListView *selected_listView;
    QListView *sorted_listView;
    QComboBox *add_combo;
    QPushButton *add_button;
    QPushButton *select_done;
    QLabel *add_label;
    QLabel *selected_label;
    QLabel *sorted_label;
    QComboBox *delete_combo;
    QLabel *delete_label;
    QPushButton *delete_button;
    QLabel *totDist_label;
    QLabel *totDist_slot;
    QPushButton *tripSelect_back;
    QWidget *FanOptions;
    QPushButton *traversals_button;
    QPushButton *custom_button;
    QPushButton *marlins_button;
    QPushButton *dodgers_button;
    QLabel *fan_label;
    QPushButton *startStadium_button;
    QPlainTextEdit *dodgers_text;
    QPlainTextEdit *start_text;
    QPlainTextEdit *marlins_text;
    QPlainTextEdit *custom_text;
    QPushButton *backtologin_2;
    QWidget *Souvenirtrip;
    QTableWidget *souvenirtable;
    QPushButton *calculatesouvbtn;
    QPushButton *clearsouvbtn;
    QPushButton *backtotrip;
    QLabel *label_2;
    QLabel *grandtotal;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
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
        planningtable = new QTableWidget(Planning);
        planningtable->setObjectName(QString::fromUtf8("planningtable"));
        planningtable->setGeometry(QRect(50, 100, 651, 301));
        layoutWidget2 = new QWidget(Planning);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(50, 60, 431, 32));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        MSTbtn = new QPushButton(layoutWidget2);
        MSTbtn->setObjectName(QString::fromUtf8("MSTbtn"));

        horizontalLayout_2->addWidget(MSTbtn);

        DFSbtn = new QPushButton(layoutWidget2);
        DFSbtn->setObjectName(QString::fromUtf8("DFSbtn"));

        horizontalLayout_2->addWidget(DFSbtn);

        BFSbtn = new QPushButton(layoutWidget2);
        BFSbtn->setObjectName(QString::fromUtf8("BFSbtn"));

        horizontalLayout_2->addWidget(BFSbtn);

        backtologin = new QPushButton(Planning);
        backtologin->setObjectName(QString::fromUtf8("backtologin"));
        backtologin->setGeometry(QRect(300, 440, 171, 32));
        tripBox = new QComboBox(Planning);
        tripBox->setObjectName(QString::fromUtf8("tripBox"));
        tripBox->setGeometry(QRect(580, 60, 121, 32));
        stackedWidget->addWidget(Planning);
        Admin = new QWidget();
        Admin->setObjectName(QString::fromUtf8("Admin"));
        layoutWidget3 = new QWidget(Admin);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(230, 60, 321, 381));
        verticalLayout_6 = new QVBoxLayout(layoutWidget3);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        loadDatabtn = new QPushButton(layoutWidget3);
        loadDatabtn->setObjectName(QString::fromUtf8("loadDatabtn"));

        verticalLayout_6->addWidget(loadDatabtn);

        gotodisplaybtn = new QPushButton(layoutWidget3);
        gotodisplaybtn->setObjectName(QString::fromUtf8("gotodisplaybtn"));

        verticalLayout_6->addWidget(gotodisplaybtn);

        Souvenirbtn = new QPushButton(layoutWidget3);
        Souvenirbtn->setObjectName(QString::fromUtf8("Souvenirbtn"));

        verticalLayout_6->addWidget(Souvenirbtn);

        EditMlBbtn = new QPushButton(layoutWidget3);
        EditMlBbtn->setObjectName(QString::fromUtf8("EditMlBbtn"));

        verticalLayout_6->addWidget(EditMlBbtn);

        backtopass = new QPushButton(layoutWidget3);
        backtopass->setObjectName(QString::fromUtf8("backtopass"));

        verticalLayout_6->addWidget(backtopass);

        stackedWidget->addWidget(Admin);
        Displaytable = new QWidget();
        Displaytable->setObjectName(QString::fromUtf8("Displaytable"));
        tableView = new QTableView(Displaytable);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(50, 30, 701, 301));
        teamcombobox = new QComboBox(Displaytable);
        teamcombobox->setObjectName(QString::fromUtf8("teamcombobox"));
        teamcombobox->setGeometry(QRect(560, 500, 191, 32));
        layoutWidget4 = new QWidget(Displaytable);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(60, 349, 333, 205));
        verticalLayout_3 = new QVBoxLayout(layoutWidget4);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        displaystadiumteambtn = new QPushButton(layoutWidget4);
        displaystadiumteambtn->setObjectName(QString::fromUtf8("displaystadiumteambtn"));

        verticalLayout_3->addWidget(displaystadiumteambtn);

        disstadiumstadiumbtn = new QPushButton(layoutWidget4);
        disstadiumstadiumbtn->setObjectName(QString::fromUtf8("disstadiumstadiumbtn"));

        verticalLayout_3->addWidget(disstadiumstadiumbtn);

        disAmericanTeam = new QPushButton(layoutWidget4);
        disAmericanTeam->setObjectName(QString::fromUtf8("disAmericanTeam"));

        verticalLayout_3->addWidget(disAmericanTeam);

        disNationalbtn = new QPushButton(layoutWidget4);
        disNationalbtn->setObjectName(QString::fromUtf8("disNationalbtn"));

        verticalLayout_3->addWidget(disNationalbtn);

        disstadiumtypobtn = new QPushButton(layoutWidget4);
        disstadiumtypobtn->setObjectName(QString::fromUtf8("disstadiumtypobtn"));

        verticalLayout_3->addWidget(disstadiumtypobtn);

        disteamopenroof = new QPushButton(layoutWidget4);
        disteamopenroof->setObjectName(QString::fromUtf8("disteamopenroof"));

        verticalLayout_3->addWidget(disteamopenroof);

        layoutWidget5 = new QWidget(Displaytable);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(400, 350, 382, 135));
        verticalLayout_4 = new QVBoxLayout(layoutWidget5);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        disstaddatebtn = new QPushButton(layoutWidget5);
        disstaddatebtn->setObjectName(QString::fromUtf8("disstaddatebtn"));

        verticalLayout_4->addWidget(disstaddatebtn);

        disstadiumseats = new QPushButton(layoutWidget5);
        disstadiumseats->setObjectName(QString::fromUtf8("disstadiumseats"));

        verticalLayout_4->addWidget(disstadiumseats);

        disstadiumlarcenter = new QPushButton(layoutWidget5);
        disstadiumlarcenter->setObjectName(QString::fromUtf8("disstadiumlarcenter"));

        verticalLayout_4->addWidget(disstadiumlarcenter);

        disstadiumsmalcenter = new QPushButton(layoutWidget5);
        disstadiumsmalcenter->setObjectName(QString::fromUtf8("disstadiumsmalcenter"));

        verticalLayout_4->addWidget(disstadiumsmalcenter);

        backtoadmin = new QPushButton(Displaytable);
        backtoadmin->setObjectName(QString::fromUtf8("backtoadmin"));
        backtoadmin->setGeometry(QRect(410, 500, 112, 32));
        stackedWidget->addWidget(Displaytable);
        Loadpage = new QWidget();
        Loadpage->setObjectName(QString::fromUtf8("Loadpage"));
        layoutWidget6 = new QWidget(Loadpage);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(200, 70, 381, 391));
        verticalLayout_5 = new QVBoxLayout(layoutWidget6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        loadSouvenirInfo = new QPushButton(layoutWidget6);
        loadSouvenirInfo->setObjectName(QString::fromUtf8("loadSouvenirInfo"));

        verticalLayout_5->addWidget(loadSouvenirInfo);

        loadTeamInfo = new QPushButton(layoutWidget6);
        loadTeamInfo->setObjectName(QString::fromUtf8("loadTeamInfo"));

        verticalLayout_5->addWidget(loadTeamInfo);

        loadstadiumsbtn = new QPushButton(layoutWidget6);
        loadstadiumsbtn->setObjectName(QString::fromUtf8("loadstadiumsbtn"));

        verticalLayout_5->addWidget(loadstadiumsbtn);

        Backtoadmin = new QPushButton(layoutWidget6);
        Backtoadmin->setObjectName(QString::fromUtf8("Backtoadmin"));

        verticalLayout_5->addWidget(Backtoadmin);

        stackedWidget->addWidget(Loadpage);
        souvenirspage = new QWidget();
        souvenirspage->setObjectName(QString::fromUtf8("souvenirspage"));
        TeamCombosouv = new QComboBox(souvenirspage);
        TeamCombosouv->setObjectName(QString::fromUtf8("TeamCombosouv"));
        TeamCombosouv->setGeometry(QRect(100, 40, 241, 32));
        BacktoAdmin = new QPushButton(souvenirspage);
        BacktoAdmin->setObjectName(QString::fromUtf8("BacktoAdmin"));
        BacktoAdmin->setGeometry(QRect(531, 40, 171, 32));
        Souveniralltable = new QTableView(souvenirspage);
        Souveniralltable->setObjectName(QString::fromUtf8("Souveniralltable"));
        Souveniralltable->setGeometry(QRect(80, 80, 621, 281));
        LineEditsouv = new QLineEdit(souvenirspage);
        LineEditsouv->setObjectName(QString::fromUtf8("LineEditsouv"));
        LineEditsouv->setGeometry(QRect(570, 390, 131, 21));
        itemssouvlbl = new QLabel(souvenirspage);
        itemssouvlbl->setObjectName(QString::fromUtf8("itemssouvlbl"));
        itemssouvlbl->setGeometry(QRect(470, 390, 101, 20));
        pricesouvlabel = new QLabel(souvenirspage);
        pricesouvlabel->setObjectName(QString::fromUtf8("pricesouvlabel"));
        pricesouvlabel->setGeometry(QRect(480, 430, 58, 16));
        spinBoxDollar = new QSpinBox(souvenirspage);
        spinBoxDollar->setObjectName(QString::fromUtf8("spinBoxDollar"));
        spinBoxDollar->setGeometry(QRect(570, 430, 61, 22));
        spinBoxCents = new QSpinBox(souvenirspage);
        spinBoxCents->setObjectName(QString::fromUtf8("spinBoxCents"));
        spinBoxCents->setGeometry(QRect(650, 430, 51, 22));
        label_3 = new QLabel(souvenirspage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(640, 430, 16, 16));
        Teamnamelbl = new QLabel(souvenirspage);
        Teamnamelbl->setObjectName(QString::fromUtf8("Teamnamelbl"));
        Teamnamelbl->setGeometry(QRect(70, 400, 161, 20));
        itemnamelbl = new QLabel(souvenirspage);
        itemnamelbl->setObjectName(QString::fromUtf8("itemnamelbl"));
        itemnamelbl->setGeometry(QRect(70, 440, 161, 20));
        AddSouv = new QPushButton(souvenirspage);
        AddSouv->setObjectName(QString::fromUtf8("AddSouv"));
        AddSouv->setGeometry(QRect(570, 470, 112, 32));
        layoutWidget7 = new QWidget(souvenirspage);
        layoutWidget7->setObjectName(QString::fromUtf8("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(70, 470, 339, 33));
        horizontalLayout = new QHBoxLayout(layoutWidget7);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget7);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout->addWidget(label_9);

        spinBoxDollar2 = new QSpinBox(layoutWidget7);
        spinBoxDollar2->setObjectName(QString::fromUtf8("spinBoxDollar2"));

        horizontalLayout->addWidget(spinBoxDollar2);

        label_8 = new QLabel(layoutWidget7);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout->addWidget(label_8);

        spinBoxCents2 = new QSpinBox(layoutWidget7);
        spinBoxCents2->setObjectName(QString::fromUtf8("spinBoxCents2"));

        horizontalLayout->addWidget(spinBoxCents2);

        Editsouvbtn = new QPushButton(layoutWidget7);
        Editsouvbtn->setObjectName(QString::fromUtf8("Editsouvbtn"));

        horizontalLayout->addWidget(Editsouvbtn);

        deleteSouvbtn = new QPushButton(layoutWidget7);
        deleteSouvbtn->setObjectName(QString::fromUtf8("deleteSouvbtn"));

        horizontalLayout->addWidget(deleteSouvbtn);

        stackedWidget->addWidget(souvenirspage);
        stadiuminfopage = new QWidget();
        stadiuminfopage->setObjectName(QString::fromUtf8("stadiuminfopage"));
        stadiumcombobox = new QComboBox(stadiuminfopage);
        stadiumcombobox->setObjectName(QString::fromUtf8("stadiumcombobox"));
        stadiumcombobox->setGeometry(QRect(50, 40, 211, 32));
        stadiumtableview = new QTableView(stadiuminfopage);
        stadiumtableview->setObjectName(QString::fromUtf8("stadiumtableview"));
        stadiumtableview->setGeometry(QRect(60, 100, 681, 192));
        layoutWidget8 = new QWidget(stadiuminfopage);
        layoutWidget8->setObjectName(QString::fromUtf8("layoutWidget8"));
        layoutWidget8->setGeometry(QRect(210, 320, 171, 181));
        verticalLayout_7 = new QVBoxLayout(layoutWidget8);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        capacityspinbox = new QSpinBox(layoutWidget8);
        capacityspinbox->setObjectName(QString::fromUtf8("capacityspinbox"));
        capacityspinbox->setMaximum(100000);

        verticalLayout_7->addWidget(capacityspinbox);

        stadiumnameedit = new QLineEdit(layoutWidget8);
        stadiumnameedit->setObjectName(QString::fromUtf8("stadiumnameedit"));

        verticalLayout_7->addWidget(stadiumnameedit);

        playingsurfacespinbox = new QComboBox(layoutWidget8);
        playingsurfacespinbox->setObjectName(QString::fromUtf8("playingsurfacespinbox"));

        verticalLayout_7->addWidget(playingsurfacespinbox);

        rooftypespinbox = new QComboBox(layoutWidget8);
        rooftypespinbox->setObjectName(QString::fromUtf8("rooftypespinbox"));

        verticalLayout_7->addWidget(rooftypespinbox);

        layoutWidget9 = new QWidget(stadiuminfopage);
        layoutWidget9->setObjectName(QString::fromUtf8("layoutWidget9"));
        layoutWidget9->setGeometry(QRect(60, 320, 96, 171));
        verticalLayout_8 = new QVBoxLayout(layoutWidget9);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        capacitylbl = new QLabel(layoutWidget9);
        capacitylbl->setObjectName(QString::fromUtf8("capacitylbl"));

        verticalLayout_8->addWidget(capacitylbl);

        stadiumnamelbl = new QLabel(layoutWidget9);
        stadiumnamelbl->setObjectName(QString::fromUtf8("stadiumnamelbl"));

        verticalLayout_8->addWidget(stadiumnamelbl);

        playingsurfacelbl = new QLabel(layoutWidget9);
        playingsurfacelbl->setObjectName(QString::fromUtf8("playingsurfacelbl"));

        verticalLayout_8->addWidget(playingsurfacelbl);

        rooftypelbl = new QLabel(layoutWidget9);
        rooftypelbl->setObjectName(QString::fromUtf8("rooftypelbl"));

        verticalLayout_8->addWidget(rooftypelbl);

        layoutWidget10 = new QWidget(stadiuminfopage);
        layoutWidget10->setObjectName(QString::fromUtf8("layoutWidget10"));
        layoutWidget10->setGeometry(QRect(600, 310, 171, 141));
        verticalLayout_9 = new QVBoxLayout(layoutWidget10);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        ballparkspinbox = new QComboBox(layoutWidget10);
        ballparkspinbox->setObjectName(QString::fromUtf8("ballparkspinbox"));

        verticalLayout_9->addWidget(ballparkspinbox);

        dateopenededit = new QSpinBox(layoutWidget10);
        dateopenededit->setObjectName(QString::fromUtf8("dateopenededit"));
        dateopenededit->setMaximum(100000);

        verticalLayout_9->addWidget(dateopenededit);

        distancespin = new QSpinBox(layoutWidget10);
        distancespin->setObjectName(QString::fromUtf8("distancespin"));
        distancespin->setMaximum(100000);

        verticalLayout_9->addWidget(distancespin);

        locationedit = new QLineEdit(layoutWidget10);
        locationedit->setObjectName(QString::fromUtf8("locationedit"));

        verticalLayout_9->addWidget(locationedit);

        layoutWidget11 = new QWidget(stadiuminfopage);
        layoutWidget11->setObjectName(QString::fromUtf8("layoutWidget11"));
        layoutWidget11->setGeometry(QRect(460, 320, 114, 131));
        verticalLayout_10 = new QVBoxLayout(layoutWidget11);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        ballparklbl = new QLabel(layoutWidget11);
        ballparklbl->setObjectName(QString::fromUtf8("ballparklbl"));

        verticalLayout_10->addWidget(ballparklbl);

        dateopenedlbl = new QLabel(layoutWidget11);
        dateopenedlbl->setObjectName(QString::fromUtf8("dateopenedlbl"));

        verticalLayout_10->addWidget(dateopenedlbl);

        ditancecenterlbl = new QLabel(layoutWidget11);
        ditancecenterlbl->setObjectName(QString::fromUtf8("ditancecenterlbl"));

        verticalLayout_10->addWidget(ditancecenterlbl);

        locationlbl = new QLabel(layoutWidget11);
        locationlbl->setObjectName(QString::fromUtf8("locationlbl"));

        verticalLayout_10->addWidget(locationlbl);

        teamlbl = new QLabel(stadiuminfopage);
        teamlbl->setObjectName(QString::fromUtf8("teamlbl"));
        teamlbl->setGeometry(QRect(460, 20, 58, 16));
        leaguelbl = new QLabel(stadiuminfopage);
        leaguelbl->setObjectName(QString::fromUtf8("leaguelbl"));
        leaguelbl->setGeometry(QRect(470, 60, 58, 16));
        splitter = new QSplitter(stadiuminfopage);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(460, 470, 291, 32));
        splitter->setOrientation(Qt::Horizontal);
        editstadium = new QPushButton(splitter);
        editstadium->setObjectName(QString::fromUtf8("editstadium"));
        splitter->addWidget(editstadium);
        Backtoadmin_2 = new QPushButton(splitter);
        Backtoadmin_2->setObjectName(QString::fromUtf8("Backtoadmin_2"));
        splitter->addWidget(Backtoadmin_2);
        stackedWidget->addWidget(stadiuminfopage);
        TripSelect = new QWidget();
        TripSelect->setObjectName(QString::fromUtf8("TripSelect"));
        selected_listView = new QListView(TripSelect);
        selected_listView->setObjectName(QString::fromUtf8("selected_listView"));
        selected_listView->setGeometry(QRect(230, 40, 256, 441));
        sorted_listView = new QListView(TripSelect);
        sorted_listView->setObjectName(QString::fromUtf8("sorted_listView"));
        sorted_listView->setGeometry(QRect(510, 40, 256, 441));
        add_combo = new QComboBox(TripSelect);
        add_combo->setObjectName(QString::fromUtf8("add_combo"));
        add_combo->setGeometry(QRect(10, 40, 201, 22));
        add_button = new QPushButton(TripSelect);
        add_button->setObjectName(QString::fromUtf8("add_button"));
        add_button->setGeometry(QRect(10, 80, 93, 28));
        select_done = new QPushButton(TripSelect);
        select_done->setObjectName(QString::fromUtf8("select_done"));
        select_done->setGeometry(QRect(260, 490, 201, 28));
        add_label = new QLabel(TripSelect);
        add_label->setObjectName(QString::fromUtf8("add_label"));
        add_label->setGeometry(QRect(10, 10, 121, 16));
        selected_label = new QLabel(TripSelect);
        selected_label->setObjectName(QString::fromUtf8("selected_label"));
        selected_label->setGeometry(QRect(230, 10, 121, 16));
        sorted_label = new QLabel(TripSelect);
        sorted_label->setObjectName(QString::fromUtf8("sorted_label"));
        sorted_label->setGeometry(QRect(510, 10, 131, 16));
        delete_combo = new QComboBox(TripSelect);
        delete_combo->setObjectName(QString::fromUtf8("delete_combo"));
        delete_combo->setGeometry(QRect(10, 160, 201, 22));
        delete_label = new QLabel(TripSelect);
        delete_label->setObjectName(QString::fromUtf8("delete_label"));
        delete_label->setGeometry(QRect(10, 130, 161, 16));
        delete_button = new QPushButton(TripSelect);
        delete_button->setObjectName(QString::fromUtf8("delete_button"));
        delete_button->setGeometry(QRect(10, 200, 93, 28));
        totDist_label = new QLabel(TripSelect);
        totDist_label->setObjectName(QString::fromUtf8("totDist_label"));
        totDist_label->setGeometry(QRect(520, 490, 91, 16));
        totDist_slot = new QLabel(TripSelect);
        totDist_slot->setObjectName(QString::fromUtf8("totDist_slot"));
        totDist_slot->setGeometry(QRect(630, 480, 101, 41));
        QFont font;
        font.setPointSize(10);
        totDist_slot->setFont(font);
        tripSelect_back = new QPushButton(TripSelect);
        tripSelect_back->setObjectName(QString::fromUtf8("tripSelect_back"));
        tripSelect_back->setGeometry(QRect(10, 490, 93, 28));
        stackedWidget->addWidget(TripSelect);
        FanOptions = new QWidget();
        FanOptions->setObjectName(QString::fromUtf8("FanOptions"));
        traversals_button = new QPushButton(FanOptions);
        traversals_button->setObjectName(QString::fromUtf8("traversals_button"));
        traversals_button->setGeometry(QRect(510, 50, 201, 91));
        custom_button = new QPushButton(FanOptions);
        custom_button->setObjectName(QString::fromUtf8("custom_button"));
        custom_button->setGeometry(QRect(20, 380, 201, 91));
        marlins_button = new QPushButton(FanOptions);
        marlins_button->setObjectName(QString::fromUtf8("marlins_button"));
        marlins_button->setGeometry(QRect(20, 270, 201, 91));
        dodgers_button = new QPushButton(FanOptions);
        dodgers_button->setObjectName(QString::fromUtf8("dodgers_button"));
        dodgers_button->setGeometry(QRect(20, 50, 201, 91));
        fan_label = new QLabel(FanOptions);
        fan_label->setObjectName(QString::fromUtf8("fan_label"));
        fan_label->setGeometry(QRect(20, 10, 121, 41));
        fan_label->setFont(font);
        startStadium_button = new QPushButton(FanOptions);
        startStadium_button->setObjectName(QString::fromUtf8("startStadium_button"));
        startStadium_button->setGeometry(QRect(20, 160, 201, 91));
        dodgers_text = new QPlainTextEdit(FanOptions);
        dodgers_text->setObjectName(QString::fromUtf8("dodgers_text"));
        dodgers_text->setGeometry(QRect(240, 50, 201, 91));
        start_text = new QPlainTextEdit(FanOptions);
        start_text->setObjectName(QString::fromUtf8("start_text"));
        start_text->setGeometry(QRect(240, 160, 201, 91));
        marlins_text = new QPlainTextEdit(FanOptions);
        marlins_text->setObjectName(QString::fromUtf8("marlins_text"));
        marlins_text->setGeometry(QRect(240, 270, 201, 91));
        custom_text = new QPlainTextEdit(FanOptions);
        custom_text->setObjectName(QString::fromUtf8("custom_text"));
        custom_text->setGeometry(QRect(240, 380, 201, 91));
        backtologin_2 = new QPushButton(FanOptions);
        backtologin_2->setObjectName(QString::fromUtf8("backtologin_2"));
        backtologin_2->setGeometry(QRect(560, 300, 112, 61));
        stackedWidget->addWidget(FanOptions);
        Souvenirtrip = new QWidget();
        Souvenirtrip->setObjectName(QString::fromUtf8("Souvenirtrip"));
        souvenirtable = new QTableWidget(Souvenirtrip);
        souvenirtable->setObjectName(QString::fromUtf8("souvenirtable"));
        souvenirtable->setGeometry(QRect(10, 20, 751, 341));
        calculatesouvbtn = new QPushButton(Souvenirtrip);
        calculatesouvbtn->setObjectName(QString::fromUtf8("calculatesouvbtn"));
        calculatesouvbtn->setGeometry(QRect(20, 390, 191, 32));
        clearsouvbtn = new QPushButton(Souvenirtrip);
        clearsouvbtn->setObjectName(QString::fromUtf8("clearsouvbtn"));
        clearsouvbtn->setGeometry(QRect(470, 390, 191, 32));
        backtotrip = new QPushButton(Souvenirtrip);
        backtotrip->setObjectName(QString::fromUtf8("backtotrip"));
        backtotrip->setGeometry(QRect(320, 450, 112, 32));
        label_2 = new QLabel(Souvenirtrip);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(240, 400, 91, 16));
        grandtotal = new QLabel(Souvenirtrip);
        grandtotal->setObjectName(QString::fromUtf8("grandtotal"));
        grandtotal->setGeometry(QRect(340, 400, 58, 16));
        stackedWidget->addWidget(Souvenirtrip);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(7);


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
        MSTbtn->setText(QCoreApplication::translate("MainWindow", "MST", nullptr));
        DFSbtn->setText(QCoreApplication::translate("MainWindow", "DFS", nullptr));
        BFSbtn->setText(QCoreApplication::translate("MainWindow", "BFS", nullptr));
        backtologin->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        loadDatabtn->setText(QCoreApplication::translate("MainWindow", "Load Data", nullptr));
        gotodisplaybtn->setText(QCoreApplication::translate("MainWindow", "Go to Display", nullptr));
        Souvenirbtn->setText(QCoreApplication::translate("MainWindow", "Souvenirs", nullptr));
        EditMlBbtn->setText(QCoreApplication::translate("MainWindow", "Edit MLB info", nullptr));
        backtopass->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
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
        backtoadmin->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        loadSouvenirInfo->setText(QCoreApplication::translate("MainWindow", "Load Souvenir Info", nullptr));
        loadTeamInfo->setText(QCoreApplication::translate("MainWindow", "Load MLB Info", nullptr));
        loadstadiumsbtn->setText(QCoreApplication::translate("MainWindow", "Load Stadiums", nullptr));
        Backtoadmin->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        BacktoAdmin->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        itemssouvlbl->setText(QCoreApplication::translate("MainWindow", "Items to add", nullptr));
        pricesouvlabel->setText(QCoreApplication::translate("MainWindow", "Price", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        Teamnamelbl->setText(QCoreApplication::translate("MainWindow", "Team", nullptr));
        itemnamelbl->setText(QCoreApplication::translate("MainWindow", "Item Name", nullptr));
        AddSouv->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Price", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        Editsouvbtn->setText(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        deleteSouvbtn->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        capacitylbl->setText(QCoreApplication::translate("MainWindow", "Capacity ", nullptr));
        stadiumnamelbl->setText(QCoreApplication::translate("MainWindow", "Stadium Name", nullptr));
        playingsurfacelbl->setText(QCoreApplication::translate("MainWindow", "Playing Surface", nullptr));
        rooftypelbl->setText(QCoreApplication::translate("MainWindow", "Roof Type", nullptr));
        ballparklbl->setText(QCoreApplication::translate("MainWindow", "BallPark Typo", nullptr));
        dateopenedlbl->setText(QCoreApplication::translate("MainWindow", "Date Opened", nullptr));
        ditancecenterlbl->setText(QCoreApplication::translate("MainWindow", "Distance to Center", nullptr));
        locationlbl->setText(QCoreApplication::translate("MainWindow", "Location", nullptr));
        teamlbl->setText(QString());
        leaguelbl->setText(QString());
        editstadium->setText(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        Backtoadmin_2->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        add_button->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        select_done->setText(QCoreApplication::translate("MainWindow", "Done", nullptr));
        add_label->setText(QCoreApplication::translate("MainWindow", "Avaliable Stadiums", nullptr));
        selected_label->setText(QCoreApplication::translate("MainWindow", "Selected Stadium", nullptr));
        sorted_label->setText(QCoreApplication::translate("MainWindow", "Sorted Stadium Trip", nullptr));
        delete_label->setText(QCoreApplication::translate("MainWindow", "Delete Selected Stadium?", nullptr));
        delete_button->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        totDist_label->setText(QCoreApplication::translate("MainWindow", "Total Distance:", nullptr));
        totDist_slot->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        tripSelect_back->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        traversals_button->setText(QCoreApplication::translate("MainWindow", "MST, DFS, BFS", nullptr));
        custom_button->setText(QCoreApplication::translate("MainWindow", "Custom", nullptr));
        marlins_button->setText(QCoreApplication::translate("MainWindow", "Marlins", nullptr));
        dodgers_button->setText(QCoreApplication::translate("MainWindow", "Dodgers", nullptr));
        fan_label->setText(QCoreApplication::translate("MainWindow", "Welcome, Fan", nullptr));
        startStadium_button->setText(QCoreApplication::translate("MainWindow", "Start + All Other", nullptr));
        backtologin_2->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        calculatesouvbtn->setText(QCoreApplication::translate("MainWindow", "Calculate", nullptr));
        clearsouvbtn->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        backtotrip->setText(QCoreApplication::translate("MainWindow", "Done", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Grand Total:", nullptr));
        grandtotal->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
