#include "adduserinterface.h"
#include "ui_adduserinterface.h"
#include<QFile>
#include<QTextStream>
#include<QMessageBox>
adduserinterface::adduserinterface(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adduserinterface)
{
    ui->setupUi(this);
}

adduserinterface::~adduserinterface()
{
    delete ui;
}

void adduserinterface::on_pushButton_clicked()
{
    QFile fuserslist("C:/Users/WassHj/Documents/Qt projects/9-Multiple-Windows/userslist.txt");
   if(!fuserslist.open(QFile::WriteOnly|QFile::Text | QIODevice::Append))
   {}

    QTextStream outuserslist(&fuserslist);
    if(ui->lineEdit->text()!="" && ui->lineEdit_2->text()==ui->lineEdit_3->text())
    {
        outuserslist<<ui->lineEdit->text()<<" "<<ui->lineEdit_2->text()<<" "<<ui->comboBox->currentText()<<endl;
        QMessageBox::information(this,"Info","User ajouté !");
        ui->lineEdit->clear();ui->lineEdit_2->clear();ui->lineEdit_3->clear();
    }
    else
        QMessageBox::critical(this,"Error","Veuillez vérifier les champs");


}
