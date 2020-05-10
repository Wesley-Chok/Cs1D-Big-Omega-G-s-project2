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
    loadSouvenirs();
    loadpass();
}

Controller::Controller(Controller &controller)
    :Controller()
{
}
Controller::~Controller()
{
    m_database.close();

}
void Controller::loadpass()
{
    QSqlTableModel model;
    model.setTable("admin");
    model.select();

    for(int index = 0; index < model.rowCount(); index++)
    {
        QString entry;
        int key;
        entry = model.record(index).value("username").toString();
        entry = model.record(index).value("password").toString();
        key= model.record(index).value("rank").toInt();

        this->pass.insertItem(entry,key);
        qDebug () << entry;
    }


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
    // About creating the Distance table
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
    // About creating the Souvenir table
    QString createSouvenirTable =
    "create table IF NOT EXISTS Souvenir(                         "
    "TeamName               varchar(50) not null,             "
    "Souvenir               varchar(50) not null,             "
    "Price                  varchar(50) not null              "
    ");                                                          ";

    if(!qry.exec(createSouvenirTable))
    {
        qDebug() << "error creating Souvenir table" << endl;
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

    qry.exec("insert into admin (username, password, rank) values ('admin' , 'admin', '1')");
    qry.exec("insert into admin (username, password, rank) values ('guest' , 'guest', '0')");


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

bool Controller::readSouvenirFile()
{
    QString file_name = QFileDialog::getOpenFileName(nullptr, "Open Record File",QDir::homePath());


    QFile file(file_name);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return false;
    QTextStream in(&file);
    while (!in.atEnd())
    {
        QString teamname = in.readLine();
        QString item = in.readLine();
        QString price = in.readLine();

        createSouvenir(teamname,item,price);
    }

    return true;
}
bool Controller::readStadiumsFile()
{
    QString file_name = QFileDialog::getOpenFileName(nullptr, "Open Record File",QDir::homePath());


    QFile file(file_name);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return false;
    QTextStream in(&file);
    while (!in.atEnd())
    {
        QString stadium1 = in.readLine();
        QString stadium2 = in.readLine();
        QString distance = in.readLine();

        createstadiumdis(stadium1,stadium2,distance);
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

QSqlQueryModel *Controller::getstadiumQueryModelsortedbyteam()
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

QSqlQueryModel *Controller::getstadiumQueryModelsortedbystadium()
{
    QSqlQueryModel* model = new QSqlQueryModel();

    QSqlQuery qry;
    qry.prepare("select TeamName, StadiumName from MLBINFO ORDER BY StadiumName;");
    if(!qry.exec())
    {
        qDebug() <<"error Loading values to db" << endl;

    }

    model->setQuery(qry);

    return model;
}
QSqlQueryModel *Controller::getAmericanLeagueTeams()
{
    QSqlQueryModel* model = new QSqlQueryModel();

    QSqlQuery qry;
    qry.prepare("select TeamName, StadiumName from MLBINFO WHERE League = 'American' ORDER BY TeamName;");
    if(!qry.exec())
    {
        qDebug() <<"error Loading values to db" << endl;

    }

    model->setQuery(qry);

    return model;
}

QSqlQueryModel *Controller::getNationalLeagueTeams()
{
    QSqlQueryModel* model = new QSqlQueryModel();

    QSqlQuery qry;
    qry.prepare("select TeamName, StadiumName from MLBINFO WHERE League = 'National' ORDER BY StadiumName;");
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

QSqlQueryModel *Controller::getStadiumQueryModelsortedbyTypology()
{
    QSqlQueryModel* model = new QSqlQueryModel();

    QSqlQuery qry;
    qry.prepare("select StadiumName, TeamName, BallparkTypology from MLBINFO ORDER BY BallparkTypology;");
    if(!qry.exec())
    {
        qDebug() <<"error Loading values to db" << endl;

    }

    model->setQuery(qry);

    return model;
}

QSqlQueryModel *Controller::getStadiumQueryModelsortedbydate()
{
    QSqlQueryModel* model = new QSqlQueryModel();

    QSqlQuery qry;
    qry.prepare("select StadiumName, TeamName, DateOpened from MLBINFO ORDER BY DateOpened;");
    if(!qry.exec())
    {
        qDebug() <<"error Loading values to db" << endl;

    }

    model->setQuery(qry);

    return model;
}

QSqlQueryModel *Controller::getStadiumQueryModelsortedbycapacity()
{
    QSqlQueryModel* model = new QSqlQueryModel();

    QSqlQuery qry;
    qry.prepare("select StadiumName, TeamName, SeatingCapacity from MLBINFO ORDER BY SeatingCapacity;");
    if(!qry.exec())
    {
        qDebug() <<"error Loading values to db" << endl;

    }

    model->setQuery(qry);

    return model;
}

QSqlQueryModel *Controller::getStadiumQueryModelsortedbydistancetocenterLAR()
{
    QSqlQueryModel* model = new QSqlQueryModel();

    QSqlQuery qry;
    qry.prepare("select StadiumName, TeamName, DistancetoCenter from MLBINFO WHERE DistancetoCenter >= 400;");
    if(!qry.exec())
    {
        qDebug() <<"error Loading values to db" << endl;

    }

    model->setQuery(qry);

    return model;
}

QSqlQueryModel *Controller::getStadiumQueryModelsortedbydistancetocentersma()
{
    QSqlQueryModel* model = new QSqlQueryModel();

    QSqlQuery qry;
    qry.prepare("select StadiumName, TeamName, DistancetoCenter from MLBINFO WHERE DistancetoCenter < 400;");
    if(!qry.exec())
    {
        qDebug() <<"error Loading values to db" << endl;

    }

    model->setQuery(qry);

    return model;
}
QSqlQueryModel *Controller::getTeamswithopenroofquerymodel()
{
    QSqlQueryModel* model = new QSqlQueryModel();

    QSqlQuery qry;
    qry.prepare("select TeamName, RoofType from MLBINFO WHERE RoofType = 'Open' ORDER BY TeamName;");
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
void Controller :: createSouvenir(QString teamname ,QString item, QString price)
{
    // Step 1
    // Creating an entry into database
    QSqlQuery qry;
    qry.prepare("insert into Souvenir(     "
                "TeamName,                    "
                "Souvenir,                    "
                "Price)                       "
                "values(?,?,?);               "
                );
    qry.addBindValue(teamname);
    qry.addBindValue(item);
    qry.addBindValue(price);


    if(!qry.exec())
    {
         qDebug() << "Error adding Souvenir Info" << endl;
    }
    qry.clear();

    // Step 2
    // Creating an entry into local memory
    Souvenir *entry = new Souvenir();
    entry->setTeam(teamname);
    entry->setItem(item);
    entry->setPrice(price);

    this->listOfSouvenirs.append(entry);
}

void Controller::loadSouvenirs()
{
    QSqlTableModel model;
    model.setTable("Souvenir");
    model.select();

    for(int index = 0; index < model.rowCount(); index++)
    {
        Souvenir* entry = new Souvenir();
        entry->setTeam(model.record(index).value("TeamName").toString());
        entry->setItem(model.record(index).value("Souvenir").toString());
        entry->setPrice(model.record(index).value("Price").toString());

        this->listOfSouvenirs.append(entry);
    }
}
void Controller :: createstadiumdis(QString stadium1 ,QString stadium2, QString distance)
{
    // Step 1
    // Creating an entry into database
    QSqlQuery qry;
    qry.prepare("insert into Distance(     "
                "OrigStadium,                    "
                "DestinationStadium,             "
                "Distance)                       "
                "values(?,?,?);                  "
                );
    qry.addBindValue(stadium1);
    qry.addBindValue(stadium2);
    qry.addBindValue(distance);


    if(!qry.exec())
    {
         qDebug() << "Error adding Distance Info" << endl;
    }
    qry.clear();

    // Step 2
    // Creating an entry into local memory
    stadiumdis *entry = new stadiumdis();
    entry->setStadium1(stadium1);
    entry->setStadium2(stadium2);
    entry->setDistance(distance);

    this->listOfStadiums.append(entry);
}

void Controller::loadStadiums()
{
    QSqlTableModel model;
    model.setTable("Distance");
    model.select();

    for(int index = 0; index < model.rowCount(); index++)
    {
        stadiumdis *entry = new stadiumdis();
        entry->setStadium1(model.record(index).value("OrigStadium").toString());
        entry->setStadium2(model.record(index).value("DestinationStadium").toString());
        entry->setDistance(model.record(index).value("Distance").toString());

        this->listOfStadiums.append(entry);
    }
}

void Controller::updateSouvenir(QString item, QString team, QString price)
{
    QSqlQuery qry;
    qry.prepare("update Souvenir set      "
                "TeamName            = ?, "
                "Souvenir            = ?, "
                "Price               = ?  "
                "where Souvenir      = ?  "
                "AND TeamName        = ?;  "
                     );

    qry.addBindValue(team);
    qry.addBindValue(item);
    qry.addBindValue(price);
    qry.addBindValue(item);
    qry.addBindValue(team);

    if(!qry.exec())
    {
        //qDebug() <<"error updating values to db" << endl;
        qDebug() << qry.lastError().text() << endl;
    }
    qry.clear();

    int index;
    for(index = 0; index < this->listOfSouvenirs.count(); index++)
    {
        if(this->listOfSouvenirs[index]->item() == item)
        {
            this->listOfSouvenirs[index]->setPrice(price);
            break;
        }
    }

}
void Controller::deleteSouvenir(QString item, QString team)
{
    // Step 1
    // Deleting entry from database
    QSqlQuery qry;
    qry.prepare("delete from Souvenir where Souvenir = ? AND TeamName = ?;");
    qry.addBindValue(item);
    qry.addBindValue(team);
    if(!qry.exec())
    {
        qDebug() <<"error deleting values to db" << endl;
    }

    // Step 2
    // Deleting entry from souvenirs list
    int index;
    for(index = 0; index < this->listOfSouvenirs.count(); index++)
    {
        if(this->listOfSouvenirs[index]->item() == item)
            break;
    }
    this->listOfSouvenirs.removeAt(index);
}

QSqlQueryModel *Controller::getSouvenirQueryModel(QString team)
{
    QSqlQueryModel* model = new QSqlQueryModel();

    QSqlQuery qry;
    qry.prepare("select Souvenir, Price from Souvenir WHERE TeamName = '"+team+"' ;");
    if(!qry.exec())
    {
        qDebug() <<"error Loading values to db" << endl;

    }

    model->setQuery(qry);

    return model;
}
QSqlQueryModel *Controller::getAllSouvenirQueryModel()
{
    QSqlQueryModel* model = new QSqlQueryModel();

    QSqlQuery qry;
    qry.prepare("select Souvenir, Price from Souvenir;");
    if(!qry.exec())
    {
        qDebug() <<"error Loading values to db" << endl;

    }

    model->setQuery(qry);

    return model;
}

QSqlQueryModel *Controller::getMlbinfoQueryModel(QString stadium)
{
    QSqlQueryModel* model = new QSqlQueryModel();

    QSqlQuery qry;
    qry.prepare("select * from MLBINFO WHERE TeamName = '"+stadium+"' ;");
    if(!qry.exec())
    {
        qDebug() <<"error Loading values to db" << endl;

    }

    model->setQuery(qry);

    return model;
}

void Controller::updateMlb(QString team, QString stadium, QString capacity,QString location, QString surface,
                           QString league,QString date,QString dtc, QString typo,QString roof,
                           QString prevstadium)
{
    QSqlQuery qry;
    qry.prepare("update MLBINFO set            "
                "TeamName                 = ?, "
                "StadiumName              = ?, "
                "SeatingCapacity          = ?,  "
                "Location                 = ?,  "
                "PlayingSurface           = ?,  "
                "League                   = ?,  "
                "DateOpened               = ?,  "
                "DistancetoCenter         = ?,  "
                "BallparkTypology         = ?,  "
                "RoofType                 = ?  "
                "where TeamName      = ?;  "
                     );

    qry.addBindValue(team);
    qry.addBindValue(stadium);
    qry.addBindValue(capacity);
    qry.addBindValue(location);
    qry.addBindValue(surface);
    qry.addBindValue(league);
    qry.addBindValue(date);
    qry.addBindValue(dtc);
    qry.addBindValue(typo);
    qry.addBindValue(roof);
    qry.addBindValue(team);



    if(!qry.exec())
    {
        //qDebug() <<"error updating values to db" << endl;
        qDebug() << qry.lastError().text() << endl;
    }
    qry.clear();

    if(stadium != prevstadium)
    {
        qry.prepare("update Distance set             "
                    "OrigStadium                 = ? "
                    "where OrigStadium      =     ?; "
                         );

        qry.addBindValue(stadium);
        qry.addBindValue(prevstadium);

        if(!qry.exec())
        {
            //qDebug() <<"error updating values to db" << endl;
            qDebug() << qry.lastError().text() << endl;
        }
        qry.clear();

        qry.prepare("update Distance set             "
                    "DestinationStadium                 = ? "
                    "where DestinationStadium      =     ?; "
                         );

        qry.addBindValue(stadium);
        qry.addBindValue(prevstadium);

        if(!qry.exec())
        {
            //qDebug() <<"error updating values to db" << endl;
            qDebug() << qry.lastError().text() << endl;
        }
        qry.clear();
    }


    int index;
    for(index = 0; index < this->listOfTeams.count(); index++)
    {
        if(this->listOfTeams[index]->getTeamName() == team)
        {
            this->listOfTeams[index]->setSeatingCapacity(capacity);
            this->listOfTeams[index]->setLocation(location);
            this->listOfTeams[index]->setPlayingSurface(surface);
            this->listOfTeams[index]->setDateOpened(date);
            this->listOfTeams[index]->setDTC(dtc);
            this->listOfTeams[index]->setBallparkTypology(typo);
            this->listOfTeams[index]->setRoofType(roof);
            this->listOfTeams[index]->setStadiumName(stadium);
            break;
        }
    }

}

//Daniel's Additions Start
int Controller::GetDistBtwnStadium(QString start, QString end)
{
    int distBtwn = 0;
    QSqlQuery qry;
    QString sQry = "select distance from Distance where OrigStadium = '" + start + "' and DestinationStadium = '" + end + "';";
    qry.prepare(sQry);
    qry.exec();

    if(qry.next())
    {
        distBtwn = qry.value(0).toInt();
    }

    return distBtwn;
}

bool Controller::CheckEdge(QString start, QString end)
{
    bool present = false;
    QSqlQuery qry;
    qry.prepare("select * from Distance where OrigStadium = '" + start + "' and DestinationStadium = '" + end + "';");

    if(qry.exec())
    {
        present = qry.next();
    }
    return present;
}

//NEW DANIEL STUFF START

QSqlQueryModel* Controller::loadStadiumNames()
{
    QSqlQueryModel *model = new QSqlQueryModel();

    QString sQry = "select StadiumName from MLBINFO;";

    QSqlQuery qry;
    qry.prepare(sQry);

    if(!qry.exec())
    {
        qDebug() << "\nError Loading Stadiums\n";
    }

    model->setQuery(qry);
    return model;
}

QSqlQueryModel* Controller::loadRemainingStadiumNamesOnly(QVector<QString> selectedStadiums)
{
    QSqlQueryModel *model = new QSqlQueryModel();

    QString* p = selectedStadiums.begin();
    QString sQry = "select StadiumName from MLBINFO where not StadiumName = '" + *p + "'";
    p++;
    while(p != selectedStadiums.end())
    {
        sQry += " and not StadiumName = '" + *p + "'";
        p++;
    }
    sQry += ";";

    QSqlQuery qry;
    qry.prepare(sQry);

    if(!qry.exec())
    {
        qDebug() << "\nError Loading Stadiums\n";
    }

    model->setQuery(qry);
    return model;
}

//QSqlQueryModel* Controller::loadSelectedStadiumNamesOnly(QVector<QString> selectedStadiums)
//{
//    QSqlQueryModel *model = new QSqlQueryModel();

//    QString* p = selectedStadiums.begin();
//    QString sQry = "select StadiumName from MLBINFO where StadiumName = '" + *p + "'";
//    p++;
//    while(p != selectedStadiums.end())
//    {
//        sQry += " and StadiumName = '" + *p + "'";
//    }
//    sQry += ";";

//    QSqlQuery qry;
//    qry.prepare(sQry);

//    if(!qry.exec())
//    {
//        qDebug() << "\nError Loading Stadiums\n";
//    }

//    model->setQuery(qry);
//    return model;
//}

int Controller::getStadiumCount()
{
    int stadiumCount = 0;
    QString sQry = "select count(StadiumName) from MLBINFO;";

    QSqlQuery qry;
    qry.prepare(sQry);
    qry.exec();

    if(qry.next())
    {
        stadiumCount = qry.value(0).toInt();
    }

    return stadiumCount;
}
//NEW DANIEL STUFF END

QString getStadiumName(stadiums stadium)
{
    QString str = "";
    switch(stadium)
    {
    case ChaseField: str = "Chase Field";
        break;
    case SunTrustPark: str = "Sun Trust Park";
        break;
    case OriolePark: str = "Oriole Park at Camden Yards";
        break;
    case FenwayPark: str = "Fenway Park";
        break;
    case WrigleyField: str = "Wrigley Field";
        break;
    case GuaranteedRateField: str = "Guaranteed Rate Field";
        break;
    case GreatAmericanBall: str = "Great American Ball Park";
        break;
    case ProgressiveField: str = "Progressive Field";
        break;
    case CoorsField: str = "Coors Field";
        break;
    case ComericaPark: str = "Comerica Park";
        break;
    case MinuteMaidPark: str = "Minute Maid Park";
        break;
    case KauffmanStadium: str = "Kauffman Stadium";
        break;
    case AngelStadium: str = "Angel Stadium";
        break;
    case DodgerStadium: str = "Dodger Stadium";
        break;
    case MarlinsPark: str = "Marlins Park";
        break;
    case MillerPark: str = "Miller Park";
        break;
    case TargetField: str = "Target Field";
        break;
    case CitiField: str = "Citi Field";
        break;
    case YankeeStadium: str = "Yankee Stadium";
        break;
    case OaklandAlamedaCountyColiseum: str = "Oakland Alameda County Coliseum";
        break;
    case CitizensBankPark: str = "Citizens Bank Park";
        break;
    case PNCPark: str = "PNC Park";
        break;
    case PetcoPark: str = "Petco Park";
        break;
    case OrcalePark: str = "Orcale Park";
        break;
    case SafecoField: str = "Safeco Field";
        break;
    case BuschStadium: str = "Busch Stadium";
        break;
    case TropicanaField: str = "Tropicana Field";
        break;
    case GlobeLifePark: str = "Globe Life Park in Arlington";
        break;
    case RogersCentre: str = "Rogers Centre";
        break;
    case NationalsPark: str = "Nationals Park";
        break;
    case LasVegasStadium: str = "Las Vegas Stadium";
        break;
    case EMPTY: str = "EMPTY";
        break;
    }
    return str;
}

stadiums getEnum(QString stadium)
{
    stadiums sta = EMPTY;
    if(stadium == "Chase Field")
        sta = ChaseField;
    else if(stadium == "Sun Trust Park")
        sta = SunTrustPark;
    else if(stadium == "Oriole Park at Camden Yards")
        sta = OriolePark;
    else if(stadium == "Fenway Park")
        sta = FenwayPark;
    else if(stadium == "Wrigley Field")
        sta = WrigleyField;
    else if(stadium == "Guaranteed Rate Field")
        sta = GuaranteedRateField;
    else if(stadium == "Great American Ball Park")
        sta = GreatAmericanBall;
    else if(stadium == "Progressive Field")
        sta = ProgressiveField;
    else if(stadium == "Coors Field")
        sta = CoorsField;
    else if(stadium == "Comerica Park")
        sta = ComericaPark;
    else if(stadium == "Minute Maid Park")
        sta = MinuteMaidPark;
    else if(stadium == "Kauffman Stadium")
        sta = KauffmanStadium;
    else if(stadium == "Angel Stadium")
        sta = AngelStadium;
    else if(stadium == "Dodger Stadium")
        sta = DodgerStadium;
    else if(stadium == "Marlins Park")
        sta = MarlinsPark;
    else if(stadium == "Miller Park")
        sta = MillerPark;
    else if(stadium == "Target Field")
        sta = TargetField;
    else if(stadium == "Citi Field")
        sta = CitiField;
    else if(stadium == "Yankee Stadium")
        sta = YankeeStadium;
    else if(stadium == "Oakland Alameda County Coliseum")
        sta = OaklandAlamedaCountyColiseum;
    if(stadium == "Citizens Bank Park")
        sta = CitizensBankPark;
    else if(stadium == "PNC Park")
        sta = PNCPark;
    else if(stadium == "Petco Park")
        sta = PetcoPark;
    else if(stadium == "Orcale Park")
        sta = OrcalePark;
    else if(stadium == "Safeco Field")
        sta = SafecoField;
    else if(stadium == "Busch Stadium")
        sta = BuschStadium;
    else if(stadium == "Tropicana Field")
        sta = TropicanaField;
    else if(stadium == "Globe Life Park in Arlington")
        sta = GlobeLifePark;
    else if(stadium == "Rogers Centre")
        sta = RogersCentre;
    else if(stadium == "Nationals Park")
        sta = NationalsPark;
    else if(stadium == "Las Vegas Stadium")
        sta = LasVegasStadium;
    else if(stadium == "EMPTY")
        sta = EMPTY;

    return sta;
}
//Daniel's Additions End
