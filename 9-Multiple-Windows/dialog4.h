#ifndef DIALOG4_H
#define DIALOG4_H

#include <QDialog>

namespace Ui {
class Dialog4;
}

class Dialog4 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog4(QWidget *parent = nullptr);
    ~Dialog4();
    void remplir(int);

private slots:
    void on_pushButton_2_dialog4_clicked();

private:
    Ui::Dialog4 *ui;
};

#endif // DIALOG4_H
