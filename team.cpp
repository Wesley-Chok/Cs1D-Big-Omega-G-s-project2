#include "team.h"

Team::Team(QObject *parent) : QObject(parent)
{

}
void Team :: setTeamName(QString name)
{
    teamName = name;
}

QString Team :: getTeamName()
{
    return teamName;
}

void Team :: setStadiumName(QString stadium)
{
    stadiumName = stadium;
}

QString Team :: getStadiumName()
{
    return stadiumName;
}

void Team :: setSeatingCapacity(QString capacity)
{
    seatingCapacity = capacity;
}


QString Team :: getSeatingCapacity()
{
    return seatingCapacity;
}

void Team :: setLocation(QString location)
{
    teamLocation = location;
}

QString Team :: getLocation()
{
    return teamLocation;
}

void Team :: setPlayingSurface(QString surface)
{
    playingSurface = surface;
}

QString Team :: getPlayingSurface()
{
    return playingSurface;
}

void Team :: setLeague(QString League)
{
    league = League;
}
QString Team :: getLeague()
{
    return league;
}

void Team :: setDateOpened(QString date)
{
    dateOpened = date;
}

QString Team :: getDateOpened()
{
    return dateOpened;
}

void Team :: setDTC(QString dtc)
{
    distanceToCenter = dtc;
}

QString Team :: getDTC()
{
    return distanceToCenter;
}

void Team :: setBallparkTypology(QString typology)
{
    ballparkTypology = typology;
}
QString Team :: getBallparkTypology()
{
    return ballparkTypology;
}

void Team :: setRoofType(QString rooftype)
{
    teamRoofType = rooftype;
}

QString Team :: getroofType()
{
    return teamRoofType;
}
