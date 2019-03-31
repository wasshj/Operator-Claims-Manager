#ifndef ADMININTERFACE_H
#define ADMININTERFACE_H
#include"adduserinterface.h"
#include <QDialog>


namespace Ui {
class admininterface;
}

class admininterface : public QDialog
{
    Q_OBJECT

public:
    explicit admininterface(QWidget *parent = nullptr);
    ~admininterface();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

private:
    Ui::admininterface *ui;
    adduserinterface *usr;
};

#endif // ADMININTERFACE_H
