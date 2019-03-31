#ifndef DIALOG_BASIC_H
#define DIALOG_BASIC_H
#include"dialog2.h"
#include"admininterface.h"

#include <QDialog>
#include<QString>
namespace Ui {
class Dialog_basic;
}

class Dialog_basic : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_basic(QWidget *parent = nullptr);
    ~Dialog_basic();
    QString getUser();
    QString getPass();
    bool eventFilter(QObject *obj, QEvent *event);

private slots:
    void on_pushButton_clicked();

    void on_label_2_linkActivated(const QString &link);

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Dialog_basic *ui;
    Dialog2 *d2;
    admininterface *admn;
};

#endif // DIALOG_BASIC_H
