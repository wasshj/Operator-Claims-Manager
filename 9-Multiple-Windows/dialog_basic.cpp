#include "dialog_basic.h"
#include "ui_dialog_basic.h"
#include"dialog2.h"
#include<QShortcut>
#include<QMessageBox>
#include<QFile>
#include<QTextStream>
#include<QToolButton>
#include"QPushButton"
#include"QWidget"
#include<QtWidgets>
#include <QUrl>
#include <QtCore>

Dialog_basic::Dialog_basic(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_basic)
{
    ui->setupUi(this);
    window()->setStyleSheet("QLineEdit { border: none }");
    this->setWindowTitle("Tunisie Telecom Reclamations Manager");



    this->setFixedSize(this->width(),this->height());

    ui->lineEdit->setStyleSheet("* { background-color: rgba(0, 0, 0, 0);color:rgba(15, 88, 126) }");
    ui->lineEdit_2->setStyleSheet("* { background-color: rgba(0, 0, 0, 0); color:rgba(15, 88, 126)}");
    ui->pushButton->setStyleSheet("* { background-color: rgba(0, 0, 0, 0); }");
    ui->pushButton_2->setStyleSheet("* { background-color: rgba(0, 0, 0, 0); }");
    ui->pushButton_3->setStyleSheet("* { background-color: rgba(0, 0, 0, 0); }");
    ui->pushButton_4->setStyleSheet("* { background-color: rgba(0, 0, 0, 0); }");
    ui->label_2->setStyleSheet("* { background-color: rgba(0, 0, 0, 0);color:rgba(255,255,255) }");
    ui->lineEdit_2->setPlaceholderText("Password");

    ui->lineEdit_2->setEchoMode(QLineEdit::Password);
    ui->lineEdit->setPlaceholderText("Name");


    //ui->pushButton->setStyleSheet("QPushButton#pushButton_config:hover{image: url(:/resources/img/Sans titre-6.png);}");

    QShortcut *returnShortcut = new QShortcut(QKeySequence("Return"), ui->pushButton);
    QObject::connect(returnShortcut, SIGNAL(activated()), ui->pushButton, SLOT(click()));

    QPixmap pixmap(":/resources/img/1nolight.png");
    ui->pushButton->setStyleSheet("* { background-color: rgba(0, 0, 0, 0); }");
    ui->label->setPixmap(pixmap);
    ui->label->setMask(pixmap.mask());

    ui->label->show();

        ui->pushButton->installEventFilter(this);
        ui->pushButton_2->installEventFilter(this);
        ui->pushButton_3->installEventFilter(this);
        ui->pushButton_4->installEventFilter(this);

}

Dialog_basic::~Dialog_basic()
{
    delete ui;
}

QString Dialog_basic::getUser()
{
    return ui->lineEdit->text();
}

QString Dialog_basic::getPass()
{
    return ui->lineEdit_2->text();
}

void Dialog_basic::on_pushButton_clicked()
{


    ui->lineEdit->setText(ui->lineEdit->text().replace(" ",""));

        QString smyUser,smyPass,smyService;
        bool check=false;

        QFile fcheck("C:/Users/WassHj/Documents/Qt projects/9-Multiple-Windows/userslist.txt");
       if(!fcheck.open( QFile::ReadOnly))
       {}
       QTextStream incheck(&fcheck);

       while(1)
       {
           incheck>>smyUser>>smyPass>>smyService;
           if(smyUser==ui->lineEdit->text() && smyPass==ui->lineEdit_2->text() && ui->lineEdit->text()!="" && ui->lineEdit_2->text()!="")
           {
               check =true;
               break;
           }
           if(incheck.atEnd())
               break;
       }
    fcheck.close();
    //if(ui->lineEdit->text()=="admin" && ui->lineEdit_2->text()=="admin")
    //check=false;
    if(ui->lineEdit->text()=="admin"&&ui->lineEdit_2->text()=="admin")
    {
        check=true;
        smyService="ADMIN";
    }
       if(check)
    {
        QFile fuserandpass("C:/Users/WassHj/Documents/Qt projects/9-Multiple-Windows/instantuserandpass.txt");
       if(!fuserandpass.open(QFile::WriteOnly|QFile::Text | QIODevice::Truncate))
       {}
       QTextStream outuserandpass(&fuserandpass);
       outuserandpass<<ui->lineEdit->text()<<" "<<ui->lineEdit_2->text()<<" "<<smyService;
       fuserandpass.close();

    Dialog2 d2;
    d2.setModal(true);
    d2.exec();
    hide();
    }
    else
       {
           if(ui->lineEdit->text()=="" && ui->lineEdit_2->text()!="")
                QMessageBox::critical(this,"Error","Please enter a user ");
           else if(ui->lineEdit->text()!="" && ui->lineEdit_2->text()=="")
                QMessageBox::critical(this,"Error","Please enter a password");
           else if(ui->lineEdit->text()=="" && ui->lineEdit_2->text()=="")
                QMessageBox::critical(this,"Error","Please enter a user and a password");
//           else if(ui->lineEdit->text()=="admin"&&ui->lineEdit_2->text()=="admin")
//           {
//               Dialog2 d2foradmin;
//               d2foradmin.setModal(true);
//               d2foradmin.exec();
//               hide();
//           }
           else
                QMessageBox::critical(this,"Error","Wrong Password , Try again");

       }
}



void Dialog_basic::on_pushButton_2_clicked()
{
    if(ui->lineEdit->text()=="admin" && ui->lineEdit_2->text()=="admin")
    {
    admininterface admn;
    admn.setModal(true);
    admn.exec();
    }
    else
        QMessageBox::critical(this,"Info","Donnés éronnés , interface admin non accessible");
}

bool Dialog_basic::eventFilter(QObject *obj, QEvent *event)
{
    // This function repeatedly call for those QObjects
    // which have installed eventFilter (Step 2)

    if (obj == (QObject*)ui->pushButton) {
        if (event->type() == QEvent::Enter)
        {


            //this->setStyleSheet("background:url(:/img/img/Sans titre-6.png)");


            QPixmap pixmap(":/resources/img/1withlight.png");
            ui->label->setPixmap(pixmap);
            ui->label->setMask(pixmap.mask());

            ui->label->show();
        }
       // return true;
        else if(event->type() == QEvent::Leave)
        {
            //this->setStyleSheet("background:url(:/img/img/Sans titre-1.png)");

            QPixmap pixmap2(":/resources/img/1nolight.png");
            ui->label->setPixmap(pixmap2);
            ui->label->setMask(pixmap2.mask());

            ui->label->show();
        }
//        else if(event->type()==QEvent::GraphicsSceneHoverEnter)
//        {
//                QPixmap pixmap(":/img/img/Sans titre-1.png");
//                ui->label->setPixmap(pixmap);
//                ui->label->setMask(pixmap.mask());
//        }
        return QWidget::eventFilter(obj, event);

    }

    else if(obj == (QObject*)ui->pushButton_2)
    {
        if (event->type() == QEvent::Enter)
        {


            //this->setStyleSheet("background:url(:/img/img/Sans titre-6.png)");


            QPixmap pixmap(":/resources/img/passwithlight.png");
            ui->label->setPixmap(pixmap);
            ui->label->setMask(pixmap.mask());

            ui->label->show();
        }
       // return true;
        else if(event->type() == QEvent::Leave)
        {
            //this->setStyleSheet("background:url(:/img/img/Sans titre-1.png)");

            QPixmap pixmap2(":/resources/img/1nolight.png");
            ui->label->setPixmap(pixmap2);
            ui->label->setMask(pixmap2.mask());

            ui->label->show();
        }
    }

    else if(obj == (QObject*)ui->pushButton_3)
    {
        if (event->type() == QEvent::Enter)
        {


            //this->setStyleSheet("background:url(:/img/img/Sans titre-6.png)");


            QPixmap pixmap(":/resources/img/1weblight.png");
            ui->label->setPixmap(pixmap);
            ui->label->setMask(pixmap.mask());

            ui->label->show();
        }
       // return true;
        else if(event->type() == QEvent::Leave)
        {
            //this->setStyleSheet("background:url(:/img/img/Sans titre-1.png)");

            QPixmap pixmap2(":/resources/img/1nolight.png");
            ui->label->setPixmap(pixmap2);
            ui->label->setMask(pixmap2.mask());

            ui->label->show();
        }
    }

    else if(obj == (QObject*)ui->pushButton_4)
    {
        if (event->type() == QEvent::Enter)
        {


            //this->setStyleSheet("background:url(:/img/img/Sans titre-6.png)");


            QPixmap pixmap(":/resources/img/1fblight.png");
            ui->label->setPixmap(pixmap);
            ui->label->setMask(pixmap.mask());

            ui->label->show();
        }
       // return true;
        else if(event->type() == QEvent::Leave)
        {
            //this->setStyleSheet("background:url(:/img/img/Sans titre-1.png)");

            QPixmap pixmap2(":/resources/img/1nolight.png");
            ui->label->setPixmap(pixmap2);
            ui->label->setMask(pixmap2.mask());

            ui->label->show();
        }
    }

    else {
        // pass the event on to the parent class
        return QWidget::eventFilter(obj, event);
    }
}



void Dialog_basic::on_pushButton_3_clicked()
{
    QDesktopServices::openUrl(QUrl("https://www.tunisietelecom.tn/", QUrl::TolerantMode));
}

void Dialog_basic::on_pushButton_4_clicked()
{
    QDesktopServices::openUrl(QUrl("https://www.facebook.com/TunisieTelecom/", QUrl::TolerantMode));
}
