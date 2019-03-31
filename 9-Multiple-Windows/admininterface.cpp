#include "admininterface.h"
#include "ui_admininterface.h"
#include<QFile>
#include<QTextStream>


#include<QMessageBox>
admininterface::admininterface(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::admininterface)
{
    ui->setupUi(this);
    this->setFixedSize(this->width(),this->height());
    QFile fusr("C:/Users/WassHj/Documents/Qt projects/9-Multiple-Windows/userslist.txt");
   if(!fusr.open( QFile::ReadOnly))
   {}
   QTextStream inu(&fusr);
   QString su,sp,ss;
   while(1)
   {
       inu>>su>>sp>>ss;
       ui->comboBox->addItem(su);

       if(inu.atEnd())
           break;

   }
   fusr.close();

    if(ui->comboBox->itemText(ui->comboBox->count()-1)=="")
        ui->comboBox->removeItem(ui->comboBox->count()-1);
   //QMessageBox::information(this,"info",ui->comboBox->itemText(1));



}

admininterface::~admininterface()
{
    delete ui;

}

void admininterface::on_pushButton_2_clicked()
{
    adduserinterface usr;
    usr.setModal(true);
    usr.exec();

}


void admininterface::on_pushButton_clicked()
{

if(ui->lineEdit->text()!="" && ui->lineEdit_2->text()!=""&&ui->lineEdit->text()==ui->lineEdit_2->text())
{

    QFile fu("C:/Users/WassHj/Documents/Qt projects/9-Multiple-Windows/userslist.txt");
   if(!fu.open( QFile::ReadOnly))
   {}
   QTextStream inup(&fu);
    QString s1,s2,s3;

    QFile ftemp5("C:/Users/WassHj/Documents/Qt projects/9-Multiple-Windows/userslisttemp5.txt");
   if(!ftemp5.open(QFile::WriteOnly|QFile::Text | QIODevice::Append))
   {}

    QTextStream outtemp5(&ftemp5);

    while(1)
    {
        inup>>s1>>s2>>s3;
        if(s1==ui->comboBox->currentText())
            outtemp5<<s1<<" "<<ui->lineEdit_2->text()<<" "<<s3<<endl;
        else
            outtemp5<<s1<<" "<<s2<<" "<<s3<<endl;

        if(inup.atEnd())
            break;

    }
    fu.close();
    ftemp5.close();
    fu.remove();
    QFile::rename("C:/Users/WassHj/Documents/Qt projects/9-Multiple-Windows/userslisttemp5.txt", "C:/Users/WassHj/Documents/Qt projects/9-Multiple-Windows/userslist.txt");

    QMessageBox::information(this,"Info","Pass changé avec succès");
}

else
{
    QMessageBox::critical(this,"Erreur","Verifier les chanmps!");
}


}
