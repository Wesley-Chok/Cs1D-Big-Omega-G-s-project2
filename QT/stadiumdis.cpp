#include "stadiumdis.h"

stadiumdis::stadiumdis(QObject *parent) : QObject(parent)
{

}

QString stadiumdis::getStadium1() const
{
    return stadium1;
}

void stadiumdis::setStadium1(const QString &item)
{
    stadium1 = item;
}

QString stadiumdis::getStadium2() const
{
    return stadium2;
}

void stadiumdis::setStadium2(QString stadium)
{
    stadium2 = stadium;
}

void stadiumdis::setDistance(QString distanceinput)
{
    distance = distanceinput;
}
QString stadiumdis :: getDistance() const
{
    return distance;
}
