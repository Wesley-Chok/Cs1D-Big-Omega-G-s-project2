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

//Daniel's Additions Start
enum stadiums
{
    ChaseField,
    SunTrustPark,
    OriolePark,
    FenwayPark,
    WrigleyField,
    GuaranteedRateField,
    GreatAmericanBall,
    ProgressiveField,
    CoorsField,
    ComericaPark,
    MinuteMaidPark,
    KauffmanStadium,
    AngelStadium,
    DodgerStadium,
    MarlinsPark,
    MillerPark,
    TargetField,
    CitiField,
    YankeeStadium,
    OaklandAlamedaCountyColiseum,
    CitizensBankPark,
    PNCPark,
    PetcoPark,
    ATTPark,
    SafecoField,
    BuschStadium,
    TropicanaField,
    GlobeLifePark,
    RogersCentre,
    NationalsPark,
    LasVegasStadium,
    EMPTY
};

QString getStadiumName(stadiums stadium);

stadiums getEnum(QString stadium);
//Daniel's Additions End

class Controller
{
public:
    Controller();
    ~Controller();

    void createTable();
    bool readTeamFile();
    bool readSouvenirFile();
    bool readStadiumsFile();
    void loadteam();
    void loadStadiums();
    void loadSouvenirs();
    void createTeam(QString teamname ,QString stadium, QString seatingcapacity,QString location ,QString playingsurface
               ,QString league, QString date ,QString distancetocenter, QString ballparktypology,QString rooftype);
    void createSouvenir(QString teamname ,QString item, QString price);
    void createstadiumdis(QString stadium1 ,QString stadium2, QString distance);

    QSqlQueryModel *getstadiumQueryModelsortedbyteam();
    QSqlQueryModel *getteamQueryModel(QString team);
    QSqlQueryModel *getstadiumQueryModelsortedbystadium();
    QSqlQueryModel *getAmericanLeagueTeams();
    QSqlQueryModel *getNationalLeagueTeams();
    QSqlQueryModel *getStadiumQueryModelsortedbyTypology();
    QSqlQueryModel *getTeamswithopenroofquerymodel();
    QSqlQueryModel *getStadiumQueryModelsortedbydate();
    QSqlQueryModel *getStadiumQueryModelsortedbycapacity();
    QSqlQueryModel *getStadiumQueryModelsortedbydistancetocenterLAR();
    QSqlQueryModel *getStadiumQueryModelsortedbydistancetocentersma();

    //Daniel's Additions Start
    int GetDistBtwnStadium(QString start, QString end);
    bool CheckEdge(QString start, QString end);
    //Daniel's Additions End

        QList <Team*>  listOfTeams;
        QList <Souvenir*>  listOfSouvenirs;
        QList <stadiumdis*>  listOfStadiums;

private:
        QSqlDatabase      m_database;

};

#endif // CONTROLLER_H
