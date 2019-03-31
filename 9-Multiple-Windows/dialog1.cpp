#include "dialog1.h"
#include "ui_dialog1.h"
#include"horiz.h"
#include<fstream>
#include<QTextStream>
#include<QFile>
using namespace std;

Dialog1::Dialog1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog1)
{
    ui->setupUi(this);
   this->setFixedSize(this->width(),this->height());


    //ui->tabWidget->setStyleSheet("QTabBar::tab { height: 200px; width: 50px; }");
    //ui->tabWidget->setStyleSheet("QTabWidget,QTabWidget::pane,QTabBar { background: transparent; border: 0px; },QTabBar::tab { height: 40px; width: 100px; }");
    //ui->tabWidget->tabBar()->setStyle(new CustomTabStyle);

    //ui->tab->setAutoFillBackground(true);
    //ui->tab_2->setAutoFillBackground(true);


}

Dialog1::~Dialog1()
{
    delete ui;
}

void Dialog1::on_pushButton_clicked()
{
    QFile f("C:/Users/WassHj/Documents/Qt projects/9-Multiple-Windows/save.txt");
   if(!f.open(QFile::WriteOnly|QFile::Text))
   {}
   // QString text=ui->lineEdit->text();
    QTextStream out(&f);
    out<<ui->lineEdit->text()<<" "<<ui->lineEdit_2->text()<<" "<<ui->comboBox->currentText()<<" "<<ui->lineEdit_3->text()<<" "<<ui->lineEdit_4->text()<<" "<<ui->lineEdit_5->text()<<" "<<ui->lineEdit_6->text()<<" "<<ui->lineEdit_7->text()<<endl;
}
