#ifndef TEAM_H
#define TEAM_H

#include "stadiumdis.h"

class Team : public QObject
{
    Q_OBJECT
public:
    /** \fn Constructor()
     * @param QWidget *parent
     */
    explicit Team (QObject *parent = nullptr);

    /** \fn setTeamName()
     * This function initializes the private teamName variable to the QString name variable
     * @param QString name
     * @return nothing returned
     */
    void setTeamName(QString name);

    /** \fn getTeamName()
     * This function will return the team name determined in the function setTeamName()
     * @param no formal parameters
     * @return QString teamName
     */
    QString getTeamName();

    /** \fn setStadiumName()
     * This function initializes the private stadiumName variable to the QString stadium variable
     * @param QString stadium
     * @return nothing returned
     */
    void setStadiumName(QString stadium);

    /** \fn getTeamName()
     * This function will return the stadium name determined in the function setStadiumName()
     * @param no formal parameters
     * @return QString stadiumName
     */
    QString getStadiumName();

    /** \fn setStadiumName()
     * This function initializes the private seatingCapacity variable to the QString capacity variable
     * @param QString capacity
     * @return nothing returned
     */
    void setSeatingCapacity(QString capacity);

    /** \fn getTeamName()
     * This function will return the seating capacity determined in the function setSeatingCapacity()
     * @param no formal parameters
     * @return QString seatingCapacity
     */
    QString getSeatingCapacity();

    /** \fn setLocation()
     * This function initializes the private teamLocation variable to the QString location variable
     * @param QString location
     * @return nothing returned
     */
    void setLocation(QString location);

    /** \fn getLocation()
     * This function will return the team location determined in the function setLocation()
     * @param no formal parameters
     * @return QString teamLocation
     */
    QString getLocation();

    /** \fn setPlayingSurface()
     * This function initializes the private playingSurface variable to the QString surface variable
     * @param QString surface
     * @return nothing returned
     */
    void setPlayingSurface(QString surface);

    /** \fn getLocation()
     * This function will return the playing surface determined in the function setPlayingSurface()
     * @param no formal parameters
     * @return QString playingSurface
     */
    QString getPlayingSurface();

    /** \fn setLeague()
     * This function initializes the private league variable to the QString League variable
     * @param QString League
     * @return nothing returned
     */
    void setLeague(QString League);

    /** \fn getLeague()
     * This function will return the league determined in the function setLeague()
     * @param no formal parameters
     * @return QString league
     */
    QString getLeague();

    /** \fn setDateOpened()
     * This function initializes the private dateOpened variable to the QString date variable
     * @param QString date
     * @return nothing returned
     */
    void setDateOpened(QString date);

    /** \fn getDateOpened()
     * This function will return the date determined in the function setDateOpened()
     * @param no formal parameters
     * @return QString date
     */
    QString getDateOpened();

    /** \fn setDTC()
     * This function initializes the private distanceToCenter variable to the QString dtc variable
     * @param QString date
     * @return nothing returned
     */
    void setDTC(QString dtc);

    /** \fn getDTC()
     * This function will return the distance to center determined in the function setDTC()
     * @param no formal parameters
     * @return QString distanceToCenter
     */
    QString getDTC();

    /** \fn setBallparkTypology()
     * This function initializes the private ballparkTypology variable to the QString typology variable
     * @param QString typology
     * @return nothing returned
     */
    void setBallparkTypology(QString typology);

    /** \fn getBallparkTypology()
     * This function will return the typology determined in the function setBallparkTypology()
     * @param no formal parameters
     * @return QString ballparkTypology
     */
    QString getBallparkTypology();

    /** \fn setRoofType()
     * This function initializes the private teamRoofType variable to the QString rooftype variable
     * @param QString rooftype
     * @return nothing returned
     */
    void setRoofType(QString rooftype);

    /** \fn getroofType()
     * This function will return the team roof type determined in the function setRoofType()
     * @param no formal parameters
     * @return QString teamRoofType
     */
    QString getroofType();

private:
    QString teamName;
    QString stadiumName;
    QString seatingCapacity;
    QString teamLocation;
    QString playingSurface;
    QString league;
    QString dateOpened;
    QString distanceToCenter;
    QString ballparkTypology;
    QString teamRoofType;
};

#endif // TEAM_H
