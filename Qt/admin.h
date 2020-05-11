#ifndef ADMIN_H
#define ADMIN_H

#include <QObject>
#include <QString>

/** \class Admin
 * Class for the admin side of the baseball tour planning program.
 */
class Admin : public QObject
{
    Q_OBJECT
public:
    /** \fn Constructor
     * @param QObject *parent
     */
    explicit Admin(QObject *parent = nullptr);

    /** \fn username()
     * This function returns the username that was determined in the function setUsername()
     * @param no formal parameters
     * @return QString m_username
     */
    QString username() const;

    /** \fn setUsername()
     * This function initializes the private m_username variable to the const username variable
     * @param const QString &username
     * @return nothing returned
     */
    void setUsername(const QString &username);

    /** \fn password()
     * This function returns the password that was determined in the function setPassword()
     * @param no formal parameters
     * @return QString m_password
     */
    QString password() const;

    /** \fn setPassword()
     * This function initializes the private m_password variable to the const password variable
     * @param const QString &password
     * @return nothing returned
     */
    void setPassword(const QString &password);

    /** \fn rank()
     * This function returns the rank taht was determined in the function setRank(). The rank differentiates
     * the admin and baseball fan login information
     * @param no formal parameters
     * @return QString m_rank
     */
    int rank() const;

    /** \fn setRank()
     * This function initialize the private m_rank variable to the int rank variable.
     * @param int rank
     * @return nothing returned
     */
    void setRank(int rank);

signals:
    /** \fn usernameChanged()
     * This function will change the previous username to a new username
     * @param no formal parameters
     * @return nothing returned
     */
    void usernameChanged();
    /** \fn passwordChanged()
     * This function will change the previous password to a new password
     * @param no formal parameters
     * @return nothing returned
     */
    void passwordChanged();
    /** \fn rankChanged()
     * This function will change the previous rank to a new rank
     * @param no formal parameters
     * @return nothing returned
     */
    void rankChanged();
public slots:

private:
    QString m_username;
    QString m_password;
    int     m_rank;
};

#endif // ADMIN_H
