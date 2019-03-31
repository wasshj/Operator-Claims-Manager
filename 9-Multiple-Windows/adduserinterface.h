#ifndef ADDUSERINTERFACE_H
#define ADDUSERINTERFACE_H

#include <QDialog>

namespace Ui {
class adduserinterface;
}

class adduserinterface : public QDialog
{
    Q_OBJECT

public:
    explicit adduserinterface(QWidget *parent = nullptr);
    ~adduserinterface();

private slots:
    void on_pushButton_clicked();

private:
    Ui::adduserinterface *ui;

};

#endif // ADDUSERINTERFACE_H
