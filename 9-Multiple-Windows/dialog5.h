#ifndef DIALOG5_H
#define DIALOG5_H

#include <QDialog>

namespace Ui {
class Dialog5;
}

class Dialog5 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog5(QWidget *parent = nullptr);
    ~Dialog5();
    void remplir(int);

private slots:
    void on_pushButton_2_dialog4_clicked();

private:
    Ui::Dialog5 *ui;
};

#endif // DIALOG5_H
