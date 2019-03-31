#include "dialog2.h"
#include "ui_dialog2.h"
#include"dialog3.h"
#include"horiz.h"
#include<QTextStream>
#include<QFile>
#include"QMessageBox"
#include<QTableWidget>
#include"icon.h"
#include"dialog_basic.h"

void Dialog2::update_table_cnonc()
{

    QFile fupdate("C:/Users/WassHj/Documents/Qt projects/9-Multiple-Windows/save.txt");
   if(!fupdate.open( QFile::ReadOnly))
   {}
    QTextStream inupdate(&fupdate);
    int nupdate=0;
    QString line[100];
    fupdate.seek(0);
    while(1)
   {
    //in>>c;
    inupdate.readLine();
    nupdate++;
    if(inupdate.atEnd())
       break;

   }
   QString s = QString::number(nupdate);
    //QMessageBox::information(this,"n",s);


    ui->tableWidget->setRowCount(nupdate);
    fupdate.seek(0);

    QString s1;
//    in>>s1;
//    ui->tableWidget->setItem(0, 0, new QTableWidgetItem(s1));
//    in>>s1;
//    ui->tableWidget->setItem(0, 1, new QTableWidgetItem(s1));
    while(1)
    {
        for(int i=0;i<nupdate;i++)
        {
            if(i==nupdate)
                break;
            for(int j=0;j<12;j++)
            {

                inupdate>>s1;
                s1.replace("."," ");
//                if(s1!="En attente")
                ui->tableWidget->setItem(i, j, new QTableWidgetItem(s1));
//                else
//                ui->tableWidget->setItem(i, j, new QTableWidgetItem("En attente"));
            }
//            QString imgPath = ":/resources/img/settings.png";
//            QImage *img = new QImage(imgPath);
//            QTableWidgetItem *thumbnail = new QTableWidgetItem;
//            thumbnail->setData(Qt::DecorationRole, QPixmap::fromImage(*img).scaled(16, 16));
//            ui->tableWidget->setItem(i, 8,thumbnail);
            /*Icon *w=new Icon;
           ui->tableWidget->setCellWidget(i, 9, w)*/;

            QPixmap pix(":/resources/img/settings.png");
            QPixmap resPix = pix.scaled(20,20, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
            QLabel *lblTest = new QLabel;
            lblTest->setPixmap(resPix);
            lblTest->setAlignment(Qt::AlignCenter);
            ui->tableWidget->setCellWidget(i,12, lblTest);
        }

        //ui->tableWidget->setRowCount(n-1);

    break;

//        int i=0;
//        in>>s1;
//       if(in.atEnd())
//            break;
//        ui->tableWidget->setItem(0, i, new QTableWidgetItem(s1));
//        i++;




    }

    if(ui->tableWidget->item(ui->tableWidget->rowCount()-1,0)->text()=="")
        ui->tableWidget->setRowCount(ui->tableWidget->rowCount()-1);
}

void Dialog2::update_table_ca()
{
    QFile fcaupdate("C:/Users/WassHj/Documents/Qt projects/9-Multiple-Windows/saveca.txt");
   if(!fcaupdate.open( QFile::ReadOnly))
   {}
    QTextStream incaupdate(&fcaupdate);
    int ncaupdate=0;
    //QString line[100];
    fcaupdate.seek(0);
    while(1)

   {
    //in>>c;
    incaupdate.readLine();
    ncaupdate++;
    if(incaupdate.atEnd())
       break;

   }
   QString sca = QString::number(ncaupdate);
    //QMessageBox::information(this,"n",s);


    ui->tableWidget_2->setRowCount(ncaupdate);
    fcaupdate.seek(0);

    QString s1ca;

    while(1)
    {
        for(int i=0;i<ncaupdate;i++)
        {
            if(i==ncaupdate)
                break;
            for(int j=0;j<12;j++)
            {

                incaupdate>>s1ca;
                s1ca.replace("."," ");
                ui->tableWidget_2->setItem(i, j, new QTableWidgetItem(s1ca));

            }

            QPixmap pix(":/resources/img/settings.png");
            QPixmap resPix = pix.scaled(20,20, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
            QLabel *lblTest = new QLabel;
            lblTest->setPixmap(resPix);
            lblTest->setAlignment(Qt::AlignCenter);
            ui->tableWidget_2->setCellWidget(i,12, lblTest);

            QPixmap pix1(":/resources/img/delete.png");
            QPixmap resPix1 = pix1.scaled(20,20, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
            QLabel *lblTest1 = new QLabel;
            lblTest1->setPixmap(resPix1);
            lblTest1->setAlignment(Qt::AlignCenter);
            ui->tableWidget_2->setCellWidget(i,13, lblTest1);
        }


    break;

    }

    if(ui->tableWidget_2->item(ui->tableWidget_2->rowCount()-1,0)->text()=="")
        ui->tableWidget_2->setRowCount(ui->tableWidget_2->rowCount()-1);
}

void Dialog2::update_table_ue()
{

    QFile fueupdate("C:/Users/WassHj/Documents/Qt projects/9-Multiple-Windows/saveue.txt");
   if(!fueupdate.open( QFile::ReadOnly))
   {}
    QTextStream inue(&fueupdate);
    int nueupdate=0;
    //QString line[100];
    fueupdate.seek(0);
    while(1)
   {
    //in>>c;
    inue.readLine();
    nueupdate++;
    if(inue.atEnd())
       break;

   }
   QString sue = QString::number(nueupdate);
    //QMessageBox::information(this,"n",s);


    ui->tableWidget_3->setRowCount(nueupdate);
    fueupdate.seek(0);

    QString s1ue;

    while(1)
    {
        for(int i=0;i<nueupdate;i++)
        {
            if(i==nueupdate)
                break;
            for(int j=0;j<12;j++)
            {

                inue>>s1ue;
                s1ue.replace("."," ");
                ui->tableWidget_3->setItem(i, j, new QTableWidgetItem(s1ue));

            }

            QPixmap pix(":/resources/img/settings.png");
            QPixmap resPix = pix.scaled(20,20, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
            QLabel *lblTest = new QLabel;
            lblTest->setPixmap(resPix);
            lblTest->setAlignment(Qt::AlignCenter);
            ui->tableWidget_3->setCellWidget(i,12, lblTest);
        }


    break;

    }

    if(ui->tableWidget_3->item(ui->tableWidget_3->rowCount()-1,0)->text()=="")
        ui->tableWidget_3->setRowCount(ui->tableWidget_3->rowCount()-1);

}

void Dialog2::setRowOfTableWidget(int n)
{
    ui->tableWidget->setRowCount(n-1);
}




Dialog2::Dialog2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog2)
{
    ui->setupUi(this);
    this->setFixedSize(this->width(),this->height());
    //ui->tabWidget->setStyleSheet("background-image: url(:/resources/img/2560x1440-dark-midnight-blue-solid-color-background.jpg)");
    ui->tabWidget->tabBar()->setStyle(new CustomTabStyle);

    ui->tabWidget->setStyleSheet("QTabBar::tab { height: 200px; width: 50px; }");

    ui->tabWidget->setTabIcon(0,QIcon(":/resources/img/user.png"));
    ui->tabWidget->setTabIcon(1,QIcon(":/resources/img/send.png"));
    ui->tabWidget->setTabIcon(2,QIcon(":/resources/img/inbox.png"));
    ui->tabWidget->setTabIcon(3,QIcon(":/resources/img/construction.png"));

    //ui->tabWidget->setStyleSheet("background-color:gray;");
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_3->setEditTriggers(QAbstractItemView::NoEditTriggers);



   // ui->tableWidget->setColumnCount(3);

    // **************************CNOC Window***********************************

    QFile f("C:/Users/WassHj/Documents/Qt projects/9-Multiple-Windows/save.txt");
   if(!f.open( QFile::ReadOnly))
   {}
    QTextStream in(&f);
    int n=0;
    QString line[100];
    f.seek(0);
    while(1)
   {
    //in>>c;
    in.readLine();
    n++;
    if(in.atEnd())
       break;

   }
   QString s = QString::number(n);
    //QMessageBox::information(this,"n",s);


    ui->tableWidget->setRowCount(n);
    f.seek(0);

    QString s1;
//    in>>s1;
//    ui->tableWidget->setItem(0, 0, new QTableWidgetItem(s1));
//    in>>s1;
//    ui->tableWidget->setItem(0, 1, new QTableWidgetItem(s1));
    while(1)
    {
        for(int i=0;i<n;i++)
        {
            if(i==n)
                break;
            for(int j=0;j<12;j++)
            {

                in>>s1;
                s1.replace("."," ");
//                if(s1!="En attente")
                ui->tableWidget->setItem(i, j, new QTableWidgetItem(s1));
//                else
//                ui->tableWidget->setItem(i, j, new QTableWidgetItem("En attente"));
            }
//            QString imgPath = ":/resources/img/settings.png";
//            QImage *img = new QImage(imgPath);
//            QTableWidgetItem *thumbnail = new QTableWidgetItem;
//            thumbnail->setData(Qt::DecorationRole, QPixmap::fromImage(*img).scaled(16, 16));
//            ui->tableWidget->setItem(i, 8,thumbnail);
            /*Icon *w=new Icon;
           ui->tableWidget->setCellWidget(i, 9, w)*/;

            QPixmap pix(":/resources/img/settings.png");
            QPixmap resPix = pix.scaled(20,20, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
            QLabel *lblTest = new QLabel;
            lblTest->setPixmap(resPix);
            lblTest->setAlignment(Qt::AlignCenter);
            ui->tableWidget->setCellWidget(i,12, lblTest);
        }

        //ui->tableWidget->setRowCount(n-1);

    break;

//        int i=0;
//        in>>s1;
//       if(in.atEnd())
//            break;
//        ui->tableWidget->setItem(0, i, new QTableWidgetItem(s1));
//        i++;


    }

    if(ui->tableWidget->item(ui->tableWidget->rowCount()-1,0)->text()=="")
        ui->tableWidget->setRowCount(ui->tableWidget->rowCount()-1);


//    QString imgPath = ":/resources/img/settings.png";
//    QImage *img = new QImage(imgPath);
//    QTableWidgetItem *thumbnail = new QTableWidgetItem;
//    thumbnail->setData(Qt::DecorationRole, QPixmap::fromImage(*img).scaled(35, 35));
//    ui->tableWidget->setItem(0, 8, thumbnail);


    // *************************** CA Window ***************************************

    QFile fca("C:/Users/WassHj/Documents/Qt projects/9-Multiple-Windows/saveca.txt");
   if(!fca.open( QFile::ReadOnly))
   {}
    QTextStream inca(&fca);
    int nca=0;
    //QString line[100];
    fca.seek(0);
    while(1)

   {
    //in>>c;
    inca.readLine();
    nca++;
    if(inca.atEnd())
       break;

   }
   QString sca = QString::number(nca);
    //QMessageBox::information(this,"n",s);


    ui->tableWidget_2->setRowCount(nca);
    fca.seek(0);

    QString s1ca;

    while(1)
    {
        for(int i=0;i<nca;i++)
        {
            if(i==nca)
                break;
            for(int j=0;j<12;j++)
            {

                inca>>s1ca;
                s1ca.replace("."," ");
                ui->tableWidget_2->setItem(i, j, new QTableWidgetItem(s1ca));

            }

            QPixmap pix(":/resources/img/settings.png");
            QPixmap resPix = pix.scaled(20,20, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
            QLabel *lblTest = new QLabel;
            lblTest->setPixmap(resPix);
            lblTest->setAlignment(Qt::AlignCenter);
            ui->tableWidget_2->setCellWidget(i,12, lblTest);

            QPixmap pix1(":/resources/img/delete.png");
            QPixmap resPix1 = pix1.scaled(20,20, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
            QLabel *lblTest1 = new QLabel;
            lblTest1->setPixmap(resPix1);
            lblTest1->setAlignment(Qt::AlignCenter);
            ui->tableWidget_2->setCellWidget(i,13, lblTest1);
        }


    break;

    }

    if(ui->tableWidget_2->item(ui->tableWidget_2->rowCount()-1,0)->text()=="")
        ui->tableWidget_2->setRowCount(ui->tableWidget_2->rowCount()-1);


    // *************************** UE Window ***************************************

    QFile fue("C:/Users/WassHj/Documents/Qt projects/9-Multiple-Windows/saveue.txt");
   if(!fue.open( QFile::ReadOnly))
   {}
    QTextStream inue(&fue);
    int nue=0;
    //QString line[100];
    fue.seek(0);
    while(1)
   {
    //in>>c;
    inue.readLine();
    nue++;
    if(inue.atEnd())
       break;

   }
   QString sue = QString::number(nue);
    //QMessageBox::information(this,"n",s);


    ui->tableWidget_3->setRowCount(nue);
    fue.seek(0);

    QString s1ue;

    while(1)
    {
        for(int i=0;i<nue;i++)
        {
            if(i==nue)
                break;
            for(int j=0;j<12;j++)
            {

                inue>>s1ue;
                s1ue.replace("."," ");
                ui->tableWidget_3->setItem(i, j, new QTableWidgetItem(s1ue));

            }

            QPixmap pix(":/resources/img/settings.png");
            QPixmap resPix = pix.scaled(20,20, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
            QLabel *lblTest = new QLabel;
            lblTest->setPixmap(resPix);
            lblTest->setAlignment(Qt::AlignCenter);
            ui->tableWidget_3->setCellWidget(i,12, lblTest);
        }


    break;

    }

    if(ui->tableWidget_3->item(ui->tableWidget_3->rowCount()-1,0)->text()=="")
        ui->tableWidget_3->setRowCount(ui->tableWidget_3->rowCount()-1);

//    Dialog d11;
//    ui->lineEdit_11->text()=d11.user();
//    ui->lineEdit_12->text()=d11.pass();

    QString suser,spass,sservice;
    QFile fuserpass("C:/Users/WassHj/Documents/Qt projects/9-Multiple-Windows/instantuserandpass.txt");
   if(!fuserpass.open( QFile::ReadOnly))
   {}

   QTextStream inuserpass(&fuserpass);
   inuserpass>>suser>>spass>>sservice;
   fuserpass.close();
   ui->lineEdit->setText(suser);

   if(sservice=="ADMIN"){
       ui->tabWidget->removeTab(0);
   }
   if(sservice=="CA")
      {
       ui->tabWidget->removeTab(3);
       ui->tabWidget->removeTab(2);

        }
   else if(sservice=="CNOC")
    {
    ui->tabWidget->removeTab(3);
    ui->tabWidget->removeTab(1);

    }
   else
      if(sservice=="UE")
    {
    ui->tabWidget->removeTab(2);
    ui->tabWidget->removeTab(1);

    }

   //update_table_ca();
   //update_table_cnonc();
   //update_table_ue();


   connect(ui->comboBox,SIGNAL(activated(int)),this,SLOT(clickedaction(int)));



}

void Dialog2::clickedaction(int a)
{
    if(a==2)
        QMessageBox::information(this,"info","info");
}

Dialog2::~Dialog2()
{
    delete ui;
}

void Dialog2::on_pushButton_2_clicked()
{
    QFile f("C:/Users/WassHj/Documents/Qt projects/9-Multiple-Windows/save.txt");
   if(!f.open(QFile::WriteOnly|QFile::Text | QIODevice::Append))
   {}
   // QString text=ui->lineEdit->text();
    QTextStream out(&f);
    QString stitre=ui->lineEdit_10->text();
    QString sip=ui->lineEdit_7->text();
    QString setat=ui->comboBox->currentText();
    QString stype=ui->lineEdit_8->text();
    QString sid=ui->lineEdit_5->text();
    QString sproduit=ui->lineEdit_4->text();
    QString scategorie=ui->lineEdit_6->text();
    QString sue=ui->lineEdit_9->text();

    stitre.replace(" ",".");
    sip.replace(" ",".");
    setat.replace(" ",".");
    stype.replace(" ",".");
    sid.replace(" ",".");
    sproduit.replace(" ",".");
    scategorie.replace(" ",".");
    sue.replace(" ",".");

    out<<stitre<<" "<<sip<<" "<<setat<<" "<<stype<<" "<<sid<<" "<<sproduit<<" "<<scategorie<<" "<<sue<<" "<<"None"<<" "<<"None"<<" "<<"None"<<" "<<"None"<<endl;
    //if(ui->comboBox->currentIndex()!=2)
    //out<<ui->lineEdit_10->text()<<" "<<ui->lineEdit_7->text()<<" "<<ui->comboBox->currentText()<<" "<<ui->lineEdit_8->text()<<" "<<ui->lineEdit_5->text()<<" "<<ui->lineEdit_4->text()<<" "<<ui->lineEdit_6->text()<<" "<<ui->lineEdit_9->text()<<" "<<"None"<<" "<<"None"<<" "<<"None"<<endl;
    //else
    //out<<ui->lineEdit_10->text()<<" "<<ui->lineEdit_7->text()<<" "<<"En.attente"<<" "<<ui->lineEdit_8->text()<<" "<<ui->lineEdit_5->text()<<" "<<ui->lineEdit_4->text()<<" "<<ui->lineEdit_6->text()<<" "<<ui->lineEdit_9->text()<<" "<<"None"<<" "<<"None"<<" "<<"None"<<endl;
    QMessageBox::information(this,"Info","Réclamation envoyée avec succés !");
    f.close();

    ui->lineEdit_4->clear();
    ui->lineEdit_5->clear();
    //ui->lineEdit_6->clear();
    ui->lineEdit_7->clear();
    //ui->lineEdit_9->clear();
    ui->lineEdit_10->clear();

    //ui->tableWidget->viewport()->update();
    update_table_cnonc();

    //***************************BD



}


 QTableWidgetItem* Dialog2::getElementByRownAndColumn(int r,int c)
{

    return ui->tableWidget->item(r,c);

}

 QTableWidgetItem* Dialog2::getElementByRownAndColumn_ue(int r,int c)
{

    return ui->tableWidget_3->item(r,c);

}

 QTableWidgetItem* Dialog2::getElementByRownAndColumn_ca(int r,int c)
{

    return ui->tableWidget_2->item(r,c);

}


void Dialog2::on_tableWidget_cellDoubleClicked(int row, int column)
{
    if(column==12)
    {
        Dialog3 *d333=new Dialog3;
        d333->setModal(true);
        d333->remplir(row);
        d333->exec();



    }
}

int Dialog2::getComoboIndex(int r)
{
    QTableWidgetItem* myItem= ui->tableWidget->item(r,2);
    if(myItem->text()=="Ouvert")
        return 0;
    else if(myItem->text()=="Résolu")
        return 1;
    else
        if(myItem->text()=="En attente")
            return 2;
}

int Dialog2::getComoboIndex_ue(int r)
{
    QTableWidgetItem* myItem= ui->tableWidget_3->item(r,2);
    if(myItem->text()=="Ouvert")
        return 0;
    else if(myItem->text()=="Résolu")
        return 1;
    else
        if(myItem->text()=="En attente")
            return 2;

}

int Dialog2::getComoboIndex_ca(int r)
{
    QTableWidgetItem* myItem= ui->tableWidget_2->item(r,2);
    if(myItem->text()=="Ouvert")
        return 0;
    else if(myItem->text()=="Résolu")
        return 1;
    else
        if(myItem->text()=="En attente")
            return 2;

}

int Dialog2::getComboIndex2(int r)
{
    QTableWidgetItem* myItem1= ui->tableWidget->item(r,9);
    if(myItem1->text()=="None")
        return 0;
    else if(myItem1->text()=="Ligne non synchro")
        return 1;
    else if(myItem1->text()=="Acces nécessite bascullement")
            return 2;
    else if(myItem1->text()=="Cablage LAN")
        return 3;
    else if(myItem1->text()=="Switch 2")
        return 4;
    else if(myItem1->text()=="Switch 3")
        return 5;
    else
        if(myItem1->text()=="Wifi acces point")
            return 6;

}

int Dialog2::getComboIndex2_ue(int r)
{
    QTableWidgetItem* myItem1= ui->tableWidget_3->item(r,9);
    if(myItem1->text()=="None")
        return 0;
    else if(myItem1->text()=="Ligne non synchro")
        return 1;
    else if(myItem1->text()=="Acces nécessite bascullement")
            return 2;
    else if(myItem1->text()=="Cablage LAN")
        return 3;
    else if(myItem1->text()=="Switch 2")
        return 4;
    else if(myItem1->text()=="Switch 3")
        return 5;
    else
        if(myItem1->text()=="Wifi acces point")
            return 6;

}

int Dialog2::getComboIndex2_ca(int r)
{
    QTableWidgetItem* myItem1= ui->tableWidget_2->item(r,9);
    if(myItem1->text()=="None")
        return 0;
    else if(myItem1->text()=="Ligne non synchro")
        return 1;
    else if(myItem1->text()=="Acces nécessite bascullement")
            return 2;
    else if(myItem1->text()=="Cablage LAN")
        return 3;
    else if(myItem1->text()=="Switch 2")
        return 4;
    else if(myItem1->text()=="Switch 3")
        return 5;
    else
        if(myItem1->text()=="Wifi acces point")
            return 6;

}

int Dialog2::getComboIndex3(int r)
{
    QTableWidgetItem* myItem1= ui->tableWidget->item(r,10);
    if(myItem1->text()=="None")
        return 0;
    else if(myItem1->text()=="Code Cloture")
        return 1;
    else if(myItem1->text()=="Prob phy resolu")
            return 2;
    else if(myItem1->text()=="Ligne suspendu")
        return 3;
    else if(myItem1->text()=="Prob Client")
        return 4;
    else
        if(myItem1->text()=="Changement Hard")
            return 5;


}

int Dialog2::getComboIndex3_ue(int r)
{
    QTableWidgetItem* myItem1= ui->tableWidget_3->item(r,10);
    if(myItem1->text()=="None")
        return 0;
    else if(myItem1->text()=="Code Cloture")
        return 1;
    else if(myItem1->text()=="Prob phy resolu")
            return 2;
    else if(myItem1->text()=="Ligne suspendu")
        return 3;
    else if(myItem1->text()=="Prob Client")
        return 4;
    else
        if(myItem1->text()=="Changement Hard")
            return 5;


}

int Dialog2::getComboIndex3_ca(int r)
{
    QTableWidgetItem* myItem1= ui->tableWidget_2->item(r,10);
    if(myItem1->text()=="None")
        return 0;
    else if(myItem1->text()=="Code Cloture")
        return 1;
    else if(myItem1->text()=="Prob phy resolu")
            return 2;
    else if(myItem1->text()=="Ligne suspendu")
        return 3;
    else if(myItem1->text()=="Prob Client")
        return 4;
    else
        if(myItem1->text()=="Changement Hard")
            return 5;


}

void Dialog2::on_tableWidget_3_cellDoubleClicked(int row, int column)
{
    if(column==12)
    {
        Dialog4 *d4=new Dialog4;
        d4->setModal(true);
        d4->remplir(row);
        d4->exec();
    }

}

void Dialog2::on_tableWidget_2_cellDoubleClicked(int row, int column)
{
    if(column==12)
    {
        Dialog5 *d5=new Dialog5;
        d5->setModal(true);
        d5->remplir(row);
        d5->exec();
    }

    if(column==13)

     {   QFile fca1("C:/Users/WassHj/Documents/Qt projects/9-Multiple-Windows/saveca.txt");
       if(!fca1.open( QFile::ReadOnly))
       {}

       QTextStream in2(&fca1);

       QFile ftemp3("C:/Users/WassHj/Documents/Qt projects/9-Multiple-Windows/savecnonctemp3.txt");
      if(!ftemp3.open(QFile::WriteOnly|QFile::Text | QIODevice::Append))
      {}

       QTextStream outtemp3(&ftemp3);

       QFile farchive("C:/Users/WassHj/Documents/Qt projects/9-Multiple-Windows/archiveca.txt");
      if(!farchive.open(QFile::WriteOnly|QFile::Text | QIODevice::Append))
      {}

       QTextStream outarchive(&farchive);

       outarchive<<ui->tableWidget_2->item(row,0)->text().replace(" ",".")<<" "<<ui->tableWidget_2->item(row,1)->text().replace(" ",".")<<" "<<ui->tableWidget_2->item(row,2)->text().replace(" ",".")<<" "<<ui->tableWidget_2->item(row,3)->text().replace(" ",".")<<" "<<ui->tableWidget_2->item(row,4)->text().replace(" ",".")<<" "<<ui->tableWidget_2->item(row,5)->text().replace(" ",".")<<" "<<ui->tableWidget_2->item(row,6)->text().replace(" ",".")<<" "<<ui->tableWidget_2->item(row,7)->text().replace(" ",".")<<" "<<ui->tableWidget_2->item(row,8)->text().replace(" ",".")<<" "<<ui->tableWidget_2->item(row,9)->text().replace(" ",".")<<" "<<ui->tableWidget_2->item(row,10)->text().replace(" ",".")<<" "<<ui->tableWidget_2->item(row,11)->text().replace(" ",".")<<endl;

       QString s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12;

       while(1)
       {
           in2>>s1>>s2>>s3>>s4>>s5>>s6>>s7>>s8>>s9>>s10>>s11>>s12;

           if(s5 != ui->tableWidget_2->item(row,4)->text().replace(" ","."))
               outtemp3<<s1<<" "<<s2<<" "<<s3<<" "<<s4<<" "<<s5<<" "<<s6<<" "<<s7<<" "<<s8<<" "<<s9<<" "<<s10<<" "<<s11<<" "<<s12<<endl;

           if(in2.atEnd())
               break;
       }

       ftemp3.close();
       fca1.remove();
       QFile::rename("C:/Users/WassHj/Documents/Qt projects/9-Multiple-Windows/savecnonctemp3.txt", "C:/Users/WassHj/Documents/Qt projects/9-Multiple-Windows/saveca.txt");

        QMessageBox::information(this,"info","Réclamation archiveé avec succès");

    }
}

void Dialog2::on_pushButton_clicked()
{
    QFile fusrlist("C:/Users/WassHj/Documents/Qt projects/9-Multiple-Windows/userslist.txt");
   if(!fusrlist.open( QFile::ReadOnly))
   {}
   QTextStream inulist(&fusrlist);
    QString s1,s2;

    QFile ftemp6("C:/Users/WassHj/Documents/Qt projects/9-Multiple-Windows/userslisttemp6.txt");
   if(!ftemp6.open(QFile::WriteOnly|QFile::Text | QIODevice::Append))
   {}

    QTextStream outtemp6(&ftemp6);

    while(1)
    {
        inulist>>s1>>s2;
        if(s1==ui->lineEdit->text() && ui->lineEdit_2->text()==ui->lineEdit_3->text())
            outtemp6<<s1<<" "<<ui->lineEdit_2->text()<<endl;
        else
            outtemp6<<s1<<" "<<s2<<endl;

        if(inulist.atEnd())
            break;

    }
    fusrlist.close();
    ftemp6.close();
    fusrlist.remove();
    QFile::rename("C:/Users/WassHj/Documents/Qt projects/9-Multiple-Windows/userslisttemp6.txt", "C:/Users/WassHj/Documents/Qt projects/9-Multiple-Windows/userslist.txt");

    QMessageBox::information(this,"Info","Pass changé avec succès");
}





void Dialog2::on_pushButton_3cnoc_clicked()
{
    update_table_ue();
    update_table_cnonc();

    update_table_ca();
}

void Dialog2::on_pushButton_3ca_clicked()
{
    update_table_cnonc();
    update_table_ue();
    update_table_ca();
}




void Dialog2::on_pushButton_3_ue_clicked()
{
    update_table_cnonc();
    update_table_ue();
    update_table_ca();
}
