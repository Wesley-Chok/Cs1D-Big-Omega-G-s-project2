#ifndef STADIUMDIS_H
#define STADIUMDIS_H

#include "Souvenir.h"

class stadiumdis : public QObject
{
    Q_OBJECT
public:
    explicit stadiumdis (QObject *parent = nullptr);


    QString getStadium1() const;
    void setStadium1(const QString &stadium);

    QString getStadium2() const;
    void setStadium2(QString stadium);

    QString getDistance() const;
    void setDistance(QString distance);

signals:

public slots:
private:
    QString stadium1;
    QString stadium2;
    QString distance;
};
#endif // STADIUMDIS_H
