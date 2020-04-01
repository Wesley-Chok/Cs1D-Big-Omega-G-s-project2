#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "controller.h"

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

    void on_loadTeamInfobtn_clicked();

    void keyPressEvent(QKeyEvent* pe);

    void on_display_clicked();

    void on_gotodisplaybtn_clicked();

    void on_teamcombobox_currentTextChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;
    Controller *m_controller;
    int page = 0;
};
#endif // MAINWINDOW_H
