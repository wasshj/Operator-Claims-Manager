#ifndef DIALOG2_H
#define DIALOG2_H
#include"dialog3.h"
#include"dialog4.h"
#include"dialog5.h"
#include<QTableWidgetItem>
#include <QDialog>


namespace Ui {
class Dialog2;
}

class Dialog2 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog2(QWidget *parent = nullptr);
    ~Dialog2();
    Ui::Dialog2* getUi(){return ui;}
    QTableWidgetItem* getElementByRownAndColumn(int,int);
    QTableWidgetItem* getElementByRownAndColumn_ue(int,int);
    QTableWidgetItem* getElementByRownAndColumn_ca(int,int);
    int getComoboIndex(int);
    int getComoboIndex_ue(int);
    int getComoboIndex_ca(int);
    int getComboIndex2(int);
    int getComboIndex2_ue(int);
    int getComboIndex2_ca(int);
    int getComboIndex3(int);
    int getComboIndex3_ue(int);
    int getComboIndex3_ca(int);
    void setRowOfTableWidget(int);
    void update_table_cnonc();
    void update_table_ca();
    void update_table_ue();
    void clickedaction(int);


private slots:
    void on_pushButton_2_clicked();

    void on_label_12_linkHovered(const QString &link);

    void on_pushButton_3_clicked();

    void on_tabWidget_currentChanged(int index);

    void on_tableWidget_cellClicked(int row, int column);

    void on_tableWidget_cellDoubleClicked(int row, int column);

    void on_tableWidget_3_cellDoubleClicked(int row, int column);

    void on_tableWidget_2_cellDoubleClicked(int row, int column);

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3cnoc_clicked();

    void on_pushButton_3ca_clicked();

    void on_comboBox_currentIndexChanged(int index);

    void on_comboBox_highlighted(int index);

    void on_pushButton_3_ue_clicked();

private:
    Ui::Dialog2 *ui;
    Dialog3 *d333;
    Dialog4 *d4;
    Dialog5 *d5;

};

#endif // DIALOG2_H
