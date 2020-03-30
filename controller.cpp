#include "controller.h"

Controller::Controller(QObject *parent) : QObject(parent)
{
    // Connecting to database
    m_database = QSqlDatabase::addDatabase("QSQLITE");
    QString path = QDir::homePath() + "/baseballp2.db";
    m_database.setDatabaseName(path);
    if(!m_database.open())
    {
        qDebug() << "problem opening database" << endl;
    }
    createTable();
}

Controller::Controller(Controller &controller)
    :Controller()
{
}
Controller::~Controller()
{
    m_database.close();

}

void Controller::createTable()
{
     QSqlQuery qry;

     //==============================================================
     // About creating the Information table
     QString createInfoTable =
     "create table IF NOT EXISTS MLBINFO(                               "
     "TeamName                   varchar(50) not null,                  "
     "StadiumName                varchar(50) not null,                  "
     "Location                   varchar(50) not null,                  "
     "PlayingSurface             varchar(50) not null,                  "
     "League                     varchar(50) not null,                  "
     "DateOpened                 integer     not null,                  "
     "DistancetoCenter           integer     not null,                  "
     "BallparkTypology           varchar(50) not null,                  "
     "RoofType                   varchar(50) not null,                  "
     "SeatingCapacity            varchar(50) not null                   "
     ");                                                          ";

     if(!qry.exec(createInfoTable))
     {
         qDebug() << "error creating Information table" << endl;
     }
     qry.clear();

    //==============================================================
    // About creating the College table
    QString createDistanceTable =
    "create table IF NOT EXISTS Distance(                         "
    "OrigStadium               varchar(50) not null,             "
    "DestinationStadium        varchar(50) not null,             "
    "Distance                  varchar(50) not null              "
    ");                                                          ";

    if(!qry.exec(createDistanceTable))
    {
        qDebug() << "error creating Distance table" << endl;
    }
    qry.clear();



    //==============================================================
    // About creating the admin table
    QString createAdminTable =
    "create table IF NOT EXISTS admin(                             "
    "username        varchar(50) primary key,                      "
    "password        varchar(50),                                  "
    "rank            integer                                       "
    ");                                                            ";

    if(!qry.exec(createAdminTable))
    {
        qDebug() << "error creating admin table" << endl;
    }
    qry.clear();

    qry.exec("insert into admin (username, password, rank) values ('admin' , 'admin', '2')");
    qry.exec("insert into admin (username, password, rank) values ('guest' , 'guest', '1')");


}
