#include "dialog3.h"
#include "ui_dialog3.h"
#include"dialog2.h"
#include<QFile>
#include<QTextStream>
#include<QMessageBox>
#include<string>
using namespace std;

Dialog3::Dialog3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog3)
{
    ui->setupUi(this);
    this->setFixedSize(this->width(),this->height());
    Dialog2 d;
//    ui->lineEdit->setText(d->lineEdit_8->text());
    //ui->lineEdit->setText(d.getElementByRownAndColumn(0,0)->text());
//    ui->groupBox->setStyleSheet("border:0;");
//    ui->groupBox_2->setStyleSheet("border:0;");

    //*************TO DO NEXT
    // determiner n (copy code)
    QFile f("C:/Users/WassHj/Documents/Qt projects/9-Multiple-Windows/save.txt");
   if(!f.open( QFile::ReadOnly))
   {}
    QTextStream in(&f);
    int n=0;
    QString line[100];
    while(1)
   {
    //in>>c;
    in.readLine();
    n++;
    if(in.atEnd())
       break;

   }
//    for(int i=0;i<n;i++)
//        {
//            ui->lineEdit->setText(d.getElementByRownAndColumn(i,0)->text()); //titre
//            ui->lineEdit_2->setText(d.getElementByRownAndColumn(i,1)->text()); //IP
//            ui->lineEdit_3->setText(d.getElementByRownAndColumn(i,3)->text()); //type
//            ui->lineEdit_4->setText(d.getElementByRownAndColumn(i,5)->text()); //Produit
//            ui->lineEdit_5->setText(d.getElementByRownAndColumn(i,6)->text()); //Catégorie
//            ui->lineEdit_6->setText(d.getElementByRownAndColumn(i,4)->text()); //ID
//            ui->lineEdit_7->setText(d.getElementByRownAndColumn(i,7)->text());  //IE
//        }
//    int i=0;
//                ui->lineEdit->setText(d.getElementByRownAndColumn(i,0)->text()); //titre
//                ui->lineEdit_2->setText(d.getElementByRownAndColumn(i,1)->text()); //IP
//                ui->lineEdit_3->setText(d.getElementByRownAndColumn(i,3)->text()); //type
//                ui->lineEdit_4->setText(d.getElementByRownAndColumn(i,5)->text()); //Produit
//                ui->lineEdit_5->setText(d.getElementByRownAndColumn(i,6)->text()); //Catégorie
//                ui->lineEdit_6->setText(d.getElementByRownAndColumn(i,4)->text()); //ID
//                ui->lineEdit_7->setText(d.getElementByRownAndColumn(i,7)->text());  //IE


    // boucle pour remplir tous les elements de dialog3.ui
    //remplir();

    QString s="Button clicked";

//    connect(ui->comboBox,SIGNAL(currentIndexChanged(2)),
//            this,SLOT(showamessage(s)));
//    connect(ui->comboBox, QOverload<int>::of(&QComboBox::currentIndexChanged),
//        [=](int index){ if(index==2)QMessageBox::information(this,"Info",s); });



        connect(ui->comboBox, QOverload<int>::of(&QComboBox::currentIndexChanged),
            [=](int index){ if(index==2 && this->isVisible() )changeStateToWainting(); });


//void Dialog3::showamessage(const QString& s)
//{
//    QMessageBox::information(this,"Info",s);
//}

}

void Dialog3::changeStateToWainting()
{
    QFile fstate("C:/Users/WassHj/Documents/Qt projects/9-Multiple-Windows/save.txt");
   if(!fstate.open( QFile::ReadOnly))
   {}
   QTextStream instate(&fstate);

   QFile ftempstate("C:/Users/WassHj/Documents/Qt projects/9-Multiple-Windows/savetempstate.txt");
  if(!ftempstate.open(QFile::WriteOnly|QFile::Text | QIODevice::Append))
  {}

   QTextStream outtempstate(&ftempstate);

   QString s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12;

   ftempstate.seek(0);
   while(1)
   {
       instate>>s1>>s2>>s3>>s4>>s5>>s6>>s7>>s8>>s9>>s10>>s11>>s12;

       //if(QString::compare(s5, ui->lineEdit_6->text(), Qt::CaseInsensitive)!=0)
       if(s5 == ui->lineEdit_6->text().replace(" ","."))
           outtempstate<<s1<<" "<<s2<<" "<<ui->comboBox->currentText().replace(" ",".")<<" "<<s4<<" "<<s5<<" "<<s6<<" "<<s7<<" "<<s8<<" "<<s9<<" "<<s10<<" "<<s11<<" "<<s12<<endl;
           //outtemp<<s1<<s2<<s3<<s4<<s5<<s6<<s7<<s8<<endl;
        else
           outtempstate<<s1<<" "<<s2<<" "<<s3<<" "<<s4<<" "<<s5<<" "<<s6<<" "<<s7<<" "<<s8<<" "<<s9<<" "<<s10<<" "<<s11<<" "<<s12<<endl;


       if(instate.atEnd())
           break;
   }
   fstate.close();
   ftempstate.close();
   fstate.remove();
   QFile::rename("C:/Users/WassHj/Documents/Qt projects/9-Multiple-Windows/savetempstate.txt", "C:/Users/WassHj/Documents/Qt projects/9-Multiple-Windows/save.txt");

   QMessageBox::information(this,"Info","Etat changé avec succès");
   this->close();

}

Dialog3::~Dialog3()
{
    delete ui;



}

void Dialog3::remplir(int r)
{
   Dialog2 d1;
    //ui->lineEdit->setText(d1.getElementByRownAndColumn(r,0)->text());
      //ui->lineEdit->setText("test ");
      ui->lineEdit->setText(d1.getElementByRownAndColumn(r,0)->text()); //titre
      ui->lineEdit_2->setText(d1.getElementByRownAndColumn(r,1)->text()); //IP
      //ui->comboBox->setCurrentIndex(2);
      ui->comboBox->setCurrentIndex(d1.getComoboIndex(r));
      ui->lineEdit_3->setText(d1.getElementByRownAndColumn(r,3)->text()); //type
      ui->lineEdit_6->setText(d1.getElementByRownAndColumn(r,4)->text()); //ID
      ui->lineEdit_4->setText(d1.getElementByRownAndColumn(r,5)->text()); //Produit
      ui->lineEdit_5->setText(d1.getElementByRownAndColumn(r,6)->text()); //Catégorie
      ui->lineEdit_7->setText(d1.getElementByRownAndColumn(r,7)->text());  //IE
      ui->comboBox_2->setCurrentIndex(d1.getComboIndex2(r)); //Grp d'affec
      ui->comboBox_3->setCurrentIndex(d1.getComboIndex3(r));
      ui->lineEdit_9->setText(d1.getElementByRownAndColumn(r,11)->text()); // Commentaire

}


void Dialog3::on_pushButton_2_clicked()
{

    QFile f("C:/Users/WassHj/Documents/Qt projects/9-Multiple-Windows/save.txt");
   if(!f.open( QFile::ReadOnly))
   {}

   QTextStream in(&f);

   QFile ftemp("C:/Users/WassHj/Documents/Qt projects/9-Multiple-Windows/savecnonctemp.txt");
  if(!ftemp.open(QFile::WriteOnly|QFile::Text | QIODevice::Append))
  {}


   QTextStream outtemp(&ftemp);

    QFile f1("C:/Users/WassHj/Documents/Qt projects/9-Multiple-Windows/saveue.txt");
   if(!f1.open(QFile::WriteOnly|QFile::Text | QIODevice::Append))
   {}

   QTextStream out(&f1);

   out<<ui->lineEdit->text().replace(" ",".")<<" "<<ui->lineEdit_2->text().replace(" ",".")<<" "<<ui->comboBox->currentText().replace(" ",".")<<" "<<ui->lineEdit_3->text().replace(" ",".")<<" "<<ui->lineEdit_6->text().replace(" ",".")<<" "<<ui->lineEdit_4->text().replace(" ",".")<<" "<<ui->lineEdit_5->text().replace(" ",".")<<" "<<ui->lineEdit_7->text().replace(" ",".")<<" "<<ui->lineEdit_8->text().replace(" ",".")<<" "<<ui->comboBox_2->currentText().replace(" ",".")<<" "<<ui->comboBox_3->currentText().replace(" ",".")<<" "<<ui->lineEdit_9->text().replace(" ",".")<<endl;

   QMessageBox::information(this,"Info","Réclamation Envoyé a l'UE avec succés");

   QString s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12;

   f.seek(0);
   while(1)
   {
       in>>s1>>s2>>s3>>s4>>s5>>s6>>s7>>s8>>s9>>s10>>s11>>s12;

       //if(QString::compare(s5, ui->lineEdit_6->text(), Qt::CaseInsensitive)!=0)
       if(s5 != ui->lineEdit_6->text().replace(" ","."))
           outtemp<<s1<<" "<<s2<<" "<<s3<<" "<<s4<<" "<<s5<<" "<<s6<<" "<<s7<<" "<<s8<<" "<<s9<<" "<<s10<<" "<<s11<<" "<<s12<<endl;
           //outtemp<<s1<<s2<<s3<<s4<<s5<<s6<<s7<<s8<<endl;

       if(in.atEnd())
           break;
   }
   f.close();
   ftemp.close();
   f.remove();
   QFile::rename("C:/Users/WassHj/Documents/Qt projects/9-Multiple-Windows/savecnonctemp.txt", "C:/Users/WassHj/Documents/Qt projects/9-Multiple-Windows/save.txt");

   this->close();

    //Dialog2 dd;
    //dd.setRowOfTableWidget(5);
   f.close();
   ftemp.close();
   f1.close();

//   this->hide();
//   Dialog2 *dforupdate;
//   dforupdate->update_table_cnonc();
//   this->show();

   // ************************ BD

}

void Dialog3::on_pushButton_clicked()
{
    if(ui->comboBox->currentIndex()!=1)
        QMessageBox::critical(this,"Error","Etat non valide !");
    else
    {

    QFile fsave("C:/Users/WassHj/Documents/Qt projects/9-Multiple-Windows/save.txt");
   if(!fsave.open( QFile::ReadOnly))
   {}

   QTextStream in1(&fsave);

   QFile ftemp1("C:/Users/WassHj/Documents/Qt projects/9-Multiple-Windows/savecnonctemp1.txt");
  if(!ftemp1.open(QFile::WriteOnly|QFile::Text | QIODevice::Append))
  {}

   QTextStream outtemp1(&ftemp1);

   QFile fca("C:/Users/WassHj/Documents/Qt projects/9-Multiple-Windows/saveca.txt");
  if(!fca.open(QFile::WriteOnly|QFile::Text | QIODevice::Append))
  {}

  QTextStream out1(&fca);

  out1<<ui->lineEdit->text().replace(" ",".")<<" "<<ui->lineEdit_2->text().replace(" ",".")<<" "<<ui->comboBox->currentText().replace(" ",".")<<" "<<ui->lineEdit_3->text().replace(" ",".")<<" "<<ui->lineEdit_6->text().replace(" ",".")<<" "<<ui->lineEdit_4->text().replace(" ",".")<<" "<<ui->lineEdit_5->text().replace(" ",".")<<" "<<ui->lineEdit_7->text().replace(" ",".")<<" "<<ui->lineEdit_8->text().replace(" ",".")<<" "<<ui->comboBox_2->currentText().replace(" ",".")<<" "<<ui->comboBox_3->currentText().replace(" ",".")<<" "<<ui->lineEdit_9->text().replace(" ",".")<<endl;
  QMessageBox::information(this,"Info","Réclamation Envoyé au CA avec succés");

  QString s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12;

  while(1)
  {
      in1>>s1>>s2>>s3>>s4>>s5>>s6>>s7>>s8>>s9>>s10>>s11>>s12;

      if(s5 != ui->lineEdit_6->text().replace(" ","."))
          outtemp1<<s1<<" "<<s2<<" "<<s3<<" "<<s4<<" "<<s5<<" "<<s6<<" "<<s7<<" "<<s8<<" "<<s9<<" "<<s10<<" "<<s11<<" "<<s12<<endl;

      if(in1.atEnd())
          break;
  }

  fsave.close();
  ftemp1.close();
  fsave.remove();
  QFile::rename("C:/Users/WassHj/Documents/Qt projects/9-Multiple-Windows/savecnonctemp1.txt", "C:/Users/WassHj/Documents/Qt projects/9-Multiple-Windows/save.txt");

  this->close();

   //Dialog2 dd;
   //dd.setRowOfTableWidget(5);
  fsave.close();
  ftemp1.close();
  fca.close();

    }

//  this->hide();
//  Dialog2 *dforupdate1;
//  dforupdate1->update_table_cnonc();
//  this->show();

}
