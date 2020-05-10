#ifndef SOUVENIR_H
#define SOUVENIR_H

#include "admin.h"

class Souvenir : public QObject
{
    Q_OBJECT
public:
    /** \fn Constructor()
     * @param QWidget *parent
     */
    explicit Souvenir(QObject *parent = nullptr);

    /** \fn item()
     * This function will return the souvenir item determined in the function setItem()
     * @param no formal parameters
     * @return QString m_item
     */
    QString item() const;

    /** \fn setItem()
     * This function initializes the private m_item variable to the const item variable
     * @param const QString &item
     * @return nothing returned
     */
    void setItem(const QString &item);

    /** \fn price()
     * This function will return the souvenir price determined in the function setPrice()
     * @param no formal parameters
     * @return QString m_price
     */
    QString price() const;

    /** \fn setPrice()
     * This function initializes the private m_price to the QString price variable
     * @param QString price
     * @return nothing returned
     */
    void setPrice(QString price);

    /** \fn team()
     * This function will return the baseball team determined in the function setTeam()
     * @param no formal parameters
     * @return nothing returned
     */
    QString team() const;

    /** \fn setTeam()
     * This function initializes the private TeamName to the QString Team variable
     * @param QString price
     * @return nothing returned
     */
    void setTeam(QString Team);

signals:

public slots:
private:
    QString m_item;
    QString m_price;
    QString TeamName;
};

#endif // SOUVENIR_H
