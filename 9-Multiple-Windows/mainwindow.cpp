#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include"dialog.h"
#include<QtWidgets>
#include<QMessageBox>
#include<QPixmap>
#include<string>


bool MainWindow::verify()
{
   QString s=ui->lineEdit->text();
    if(s.length()==5)
        return true;
    else
        return false;
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // set background

    QPixmap bkgnd(":/resources/img/Sans titre-1.png");
        bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
        QPalette palette;
        palette.setBrush(QPalette::Background, bkgnd);
        this->setPalette(palette);

    ui->lineEdit->setStyleSheet("* { background-color: rgba(0, 0, 0, 0); }");
    ui->lineEdit_2->setStyleSheet("* { background-color: rgba(0, 0, 0, 0); }");
    ui->pushButton->setStyleSheet("* { background-color: rgba(0, 0, 0, 0); }");

    ui->lineEdit_2->setPlaceholderText("type");

    ui->lineEdit_2->setEchoMode(QLineEdit::Password);
    ui->lineEdit->setPlaceholderText("type");

    //ui->lineEdit->setFocus();
    ui->lineEdit->setMaxLength(5);
    //setTabOrder(ui->lineEdit,ui->lineEdit_2);
    //ui->lineEdit_2->setFocus();



    //ui->lineEdit_2->setFocus();
    //ui->lineEdit_2->setMaxLength(5);
    //ui->lineEdit->setCursorPosition(0);



    //connect(ui->lineEdit, SIGNAL(verify()), ui->lineEdit_2, SLOT(setFocus()));

    this->setFixedSize(this->width(),this->height());


    QShortcut *returnShortcut = new QShortcut(QKeySequence("Return"), ui->pushButton);
    QObject::connect(returnShortcut, SIGNAL(activated()), ui->pushButton, SLOT(click()));

    //QPixmap p(":/resources/img/tt.png");
    //int h=ui->label_3->height();
    //int w=ui->label_3->height();
    //ui->label_3->setPixmap(p.scaled(270,350,Qt::KeepAspectRatio));


}

MainWindow::~MainWindow()
{
    delete ui;

}

void MainWindow::on_pushButton_clicked()
{
    //ui->label->setText("text changed");
    //ui->label->setText(ui->lineEdit->text());
    //ui->label->setStyleSheet("{color: #1969ff}");



    if(ui->lineEdit->text()=="admin" && ui->lineEdit_2->text()=="admin")
    {
        //Dialog d;
        //d.setModal(true);
        //d.exec();

        // The following to access parent interface
        hide(); // to hide the parent interface
        d1=new Dialog_basic(this); // this refer to the parent
        d1->show();
    }
    else if(ui->lineEdit->text()=="" && ui->lineEdit_2->text()!="")
        QMessageBox::critical(this,"Error","Please enter a user ");
    else if(ui->lineEdit->text()!="" && ui->lineEdit_2->text()=="")
        QMessageBox::critical(this,"Error","Please enter a password");
    else if(ui->lineEdit->text()=="" && ui->lineEdit_2->text()=="")
        QMessageBox::critical(this,"Error","Please enter a user and a password");
    else
    {
        QMessageBox::critical(this,"Error","Wrong Password , Try again");

        //QMessageBox msgBox(QMessageBox::Critical,"This is the title","This is the text",QMessageBox::Ok , this);
        //QPixmap exportSuccess("warning.png");
        //msgBox.setIconPixmap(exportSuccess);
    //msgBox.exec();
    }
}


