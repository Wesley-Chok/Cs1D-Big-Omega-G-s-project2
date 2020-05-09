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


class Controller : public QObject
{
    Q_OBJECT
public:
    /** \fn Constructor
     * @param QObject *parent
     */
    explicit Controller(QObject *parent = nullptr);

    /** \fn Constructor
     * @param Controller@ controller
     */
    Controller(Controller& controller);

    /** \fn Destructor
     * @param no formal parameters
     */
    ~Controller();

    /** \fn createTable()
     * This function creates the team information, distance, souvenir and admin table. The tables are
     * created once the QSqlQuery qry function is executed. In order for the query to be executed,
     * a QString containing the necessary table information (e.g. column name, variable type, null type)
     * must be passed through the .exec() query function.
     * @param no formal parameters
     * @return nothing returned
     */
    void createTable();

    /** \fn readTeamFile()
     * This function will read in the team information from a specific user .txt file. To allow the admin
     * to access the .txt file, QString file_name is set equal to the function getOpenFileName(). Thus, the
     * QFile variable file opens the .txt file and the QTextStream file in is used to read the file. Lastly,
     * the function readLine() is used to read the .txt file line by line and the function createTeam() is called
     * @param no formal parameters
     * @return nothing returned
     */
    bool readTeamFile();

    /** \fn readSouvenirFile()
     * This function will read in the souvenir information from a specific user .txt file. To allow the admin
     * to access the .txt file, QString file_name is set equal to the function getOpenFileName(). Thus, the
     * QFile variable file opens the .txt file and the QTextStream file in is used to read the file. Lastly,
     * the function readLine() is used to read the .txt file line by line and the function createSouvenir() is called
     * @param no formal parameters
     * @return true
     */
    bool readSouvenirFile();

    /** \fn readStadiumsFile()
     * This function will read in the stadium information from a specific user .txt file. To allow the admin
     * to access the .txt file, QString file_name is set equal to the function getOpenFileName(). Thus, the
     * QFile variable file opens the .txt file and the QTextStream file in is used to read the file. Lastly,
     * the function readLine() is used to read the .txt file line by line and the function createstadiumdis() is called
     * @param no formal parameters
     * @return true
     */
    bool readStadiumsFile();

    /** \fn loadteam()
     * This function loads in all of the existing team entries using the QSqlTableModel model and the Team
     * class object entry.
     * @param no formal parameters
     * @return nothing returned
     */
    void loadteam();

    /** \fn loadStadiums()
     * This function loads in all of the existing team entries using the QSqlTableModel model and the stadiumdis
     * class object entry.
     * @param no formal parameters
     * @return nothing returned
     */
    void loadStadiums();

    /** \fn loadSouvenirs()
     * This function loads in all of the existing team entries using the QSqlTableModel model and the Souvenirs
     * class object entry.
     * @param no formal parameters
     * @return nothing returned
     */
    void loadSouvenirs();

    /** \fn updateSouvenir()
     * This function will update the previous souvenir information with the new souvenir information using
     * QSqlQuery qry.
     * @param QString item
     * @param QString team
     * @param QString price
     * @return nothing returned
     */
    void updateSouvenir(QString item, QString team, QString price);

    /** \fn deleteSouvenir()
     * This function will delete the previous souvenir information using QSqlQuery qry.
     * @param QString item
     * @param QString team
     * @return nothing returned
     */
    void deleteSouvenir(QString item,QString team);

    /** \fn createTeam()
     * This function adds the team information, read from the function readTeamFile(), into the table created
     * in the function createTable(). The function first creates an entry into the database using the QSqlQuery
     * variable qry. The functions prepare() and addBindValue are used in order to do this. After this, the function
     * then creates an entry into the local memory using the class object in Team. The class object then points
     * to their respective function (e.g. entry->setTeamName(teamname)).
     * @param QString teamname
     * @param QString stadium
     * @param QString seatingcapacity
     * @param QString location
     * @param QString playingsurface
     * @param QString league
     * @param QString date
     * @param QString distancetocenter
     * @param QString ballparktypology
     * @param QString rooftype
     * @return nothing returned
     */
    void createTeam(QString teamname ,QString stadium, QString seatingcapacity,QString location ,QString playingsurface
               ,QString league, QString date ,QString distancetocenter, QString ballparktypology,QString rooftype);

    /** \fn createSouvenir()
     * This function adds the souvenir information, read from the function readSouvenirFile(), into the table created
     * in the function createTable(). The function first creates an entry into the database using the QSqlQuery
     * variable qry. The functions prepare() and addBindValue are used in order to do this. After this, the function
     * then creates an entry into the local memory using the class object in Souvenir. The class object then points
     * to their respective function (e.g. entry->setTeam(teamname)).
     * @param QString teamname
     * @param QString item
     * @param QString price
     * @return nothing returned
     */
    void createSouvenir(QString teamname ,QString item, QString price);

    /** \fn createstadiumdis()
     * This function adds the stadium information, read from the function readStadiums(), into the table created
     * in the function createTable(). The function first creates an entry into the database using the QSqlQuery
     * variable qry. The functions prepare() and addBindValue are used in order to do this. After this, the function
     * then creates an entry into the local memory using the class object in stadiumdis. The class object then points
     * to their respective function (e.g. entry->setStadium1(stadium1)).
     * @param QString stadium1
     * @param QString stadium2
     * @param QString distance
     * @return nothing returned
     */
    void createstadiumdis(QString stadium1 ,QString stadium2, QString distance);

    /** \fn updateMlb()
     * This function updates the major league baseball team's information using QSqlQuery qry. In order to
     * do this, the functions prepare() and addBindValue() are used.
     * @param QString team
     * @param QString stadium
     * @param QString capacity
     * @param QString location
     * @param QStirng surface
     * @param QString league
     * @param QString date
     * @param QString dtc
     * @param QString typo
     * @param QString roof
     * @return nothing returned
     */
    void updateMlb(QString team, QString stadium, QString capacity,QString location, QString surface,
                               QString league,QString date,QString dtc, QString typo,QString roof);

    /** \fn getstadiumQueryModelsortedbyteam()
     * This function will get the stadium name sorted by teams from the database using the QSqlQuery model
     * and QSqlQuery qry. The SELECT, FROM and ORDER BY SQL functions will be used to search for the values. If the values
     * are not present in the database, then an error message will appear
     * @param no formal parameters
     * @return nothing returned
     */
    QSqlQueryModel *getstadiumQueryModelsortedbyteam();

    /** \fn getteamQueryModel()
     * This function will get the team name query using QSqlQueryModel model and QSqlQuery qry. The SELECT,
     * FROM and WHERE will be used to search for the values. If the values are not present in the database,
     * then an error message will appear
     * @param QString team
     * @return nothing returned
     */
    QSqlQueryModel *getteamQueryModel(QString team);

    /** \fn getstadiumQueryModelsortedbystadium()
     * This function will get the stadium name sorted by stadiums from the database using the QSqlQuery model
     * and QSqlQuery qry. The SELECT, FROM and ORDER BY SQL functions will be used to search for the values. If the values
     * are not present in the database, then an error message will appear
     * @param no formal parameters
     * @return nothing returned
     */
    QSqlQueryModel *getstadiumQueryModelsortedbystadium();

    /** \fn getAmericanLeagueTeams()
     * This function will get the american league teams from the database using the QSqlQuery model
     * and QSqlQuery qry. The SELECT, FROM and WHERE SQL functions will be used to search for the values. If the values
     * are not present in the database, then an error message will appear
     * @param no formal parameters
     * @return nothing returned
     */
    QSqlQueryModel *getAmericanLeagueTeams();

    /** \fn getNationalLeagueTeams()
     * This function will get the national league teams from the database using the QSqlQuery model
     * and QSqlQuery qry. The SELECT, FROM and WHERE SQL functions will be used to search for the values. If the values
     * are not present in the database, then an error message will appear
     * @param no formal parameters
     * @return nothing returned
     */
    QSqlQueryModel *getNationalLeagueTeams();

    /** \fn getStadiumQueryModelsortedbyTypology()
     * This function will get the stadium queries sorted by typology from the database using the QSqlQuery model
     * and QSqlQuery qry. The SELECT, FROM and ORDER BY SQL functions will be used to search for the values. If the values
     * are not present in the database, then an error message will appear
     * @param no formal parameters
     * @return nothing returned
     */
    QSqlQueryModel *getStadiumQueryModelsortedbyTypology();

    /** \fn getTeamswithopenroofquerymodel()
     * This function will get the teams with an open roof stadium from the database using the QSqlQuery model
     * and QSqlQuery qry. The SELECT, FROM and WHERE SQL functions will be used to search for the values. If the values
     * are not present in the database, then an error message will appear
     * @param no formal parameters
     * @return nothing returned
     */
    QSqlQueryModel *getTeamswithopenroofquerymodel();

    /** \fn getStadiumQueryModelsortedbydate()
     * This function will get the stadium queries sorted by date from the database using the QSqlQuery model
     * and QSqlQuery qry. The SELECT, FROM and WHERE SQL functions will be used to search for the values. If the values
     * are not present in the database, then an error message will appear
     * @param no formal parameters
     * @return nothing returned
     */
    QSqlQueryModel *getStadiumQueryModelsortedbydate();

    /** \fn getStadiumQueryModelsortedbycapacity()
     * This function will get the stadium queries sorted by capacity from the database using the QSqlQuery model
     * and QSqlQuery qry. The SELECT, FROM and WHERE SQL functions will be used to search for the values. If the values
     * are not present in the database, then an error message will appear
     * @param no formal parameters
     * @return nothing returned
     */
    QSqlQueryModel *getStadiumQueryModelsortedbycapacity();

    /** \fn getStadiumQueryModelsortedbydistancetocenterLAR()
     * This function will get the stadium queries sorted by the largest distance to center from the database using the QSqlQuery model
     * and QSqlQuery qry. The SELECT, FROM and WHERE SQL functions will be used to search for the values. If the values
     * are not present in the database, then an error message will appear
     * @param no formal parameters
     * @return nothing returned
     */
    QSqlQueryModel *getStadiumQueryModelsortedbydistancetocenterLAR();

    /** \fn getStadiumQueryModelsortedbydistancetocentersma()
     * This function will get the stadium queries sorted by the smallest distance to center from the database using the QSqlQuery model
     * and QSqlQuery qry. The SELECT, FROM and WHERE SQL functions will be used to search for the values. If the values
     * are not present in the database, then an error message will appear
     * @param no formal parameters
     * @return nothing returned
     */
    QSqlQueryModel *getStadiumQueryModelsortedbydistancetocentersma();

    /** \fn getSouvenirQueryModel()
     * This function will get the souvenir name queries using QSqlQueryModel model and QSqlQuery qry. The SELECT,
     * FROM and WHERE will be used to search for the values. If the values are not present in the database,
     * then an error message will appear
     * @param no formal parameters
     * @return nothing returned
     */
    QSqlQueryModel *getSouvenirQueryModel(QString team);

    /** \fn getAllSouvenirQueryModel()
     * This function will get all the souvenir name queries using QSqlQueryModel model and QSqlQuery qry. The SELECT,
     * FROM and WHERE will be used to search for the values. If the values are not present in the database,
     * then an error message will appear
     * @param no formal parameters
     * @return nothing returned
     */
    QSqlQueryModel *getAllSouvenirQueryModel();

    /** \fn getMlbinfoQueryModel()
     * This function will get the mlb information queries using QSqlQueryModel model and QSqlQuery qry. The SELECT,
     * FROM and WHERE will be used to search for the values. If the values are not present in the database,
     * then an error message will appear
     * @param QString stadium
     * @return nothing returned
     */
    QSqlQueryModel *getMlbinfoQueryModel(QString stadium);

    /** \fn GetDistBtwnStadium()
     * This function will return the distance between two selected stadiums. The QSqlQuery qry is used to
     * search for the distance and the QString sQry holds the SQL function, SELECT, FROM and WHERE, for the function qry.prepare().
     * @param QString start
     * @param QString end
     * @return int distBtwn
     */
    int GetDistBtwnStadium(QString start, QString end);

    /** \fn CheckEdge()
     * This function will check the edges between the original stadium and destination stadium. The QSqlQuery qry is used to
     * to check this where the SELECT, FROM and WHERE functions are used to find the distances for the edges.
     * @param QString start
     * @param QString end
     * @return bool present
     */
    bool CheckEdge(QString start, QString end);

    //NEW DANIEL STUFF START

    /** \fn loadStadiumNames()
     * This function loads in all of the existing stadium name entries using the QSqlQueryModel model and the
     * QSqlQuery qry. If the value is not present in the database, then an error message will appear
     * @param no formal parameters
     * @return nothing returned
     */
    QSqlQueryModel *loadStadiumNames();

    /** \fn loadRemainingStadiumNamesOnly()
     * This function loads in all of the remaining stadium name entries using the QSqlQueryModel model and the
     * QSqlQuery qry. If the value is not present in the database, then an error message will appear
     * @param no formal parameters
     * @return nothing returned
     */
    QSqlQueryModel *loadRemainingStadiumNamesOnly(QVector<QString> selectedStadiums);
//    QSqlQueryModel *loadSelectedStadiumNamesOnly(QVector<QString> selectedStadiums);
    //NEW DANIEL STUFF END


        QList <Team*>  listOfTeams;
        QList <Souvenir*>  listOfSouvenirs;
        QList <stadiumdis*>  listOfStadiums;

private:
        QSqlDatabase      m_database;


};

#endif // CONTROLLER_H
