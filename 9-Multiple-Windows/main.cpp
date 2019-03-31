#include "mainwindow.h"
#include <QApplication>
#include<QtWidgets>
#include"dialog2.h"
#include <QtGui>

#include"dialog_basic.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();

//     Dialog dia;
//    dia.show();

    Dialog_basic dbs;
    dbs.show();



//    Dialog2 dia2;
//    dia2.show();
    return a.exec();
}
