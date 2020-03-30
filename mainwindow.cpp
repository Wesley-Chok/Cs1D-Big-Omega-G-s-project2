#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(Controller *controller, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),
     m_controller(controller)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentWidget(ui->Login);
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
