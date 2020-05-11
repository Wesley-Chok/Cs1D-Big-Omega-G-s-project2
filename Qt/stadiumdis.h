#ifndef STADIUMDIS_H
#define STADIUMDIS_H

#include "Souvenir.h"

class stadiumdis : public QObject
{
    Q_OBJECT
public:
    /** \fn Constructor()
     * @param QWidget *parent
     */
    explicit stadiumdis (QObject *parent = nullptr);

    /** \fn getStadium1()
     * This function will return the first stadium determined in the function getStadium1()
     * @param no formal parameters
     * @return QString stadium1
     */
    QString getStadium1() const;

    /** \fn setStadium1()
     * This function initializes the private stadium1 variable to the const stadium variable
     * @param const QString &stadium
     * @return nothing returned
     */
    void setStadium1(const QString &stadium);

    /** \fn getStadium2()
     * This function will return the second stadium determined in the function getStadium2()
     * @param no formal parameters
     * @return QString stadium2
     */
    QString getStadium2() const;

    /** \fn setStadium2()
     * This function initializes the private stadium2 variable to the QString stadium variable
     * @param QString stadium
     * @return nothing returned
     */
    void setStadium2(QString stadium);

    /** \fn getDistance()
     * This function will return the distance determined in the function setDistance()
     * @param no formal parameters
     * @return QString distance
     */
    QString getDistance() const;

    /** \fn setDistance()
     * This function initializes the private distance variable to the QString distanceinput variable
     * @param const QString distance
     * @return nothing returned
     */
    void setDistance(QString distance);

signals:

public slots:
private:
    QString stadium1;
    QString stadium2;
    QString distance;
};
#endif // STADIUMDIS_H
