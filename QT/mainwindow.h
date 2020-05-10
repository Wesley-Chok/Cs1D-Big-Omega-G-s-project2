#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "controller.h"
#include "graph.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    /** \fn Constructor()
     * @param Controller *controller
     * @param graph *Graph
     * @param QWidget *parent
     */
    MainWindow(Controller *controller, graph *Graph, QWidget *parent = nullptr);

    /** \fn Destructor()
     * @param no formal parameters
     */
    ~MainWindow();

    /** \fn resetDataMembers()
     * This function will refresh all of the database members to 0
     * @param no formal parameters
     * @return nothing returned
     */
    void resetDataMembers();

    /** \fn refreshWidgets()
     * This function will refresh the ui widgets to it's original state
     * @param no formal parameters
     * @return nothing returned
     */
    void refreshWidgets();

    /** \fn sortStadiums()
     * This function will sort the stadiums in order to display the correct output for the algorithm
     * @param no formal parameters
     * @return nothing returned
     */
    void sortStadiums();

    /** \fn recursiveStadiumSort()
     * This function will sort the stadiums recursively in order to display the correct output for the algorithm
     * @param QString current
     * @param QVector<QString> &selected
     * @return nothing returned
     */
    void recursiveStadiumSort(QString current, QVector<QString> &selected);

    /** \fn nextStadium()
     * This function will push to the next stadium each time it is called
     * @param QVector<int> dist
     * @param QVector<QString> &selected
     * @return int minIndex
     */
    int nextStadium(QVector<int> dist, QVector<QString> &selected);

private slots:
    /** \fn on_ClearBtn_clicked()
     * This button will clear all texts in the username and password line edits on the login ui page
     * @param no formal parameters
     */
    void on_ClearBtn_clicked();

    /** \fn on_Loginbtn_clicked()
     * This button will either allow the user access to the baseball fan ui or the admin ui depending
     * on the username and password inputted
     * @param no formal parameters
     */
    void on_Loginbtn_clicked();

    /** \fn keyPressEvent()
     *
     * @param QKeyEvent *pe
     */
    void keyPressEvent(QKeyEvent* pe);

    /** \fn on_gotodisplaybtn_clicked()
     * This button will allow the admin to go to the display page ui
     * @param no formal parameters
     */
    void on_gotodisplaybtn_clicked();

    /** \fn on_teamcombobox_currentTextChanged()
     * This combo box will allow the admin to decide which baseball team they want to display
     * @param const QString &arg1
     */
    void on_teamcombobox_currentTextChanged(const QString &arg1);

    /** \fn on_displaystadiumteambtn_clicked()
     * This combo box will allow the admin to decide which baseball team's stadium they want to display
     * @param no formal parameters
     */
    void on_displaystadiumteambtn_clicked();

    /** \fn on_disstadiumstadiumbtn_clicked()
     * This button will allow the admin to view all of the baseball team's stadiums sorted by team name
     * @param no formal parameters
     */
    void on_disstadiumstadiumbtn_clicked();

    /** \fn on_disAmericanTeam_clicked()
     * This button will allow the admin to view all of the american baseball teams
     * @param no formal parameters
     */
    void on_disAmericanTeam_clicked();

    /** \fn on_disNationalbtn_clicked()
     * This button will allow the admin to view all of the national baseball teams
     * @param no formal parameters
     */
    void on_disNationalbtn_clicked();

    /** \fn on_disstadiumtypobtn_clicked()
     * This button will allow the admin to view all of the stadiums sorted by park topology
     * @param no formal parameters
     */
    void on_disstadiumtypobtn_clicked();

    /** \fn on_disteamopenroof_clicked()
     * This button will allow the admin to view all of the baseball teams with an open roof stadium
     * @param no formal parameters
     */
    void on_disteamopenroof_clicked();

    /** \fn on_disstaddatebtn_clicked()
     * This button will allow the admin to view all of the baseball team's stadiums sorted in chronological order
     * @param no formal parameters
     */
    void on_disstaddatebtn_clicked();

    /** \fn on_disstadiumseats_clicked()
     * This button will allow the admin to view all of the baseball team's stadiums sorted in seating capacity
     * @param no formal parameters
     */
    void on_disstadiumseats_clicked();

    /** \fn on_disstadiumlarcenter_clicked()
     * This button will allow the admin to view all of the baseball team's stadiums sorted by largest distance
     * to center
     * @param no formal parameters
     */
    void on_disstadiumlarcenter_clicked();

    /** \fn on_disstadiumsmalcenter_clicked()
     * This button will allow the admin to view all of the baseball team's stadiums sorted by smallest distance
     * to center
     * @param no formal parameters
     */
    void on_disstadiumsmalcenter_clicked();

    /** \fn on_loadTeamInfo_clicked()
     * This button will allow the admin to go to the team information ui page
     * @param no formal parameters
     */
    void on_loadTeamInfo_clicked();

    /** \fn on_loadSouvenirInfo_clicked()
     * This button will allow the admin to go to the souvenir information ui page
     * @param no formal parameters
     */
    void on_loadSouvenirInfo_clicked();

    /** \fn on_Backtoadmin_clicked()
     * This button will allow the admin to go back to the admin page
     * @param no formal parameters
     */
    void on_Backtoadmin_clicked();

    /** \fn on_loadDatabtn_clicked()
     * This button will allow the admin to go to the data ui page
     * @param no formal parameters
     */
    void on_loadDatabtn_clicked();

    /** \fn on_loadstadiumsbtn_clicked()
     * This button will allow the admin to go to the stadium data page
     * @param no formal parameters
     */
    void on_loadstadiumsbtn_clicked();

    /** \fn on_backtopass_clicked()
     * This button will allow the admin to go back to the login page ui
     * @param no formal parameters
     */
    void on_backtopass_clicked();

    /** \fn on_AddSouv_clicked()
     * This button will allow the admin to add the desired souvenir
     * @param no formal parameters
     */
    void on_AddSouv_clicked();

    /** \fn on_Souvenirbtn_clicked()
     * This button will allow the admin to go to the souvenir page ui
     * @param no formal parameters
     */
    void on_Souvenirbtn_clicked();

    /** \fn on_BacktoAdmin_clicked()
     * This button will allow the admin to go back to tehe admin page
     * @param no formal parameters
     */
    void on_BacktoAdmin_clicked();

    /** \fn on_TeamCombosouv_activated()
     * This combo box will allow the admin to select the baseball team's souvenir information
     * @param const QString &arg1
     */
    void on_TeamCombosouv_activated(const QString &arg1);

    /** \fn on_deleteSouvbtn_clicked()
     * This button will allow the admin to delete the souvenir
     * @param no formal parameters
     */
    void on_deleteSouvbtn_clicked();

    /** \fn on_Souveniralltable_activated()
     * This table view will allow the admin to view the baseball team's souvenirs which is selected in
     * the on_TeamCombosouv_activated combo box
     * @param no formal parameters
     */
    void on_Souveniralltable_activated(const QModelIndex &index);

    /** \fn on_Editsouvbtn_clicked()
     * This button will allow the admin to edit the souvenir selected in the on_Souveniralltable_activated
     * table view
     * @param no formal parameters
     */
    void on_Editsouvbtn_clicked();

    /** \fn on_EditMlBbtn_clicked()
     * This button will allow the admin to go to the major league baseball information edited ui page
     * @param no formal parameters
     */
    void on_EditMlBbtn_clicked();

    /** \fn on_stadiumcombobox_activated()
     * This combo box will allow the admin to select the baseball team's stadium information
     * @param no formal parameters
     */
    void on_stadiumcombobox_activated(const QString &arg1);

    /** \fn on_Backtoadmin_2_clicked()
     * This button will allow the admin to go back to the admin ui page
     * @param no formal parameters
     */
    void on_Backtoadmin_2_clicked();

    /** \fn on_editstadium_clicked()
     * This button will allow the admin to edit the desired stadium
     * @param no formal parameters
     */
    void on_editstadium_clicked();

    /** \fn on_DFSbtn_clicked()
     * This button will allow the baseball fan to view the trip by depth first search
     * @param no formal parameters
     */
    void on_DFSbtn_clicked();

    /** \fn on_BFSbtn_clicked()
     * This button will allow the baseball fan to view the trip by breadth first search
     * @param no formal parameters
     */
    void on_BFSbtn_clicked();

    /** \fn on_MSTbtn_clicked()
     * This button will allow the baseball fan to view the trip by minimum spanning tree
     * @param no formal parameters
     */
    void on_MSTbtn_clicked();

    /** \fn on_backtologin_clicked()
     * This button will allow the baseball fan to go back to the login ui page
     * @param no formal parameters
     */
    void on_backtologin_clicked();

    //NEW DANIEL STUFF START
    /** \fn on_dodgers_button_clicked()
     * This button will allow the baseball fan to go to the dodgers trip ui page
     * @param no formal parameters
     */
    void on_dodgers_button_clicked();

    /** \fn on_startStadium_button_clicked()
     * This button will allow the baseball fan to go to the start stadium ui page
     * @param no formal parameters
     */
    void on_startStadium_button_clicked();

    /** \fn on_marlins_button_clicked()
     * This button will allow the baseball fan to go to the start stadium at Marlins Park ui page
     * @param no formal parameters
     */
    void on_marlins_button_clicked();

    /** \fn on_custom_button_clicked()
     * This button will allow the baseball fan to go to the custom ui page
     * @param no formal parameters
     */
    void on_custom_button_clicked();

    /** \fn on_traversals_button_clicked()
     * This button will allow the baseball fan to go to the traversals ui page
     * @param no formal parameters
     */
    void on_traversals_button_clicked();

    /** \fn on_add_button_clicked()
     * This button will allow the baseball fan to add a stadium to the list
     * @param no formal parameters
     */
    void on_add_button_clicked();

    /** \fn on_delete_button_clicked()
     * This button will allow the baseball fan to delete a stadium to the list
     * @param no formal parameters
     */
    void on_delete_button_clicked();

    /** \fn on_tripSelect_back_clicked()
     * This button will allow the baseball fan to go back to the baseball fan ui page
     * @param no formal parameters
     */
    void on_tripSelect_back_clicked();

    //NEW DANIEL STUFF END

    /** \fn on_calculatesouvbtn_clicked()
     * This button will allow the baseball fan to calculate the souvenirs purchased
     * @param no formal parameters
     */
    void on_calculatesouvbtn_clicked();

    /** \fn on_clearsouvbtn_clicked()
     * This button will allow the baseball fan to clear the souvenirs chosen
     * @param no formal parameters
     */
    void on_clearsouvbtn_clicked();

    /** \fn on_backtotrip_clicked()
     * This button will allow the baseball fan to go back to baseball fan ui page once they are done purchasing
     * souvenirs
     * @param no formal parameters
     */
    void on_backtotrip_clicked();

    /** \fn on_select_done_clicked()
     * This button will allow the baseball fan to finish their baseball vacation trip
     * @param no formal parameters
     */
    void on_select_done_clicked();

    /** \fn on_backtologin_2_clicked()
     * This button will allow the baseball fan to go back to the login ui page
     * @param no formal parameters
     */
    void on_backtologin_2_clicked();

    /** \fn on_backtoadmin_clicked()
     * This button will allow the admin to go back to the admin ui page
     * @param no formal parameters
     */
    void on_backtoadmin_clicked();

private:
    Ui::MainWindow *ui;
    Controller *m_controller;
    graph *m_graph;
    int page = 0;

    //New
    enum tripType
    {
        Dodgers,
        Start,
        Marlins,
        Custom,
        None
    };
    QVector<QString> selectedStadiums;
    QVector<QString> sortedStadiums;
    double totalDistance = 0;
    tripType trip = None;
};
#endif // MAINWINDOW_H
