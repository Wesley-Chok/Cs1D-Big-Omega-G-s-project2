#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QMainWindow>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlQuery>
#include <QSqlError>
#include <QtDebug>
#include <QMessageBox>
#include <QKeyEvent>
#include <QFileDialog>
#include<QItemDelegate>
#include<QSpinBox>
#include<QSize>
#include<QTableWidgetItem>
#include "team.h"



class Controller : public QObject
{
    Q_OBJECT
public:
    explicit Controller(QObject *parent = nullptr);

    Controller(Controller& controller);
    ~Controller();

    void createTable();
    bool readTeamFile();
    void createTeam(QString teamname ,QString stadium, QString seatingcapacity,QString location ,QString playingsurface
               ,QString league, QString date ,QString distancetocenter, QString ballparktypology,QString rooftype);
    QSqlQueryModel *getstadiumQueryModel();
    QSqlQueryModel *getteamQueryModel(QString team);
    void loadteam();


        QList <Team*>  listOfTeams;
private:
        QSqlDatabase      m_database;


};

#endif // CONTROLLER_H
