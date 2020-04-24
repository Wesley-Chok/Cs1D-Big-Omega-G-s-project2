#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "controller.h"
#include "graph.h"
#include "bfsgraph.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(Controller *controller, QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_ClearBtn_clicked();

    void on_Loginbtn_clicked();

    void keyPressEvent(QKeyEvent* pe);

    void on_gotodisplaybtn_clicked();

    void on_teamcombobox_currentTextChanged(const QString &arg1);

    void on_displaystadiumteambtn_clicked();

    void on_disstadiumstadiumbtn_clicked();

    void on_disAmericanTeam_clicked();

    void on_disNationalbtn_clicked();

    void on_disstadiumtypobtn_clicked();

    void on_disteamopenroof_clicked();

    void on_disstaddatebtn_clicked();

    void on_disstadiumseats_clicked();

    void on_disstadiumlarcenter_clicked();

    void on_disstadiumsmalcenter_clicked();

    void on_loadTeamInfo_clicked();

    void on_loadSouvenirInfo_clicked();

    void on_Backtoadmin_clicked();

    void on_loadDatabtn_clicked();

    void on_loadstadiumsbtn_clicked();

private:
    Ui::MainWindow *ui;
    Controller *m_controller;
    int page = 0;
};
#endif // MAINWINDOW_H
