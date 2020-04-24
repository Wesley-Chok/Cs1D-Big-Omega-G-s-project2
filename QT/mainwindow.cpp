#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(Controller *controller, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),
     m_controller(controller)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentWidget(ui->Login);

    ui->teamcombobox->clear();
    for (int i = 0; i < m_controller->listOfTeams.count();i++)
    {
        QString teamname = m_controller->listOfTeams[i]->getTeamName();
        ui->teamcombobox->addItem(teamname);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_ClearBtn_clicked()
{
    ui->usernamelineedit->clear();
    ui->passwordlineedit->clear();
}


void MainWindow::on_Loginbtn_clicked()
{
    QString username = ui->usernamelineedit->text();
    QString password = ui->passwordlineedit->text();

    QSqlQuery qry;
    // RANK 2 IS USED FOR ADMINS
    // RANK 1 IS USED FOR STUDENTS
    qry.prepare("select * from admin where username ='"+username+"' and password ='"+password+"' and rank= '2'");
    if (qry.exec())
    {
        int count = 0;
        while (qry.next())
        {
            count++;
        }
           if(count == 1)
           {
            QMessageBox::information(this, "Login", "Username and password is correct");
            ui->stackedWidget->setCurrentWidget(ui->Admin);
            page++;
            this->ui->usernamelineedit->setText("");
            this->ui->passwordlineedit->setText("");
           }
           else if (count!= 1)
           {
               if(qry.exec("select * from admin where username ='"+username+"' and password ='"+password+"' and rank= '1'"))
                   count  = 0;
                    while(qry.next())
                    {
                        count++;
                    }
                    if (count == 1)
                    {
                       QMessageBox::information(this,"Login", "Username and Password is correct");
                       ui->stackedWidget->setCurrentWidget(ui->Planning);
                       this->ui->usernamelineedit->setText("");
                       this->ui->passwordlineedit->setText("");
                    }
                    else
                    {
                        QMessageBox::warning(this,"Login","Username and password is not correct");
                        this->ui->usernamelineedit->setText("");
                        this->ui->passwordlineedit->setText("");
                    }
           }
    }
}

void MainWindow::keyPressEvent(QKeyEvent* pe)
{
    if(page == 0)
    {
        if(pe->key()== Qt::Key_Return) on_Loginbtn_clicked();
    }
}

void MainWindow::on_gotodisplaybtn_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->Displaytable);
}

void MainWindow::on_teamcombobox_currentTextChanged(const QString &arg1)
{
        ui->tableView->setModel(m_controller->getteamQueryModel(arg1));
        ui->tableView->resizeColumnsToContents();
}

void MainWindow::on_displaystadiumteambtn_clicked()
{
    ui->tableView->setModel(m_controller->getstadiumQueryModelsortedbyteam());
    ui->tableView->resizeColumnsToContents();
}

void MainWindow::on_disstadiumstadiumbtn_clicked()
{
    ui->tableView->setModel(m_controller->getstadiumQueryModelsortedbystadium());
    ui->tableView->resizeColumnsToContents();
}

void MainWindow::on_disAmericanTeam_clicked()
{
    ui->tableView->setModel(m_controller->getAmericanLeagueTeams());
    ui->tableView->resizeColumnsToContents();
}

void MainWindow::on_disNationalbtn_clicked()
{
    ui->tableView->setModel(m_controller->getNationalLeagueTeams());
    ui->tableView->resizeColumnsToContents();
}

void MainWindow::on_disstadiumtypobtn_clicked()
{
    ui->tableView->setModel(m_controller->getStadiumQueryModelsortedbyTypology());
    ui->tableView->resizeColumnsToContents();
}

void MainWindow::on_disteamopenroof_clicked()
{
    ui->tableView->setModel(m_controller->getTeamswithopenroofquerymodel());
    ui->tableView->resizeColumnsToContents();
}

void MainWindow::on_disstaddatebtn_clicked()
{
    ui->tableView->setModel(m_controller->getStadiumQueryModelsortedbydate());
    ui->tableView->resizeColumnsToContents();
}

void MainWindow::on_disstadiumseats_clicked()
{
    ui->tableView->setModel(m_controller->getStadiumQueryModelsortedbycapacity());
    ui->tableView->resizeColumnsToContents();
}


void MainWindow::on_disstadiumlarcenter_clicked()
{
    ui->tableView->setModel(m_controller->getStadiumQueryModelsortedbydistancetocenterLAR());
    ui->tableView->resizeColumnsToContents();
}

void MainWindow::on_disstadiumsmalcenter_clicked()
{
    ui->tableView->setModel(m_controller->getStadiumQueryModelsortedbydistancetocentersma());
    ui->tableView->resizeColumnsToContents();
}

void MainWindow::on_loadTeamInfo_clicked()
{
    QString teamname;
    m_controller->readTeamFile();
    ui->teamcombobox->clear();
    for (int i = 0; i < m_controller->listOfTeams.count();i++)
    {
        teamname = m_controller->listOfTeams[i]->getTeamName();
        ui->teamcombobox->addItem(teamname);
    }
}

void MainWindow::on_loadSouvenirInfo_clicked()
{
    m_controller->readSouvenirFile();
}

void MainWindow::on_Backtoadmin_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->Admin);
}

void MainWindow::on_loadDatabtn_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->Loadpage);
}

void MainWindow::on_loadstadiumsbtn_clicked()
{
    m_controller->readStadiumsFile();
}
