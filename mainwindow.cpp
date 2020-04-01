#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(Controller *controller, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),
     m_controller(controller)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentWidget(ui->Login);

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

void MainWindow::on_loadTeamInfobtn_clicked()
{
    QString teamname;
    m_controller->readTeamFile();
    for (int i = 0; i < m_controller->listOfTeams.count();i++)
    {
        teamname = m_controller->listOfTeams[i]->getTeamName();
        ui->teamcombobox->addItem(teamname);
    }
}

void MainWindow::keyPressEvent(QKeyEvent* pe)
{
    if(page == 0)
    {
        if(pe->key()== Qt::Key_Return) on_Loginbtn_clicked();
    }
}

void MainWindow::on_display_clicked()
{
    ui->tableView->setModel(m_controller->getstadiumQueryModel());
    ui->tableView->resizeColumnsToContents();
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
