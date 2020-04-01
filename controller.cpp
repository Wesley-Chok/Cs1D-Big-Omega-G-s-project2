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
    loadteam();
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
     "SeatingCapacity            varchar(50) not null,                  "
     "Location                   varchar(50) not null,                  "
     "PlayingSurface             varchar(50) not null,                  "
     "League                     varchar(50) not null,                  "
     "DateOpened                 integer     not null,                  "
     "DistancetoCenter           integer     not null,                  "
     "BallparkTypology           varchar(50) not null,                  "
     "RoofType                   varchar(50) not null                   "
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

bool Controller::readTeamFile()
{
    QString file_name = QFileDialog::getOpenFileName(nullptr, "Open Record File",QDir::homePath());


    QFile file(file_name);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return false;
    QTextStream in(&file);
    while (!in.atEnd())
    {
        QString teamname = in.readLine();
        QString stadium = in.readLine();
        QString seatingcapacity = in.readLine();
        QString location = in.readLine();
        QString playingsurface = in.readLine();
        QString league = in.readLine();
        QString date = in.readLine();
        QString distancetocenter = in.readLine();
        QString ballparktypology = in.readLine();
        QString rooftype = in.readLine();

        createTeam(teamname,stadium,seatingcapacity,location,playingsurface,league,date,distancetocenter,ballparktypology,rooftype);
    }

    return true;
}

void Controller :: createTeam(QString teamname ,QString stadium, QString seatingcapacity,QString location ,QString playingsurface
                              , QString league, QString date ,QString distancetocenter, QString ballparktypology,QString rooftype)
{
    // Step 1
    // Creating an entry into database
    QSqlQuery qry;
    qry.prepare("insert into MLBINFO   (         "
                "TeamName,                       "
                "StadiumName,                    "
                "SeatingCapacity,                "
                "Location,                       "
                "PlayingSurface,                 "
                "League,                         "
                "DateOpened,                     "
                "DistancetoCenter,               "
                "BallparkTypology,               "
                "RoofType)                       "
                "values(?,?,?,?,?,?,?,?,?,?);    "
                );
    qry.addBindValue(teamname);
    qry.addBindValue(stadium);
    qry.addBindValue(seatingcapacity);
    qry.addBindValue(location);
    qry.addBindValue(playingsurface);
    qry.addBindValue(league);
    qry.addBindValue(date);
    qry.addBindValue(distancetocenter);
    qry.addBindValue(ballparktypology);
    qry.addBindValue(rooftype);

    if(!qry.exec())
    {
         qDebug() << "Error adding Team Info" << endl;
    }
    qry.clear();

    // Step 2
    // Creating an entry into local memory
    Team *entry = new Team();
    entry->setTeamName(teamname);
    entry->setStadiumName(stadium);
    entry->setSeatingCapacity(seatingcapacity);
    entry->setLocation(location);
    entry->setPlayingSurface(playingsurface);
    entry->setLeague(league);
    entry->setDateOpened(date);
    entry->setDTC(distancetocenter);
    entry->setBallparkTypology(ballparktypology);
    entry->setRoofType(rooftype);

    this->listOfTeams.append(entry);
}

QSqlQueryModel *Controller::getstadiumQueryModel()
{
    QSqlQueryModel* model = new QSqlQueryModel();

    QSqlQuery qry;
    qry.prepare("select TeamName, StadiumName from MLBINFO ORDER BY TeamName;");
    if(!qry.exec())
    {
        qDebug() <<"error Loading values to db" << endl;

    }

    model->setQuery(qry);

    return model;
}

QSqlQueryModel *Controller::getteamQueryModel(QString team)
{
    QSqlQueryModel* model = new QSqlQueryModel();

    QSqlQuery qry;
    qry.prepare("select * from MLBINFO WHERE TeamName = '"+team+"' ;");
    if(!qry.exec())
    {
        qDebug() <<"error Loading values to db" << endl;

    }

    model->setQuery(qry);

    return model;
}

void Controller::loadteam()
{
    QSqlTableModel model;
    model.setTable("MLBINFO");
    model.select();

    for(int index = 0; index < model.rowCount(); index++)
    {
        Team* entry = new Team();
        entry->setTeamName(model.record(index).value("TeamName").toString());
        entry->setStadiumName(model.record(index).value("StadiumName").toString());
        entry->setSeatingCapacity(model.record(index).value("SeatingCapacity").toString());
        entry->setLocation(model.record(index).value("Location").toString());
        entry->setPlayingSurface(model.record(index).value("PlayingSurface").toString());
        entry->setLeague(model.record(index).value("League").toString());
        entry->setDateOpened(model.record(index).value("DateOpened").toString());
        entry->setDTC(model.record(index).value("DistancetoCenter").toString());
        entry->setBallparkTypology(model.record(index).value("BallparkTypology").toString());
        entry->setRoofType(model.record(index).value("RoofType").toString());

        this->listOfTeams.append(entry);
    }
}
