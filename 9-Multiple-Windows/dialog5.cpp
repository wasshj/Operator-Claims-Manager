#include "dialog5.h"
#include "ui_dialog5.h"
#include"dialog2.h"
#include<QMessageBox>
#include<QFile>
#include<QTextStream>

Dialog5::Dialog5(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog5)
{
    ui->setupUi(this);
    this->setFixedSize(this->width(),this->height());

}

Dialog5::~Dialog5()
{
    delete ui;
}

void Dialog5::remplir(int r)
{
   Dialog2 d1;
    //ui->lineEdit->setText(d1.getElementByRownAndColumn(r,0)->text());
      //ui->lineEdit->setText("test ");
      ui->lineEdit->setText(d1.getElementByRownAndColumn_ca(r,0)->text()); //titre
      ui->lineEdit_2->setText(d1.getElementByRownAndColumn_ca(r,1)->text()); //IP
      //ui->comboBox->setCurrentIndex(2);
      ui->comboBox->setCurrentIndex(d1.getComoboIndex_ca(r));
      ui->lineEdit_3->setText(d1.getElementByRownAndColumn_ca(r,3)->text()); //type
      ui->lineEdit_6->setText(d1.getElementByRownAndColumn_ca(r,4)->text()); //ID
      ui->lineEdit_4->setText(d1.getElementByRownAndColumn_ca(r,5)->text()); //Produit
      ui->lineEdit_5->setText(d1.getElementByRownAndColumn_ca(r,6)->text()); //Catégorie
      ui->lineEdit_7->setText(d1.getElementByRownAndColumn_ca(r,7)->text());  //IE
      ui->lineEdit_8->setText(d1.getElementByRownAndColumn_ca(r,8)->text()); // Grp Affectation
      ui->lineEdit_9->setText(d1.getElementByRownAndColumn_ca(r,11)->text()); // Commentaire
      //ui->comboBox_2->setCurrentIndex(d1.getComoboIndex1(r));
      ui->comboBox_2->setCurrentIndex(d1.getComboIndex2_ca(r));
      ui->comboBox_3->setCurrentIndex(d1.getComboIndex3_ca(r));
      //QMessageBox::information(this,"info",QString(d1.getComoboIndex1(r)));
}

void Dialog5::on_pushButton_2_dialog4_clicked()
{
    QFile fca2("C:/Users/WassHj/Documents/Qt projects/9-Multiple-Windows/saveca.txt");
   if(!fca2.open( QFile::ReadOnly))
   {}

   QTextStream inca2(&fca2);

   QFile ftemp4("C:/Users/WassHj/Documents/Qt projects/9-Multiple-Windows/savecnonctemp4.txt");
  if(!ftemp4.open(QFile::WriteOnly|QFile::Text | QIODevice::Append))
  {}


   QTextStream outtemp4(&ftemp4);

    QFile fsave4("C:/Users/WassHj/Documents/Qt projects/9-Multiple-Windows/save.txt");
   if(!fsave4.open(QFile::WriteOnly|QFile::Text | QIODevice::Append))
   {}

   QTextStream outsave4(&fsave4);

   outsave4<<ui->lineEdit->text().replace(" ",".")<<" "<<ui->lineEdit_2->text().replace(" ",".")<<" "<<ui->comboBox->currentText().replace(" ",".")<<" "<<ui->lineEdit_3->text().replace(" ",".")<<" "<<ui->lineEdit_6->text().replace(" ",".")<<" "<<ui->lineEdit_4->text().replace(" ",".")<<" "<<ui->lineEdit_5->text().replace(" ",".")<<" "<<ui->lineEdit_7->text().replace(" ",".")<<" "<<ui->lineEdit_8->text().replace(" ",".")<<" "<<ui->comboBox_2->currentText().replace(" ",".")<<" "<<ui->comboBox_3->currentText().replace(" ",".")<<" "<<ui->lineEdit_9->text().replace(" ",".")<<endl;


   QString s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12;

   fca2.seek(0);
   while(1)
   {
       inca2>>s1>>s2>>s3>>s4>>s5>>s6>>s7>>s8>>s9>>s10>>s11>>s12;

       //if(QString::compare(s5, ui->lineEdit_6->text(), Qt::CaseInsensitive)!=0)
       if(s5 != ui->lineEdit_6->text().replace(" ","."))
           outtemp4<<s1<<" "<<s2<<" "<<s3<<" "<<s4<<" "<<s5<<" "<<s6<<" "<<s7<<" "<<s8<<" "<<s9<<" "<<s10<<" "<<s11<<" "<<s12<<endl;
           //outtemp<<s1<<s2<<s3<<s4<<s5<<s6<<s7<<s8<<endl;

       if(inca2.atEnd())
           break;
   }
   fsave4.close();
   ftemp4.close();
   fca2.remove();
   QFile::rename("C:/Users/WassHj/Documents/Qt projects/9-Multiple-Windows/savecnonctemp4.txt", "C:/Users/WassHj/Documents/Qt projects/9-Multiple-Windows/saveca.txt");

   this->close();

    //Dialog2 dd;
    //dd.setRowOfTableWidget(5);
   fsave4.close();
   ftemp4.close();
   fca2.close();

    QMessageBox::information(this,"info","Réclamation envoyé au CNOC");
}
