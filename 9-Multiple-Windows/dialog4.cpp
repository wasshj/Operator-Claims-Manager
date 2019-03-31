#include "dialog4.h"
#include "ui_dialog4.h"
#include<QFile>
#include<QTextStream>
#include<QMessageBox>
#include"dialog2.h"

Dialog4::Dialog4(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog4)
{
    ui->setupUi(this);
}

Dialog4::~Dialog4()
{
    delete ui;
}

void Dialog4::remplir(int r)
{
   Dialog2 d1;
    //ui->lineEdit->setText(d1.getElementByRownAndColumn(r,0)->text());
      //ui->lineEdit->setText("test ");
      ui->lineEdit->setText(d1.getElementByRownAndColumn_ue(r,0)->text()); //titre
      ui->lineEdit_2->setText(d1.getElementByRownAndColumn_ue(r,1)->text()); //IP
      //ui->comboBox->setCurrentIndex(2);
      ui->comboBox->setCurrentIndex(d1.getComoboIndex_ue(r));
      ui->lineEdit_3->setText(d1.getElementByRownAndColumn_ue(r,3)->text()); //type
      ui->lineEdit_6->setText(d1.getElementByRownAndColumn_ue(r,4)->text()); //ID
      ui->lineEdit_4->setText(d1.getElementByRownAndColumn_ue(r,5)->text()); //Produit
      ui->lineEdit_5->setText(d1.getElementByRownAndColumn_ue(r,6)->text()); //Catégorie
      ui->lineEdit_7->setText(d1.getElementByRownAndColumn_ue(r,7)->text());  //IE
      ui->lineEdit_8->setText(d1.getElementByRownAndColumn_ue(r,8)->text()); // Grp Affectation
      ui->lineEdit_9->setText(d1.getElementByRownAndColumn_ue(r,11)->text()); // Commentaire
      //ui->comboBox_2->setCurrentIndex(d1.getComoboIndex1(r));
      ui->comboBox_2->setCurrentIndex(d1.getComboIndex2_ue(r));
      ui->comboBox_3->setCurrentIndex(d1.getComboIndex3_ue(r));
      //QMessageBox::information(this,"info",QString(d1.getComoboIndex1(r)));
}

void Dialog4::on_pushButton_2_dialog4_clicked()
{
    if(ui->comboBox->currentIndex()!=1)
        QMessageBox::critical(this,"Error","Etat non valide");
    else
    {

    QFile fue("C:/Users/WassHj/Documents/Qt projects/9-Multiple-Windows/saveue.txt");
   if(!fue.open( QFile::ReadOnly))
   {}

   QTextStream in(&fue);

   QFile ftemp2("C:/Users/WassHj/Documents/Qt projects/9-Multiple-Windows/savecnonctemp2.txt");
  if(!ftemp2.open(QFile::WriteOnly|QFile::Text | QIODevice::Append))
  {}


   QTextStream outtemp2(&ftemp2);

    QFile fsave1("C:/Users/WassHj/Documents/Qt projects/9-Multiple-Windows/save.txt");
   if(!fsave1.open(QFile::WriteOnly|QFile::Text | QIODevice::Append))
   {}

   QTextStream outsave1(&fsave1);

   outsave1<<ui->lineEdit->text().replace(" ",".")<<" "<<ui->lineEdit_2->text().replace(" ",".")<<" "<<ui->comboBox->currentText().replace(" ",".")<<" "<<ui->lineEdit_3->text().replace(" ",".")<<" "<<ui->lineEdit_6->text().replace(" ",".")<<" "<<ui->lineEdit_4->text().replace(" ",".")<<" "<<ui->lineEdit_5->text().replace(" ",".")<<" "<<ui->lineEdit_7->text().replace(" ",".")<<" "<<ui->lineEdit_8->text().replace(" ",".")<<" "<<ui->comboBox_2->currentText().replace(" ",".")<<" "<<ui->comboBox_3->currentText().replace(" ",".")<<" "<<ui->lineEdit_9->text().replace(" ",".")<<endl;
   QMessageBox::information(this,"Info","Réclamation renvoyé a CNOC avec succés");

   QString s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12;

   fue.seek(0);
   while(1)
   {
       in>>s1>>s2>>s3>>s4>>s5>>s6>>s7>>s8>>s9>>s10>>s11>>s12;

       //if(QString::compare(s5, ui->lineEdit_6->text(), Qt::CaseInsensitive)!=0)
       if(s5 != ui->lineEdit_6->text().replace(" ","."))
           outtemp2<<s1<<" "<<s2<<" "<<s3<<" "<<s4<<" "<<s5<<" "<<s6<<" "<<s7<<" "<<s8<<" "<<s9<<" "<<s10<<" "<<s11<<" "<<s12<<endl;
           //outtemp<<s1<<s2<<s3<<s4<<s5<<s6<<s7<<s8<<endl;

       if(in.atEnd())
           break;
   }
   fsave1.close();
   ftemp2.close();
   fue.remove();
   QFile::rename("C:/Users/WassHj/Documents/Qt projects/9-Multiple-Windows/savecnonctemp2.txt", "C:/Users/WassHj/Documents/Qt projects/9-Multiple-Windows/saveue.txt");

   this->close();

    //Dialog2 dd;
    //dd.setRowOfTableWidget(5);
   fsave1.close();
   ftemp2.close();
   fue.close();


    }
   //QMessageBox::information(this,"info","Réclamation renovyé au CNOC avec succès");
//    Dialog2 *dup;
//    dup->update_table_cnonc();


}
