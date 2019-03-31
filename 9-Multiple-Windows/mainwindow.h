#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"dialog_basic.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    bool verify();


private slots:
    void on_pushButton_clicked();

    void on_label_linkActivated(const QString &link);

private:
    Ui::MainWindow *ui;
    Dialog_basic *d1;

};

#endif // MAINWINDOW_H
