/********************************************************************************
** Form generated from reading UI file 'dialog2.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG2_H
#define UI_DIALOG2_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog2
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QWidget *tab_2;
    QPushButton *pushButton_2;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_11;
    QLineEdit *lineEdit_10;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_4;
    QLineEdit *lineEdit_7;
    QWidget *layoutWidget5;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_7;
    QLineEdit *lineEdit_8;
    QWidget *layoutWidget6;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_6;
    QLineEdit *lineEdit_5;
    QWidget *layoutWidget7;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_5;
    QLineEdit *lineEdit_4;
    QWidget *layoutWidget8;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_8;
    QLineEdit *lineEdit_6;
    QWidget *layoutWidget9;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_10;
    QLineEdit *lineEdit_9;
    QWidget *layoutWidget10;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_9;
    QComboBox *comboBox;
    QTableWidget *tableWidget_2;
    QFrame *line;
    QPushButton *pushButton_3ca;
    QLabel *label_13;
    QWidget *tab_3;
    QTableWidget *tableWidget;
    QPushButton *pushButton_3cnoc;
    QLabel *label_12;
    QLabel *label_14;
    QWidget *tab_4;
    QTableWidget *tableWidget_3;
    QPushButton *pushButton_3_ue;
    QLabel *label_15;

    void setupUi(QDialog *Dialog2)
    {
        if (Dialog2->objectName().isEmpty())
            Dialog2->setObjectName(QStringLiteral("Dialog2"));
        Dialog2->resize(1340, 627);
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/img/icontt2.png"), QSize(), QIcon::Normal, QIcon::Off);
        Dialog2->setWindowIcon(icon);
        tabWidget = new QTabWidget(Dialog2);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setGeometry(QRect(0, 0, 1341, 631));
        tabWidget->setTabPosition(QTabWidget::West);
        tabWidget->setIconSize(QSize(50, 35));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(220, 220, 75, 23));
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(190, 60, 135, 43));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        layoutWidget1 = new QWidget(tab);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(190, 110, 135, 43));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(layoutWidget1);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(lineEdit_2);

        layoutWidget2 = new QWidget(tab);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(190, 160, 135, 43));
        verticalLayout_3 = new QVBoxLayout(layoutWidget2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_3->addWidget(label_3);

        lineEdit_3 = new QLineEdit(layoutWidget2);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setEchoMode(QLineEdit::Password);

        verticalLayout_3->addWidget(lineEdit_3);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        pushButton_2 = new QPushButton(tab_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(210, 230, 75, 23));
        layoutWidget3 = new QWidget(tab_2);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(70, 10, 135, 43));
        verticalLayout_4 = new QVBoxLayout(layoutWidget3);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget3);
        label_11->setObjectName(QStringLiteral("label_11"));

        verticalLayout_4->addWidget(label_11, 0, Qt::AlignHCenter);

        lineEdit_10 = new QLineEdit(layoutWidget3);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));

        verticalLayout_4->addWidget(lineEdit_10);

        layoutWidget4 = new QWidget(tab_2);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(70, 60, 135, 43));
        verticalLayout_5 = new QVBoxLayout(layoutWidget4);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget4);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_5->addWidget(label_4, 0, Qt::AlignHCenter);

        lineEdit_7 = new QLineEdit(layoutWidget4);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));

        verticalLayout_5->addWidget(lineEdit_7);

        layoutWidget5 = new QWidget(tab_2);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(70, 170, 135, 43));
        verticalLayout_7 = new QVBoxLayout(layoutWidget5);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget5);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_7->addWidget(label_7, 0, Qt::AlignHCenter);

        lineEdit_8 = new QLineEdit(layoutWidget5);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));

        verticalLayout_7->addWidget(lineEdit_8);

        layoutWidget6 = new QWidget(tab_2);
        layoutWidget6->setObjectName(QStringLiteral("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(300, 10, 141, 43));
        verticalLayout_8 = new QVBoxLayout(layoutWidget6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget6);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_8->addWidget(label_6, 0, Qt::AlignHCenter);

        lineEdit_5 = new QLineEdit(layoutWidget6);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        verticalLayout_8->addWidget(lineEdit_5);

        layoutWidget7 = new QWidget(tab_2);
        layoutWidget7->setObjectName(QStringLiteral("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(300, 60, 141, 43));
        verticalLayout_9 = new QVBoxLayout(layoutWidget7);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget7);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setEnabled(true);

        verticalLayout_9->addWidget(label_5, 0, Qt::AlignHCenter);

        lineEdit_4 = new QLineEdit(layoutWidget7);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        verticalLayout_9->addWidget(lineEdit_4);

        layoutWidget8 = new QWidget(tab_2);
        layoutWidget8->setObjectName(QStringLiteral("layoutWidget8"));
        layoutWidget8->setGeometry(QRect(300, 120, 141, 43));
        verticalLayout_10 = new QVBoxLayout(layoutWidget8);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget8);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_10->addWidget(label_8, 0, Qt::AlignHCenter);

        lineEdit_6 = new QLineEdit(layoutWidget8);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));

        verticalLayout_10->addWidget(lineEdit_6);

        layoutWidget9 = new QWidget(tab_2);
        layoutWidget9->setObjectName(QStringLiteral("layoutWidget9"));
        layoutWidget9->setGeometry(QRect(300, 170, 141, 43));
        verticalLayout_11 = new QVBoxLayout(layoutWidget9);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget9);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout_11->addWidget(label_10, 0, Qt::AlignHCenter);

        lineEdit_9 = new QLineEdit(layoutWidget9);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));

        verticalLayout_11->addWidget(lineEdit_9);

        layoutWidget10 = new QWidget(tab_2);
        layoutWidget10->setObjectName(QStringLiteral("layoutWidget10"));
        layoutWidget10->setGeometry(QRect(70, 120, 131, 43));
        verticalLayout_6 = new QVBoxLayout(layoutWidget10);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget10);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_6->addWidget(label_9);

        comboBox = new QComboBox(layoutWidget10);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));

        verticalLayout_6->addWidget(comboBox);

        tableWidget_2 = new QTableWidget(tab_2);
        if (tableWidget_2->columnCount() < 14)
            tableWidget_2->setColumnCount(14);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(10, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(11, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(12, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(13, __qtablewidgetitem13);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(10, 290, 1061, 311));
        line = new QFrame(tab_2);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 260, 1061, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        pushButton_3ca = new QPushButton(tab_2);
        pushButton_3ca->setObjectName(QStringLiteral("pushButton_3ca"));
        pushButton_3ca->setGeometry(QRect(340, 230, 75, 23));
        label_13 = new QLabel(tab_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(690, 10, 301, 251));
        label_13->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/ca.png")));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tableWidget = new QTableWidget(tab_3);
        if (tableWidget->columnCount() < 13)
            tableWidget->setColumnCount(13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(8, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(9, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(10, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(11, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(12, __qtablewidgetitem26);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 200, 1061, 371));
        pushButton_3cnoc = new QPushButton(tab_3);
        pushButton_3cnoc->setObjectName(QStringLiteral("pushButton_3cnoc"));
        pushButton_3cnoc->setGeometry(QRect(240, 580, 75, 23));
        label_12 = new QLabel(tab_3);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(180, 50, 471, 51));
        label_14 = new QLabel(tab_3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(130, 10, 551, 171));
        label_14->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/cnoc.png")));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tableWidget_3 = new QTableWidget(tab_4);
        if (tableWidget_3->columnCount() < 13)
            tableWidget_3->setColumnCount(13);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(0, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(1, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(2, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(3, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(4, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(5, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(6, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(7, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(8, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(9, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(10, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(11, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(12, __qtablewidgetitem39);
        tableWidget_3->setObjectName(QStringLiteral("tableWidget_3"));
        tableWidget_3->setGeometry(QRect(30, 190, 1061, 371));
        pushButton_3_ue = new QPushButton(tab_4);
        pushButton_3_ue->setObjectName(QStringLiteral("pushButton_3_ue"));
        pushButton_3_ue->setGeometry(QRect(340, 580, 75, 23));
        label_15 = new QLabel(tab_4);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(140, 0, 461, 201));
        label_15->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/UE.png")));
        tabWidget->addTab(tab_4, QString());

        retranslateUi(Dialog2);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Dialog2);
    } // setupUi

    void retranslateUi(QDialog *Dialog2)
    {
        Dialog2->setWindowTitle(QApplication::translate("Dialog2", "TT Reclamations", nullptr));
        pushButton->setText(QApplication::translate("Dialog2", "Changer", nullptr));
        label->setText(QApplication::translate("Dialog2", "User", nullptr));
        label_2->setText(QApplication::translate("Dialog2", "Nouveau Pass", nullptr));
        label_3->setText(QApplication::translate("Dialog2", "Comfirmer", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Dialog2", "Profile", nullptr));
        pushButton_2->setText(QApplication::translate("Dialog2", "Envoyer", nullptr));
        label_11->setText(QApplication::translate("Dialog2", "Titre", nullptr));
        label_4->setText(QApplication::translate("Dialog2", "IP Incident", nullptr));
        label_7->setText(QApplication::translate("Dialog2", "Type", nullptr));
        lineEdit_8->setText(QApplication::translate("Dialog2", "R\303\251clamation usuelle", nullptr));
        label_6->setText(QApplication::translate("Dialog2", "ID/N_Ligne", nullptr));
        label_5->setText(QApplication::translate("Dialog2", "Produit", nullptr));
        label_8->setText(QApplication::translate("Dialog2", "Cat\303\251gorie", nullptr));
        lineEdit_6->setText(QApplication::translate("Dialog2", "SAV DATA", nullptr));
        label_10->setText(QApplication::translate("Dialog2", "UE", nullptr));
        lineEdit_9->setText(QApplication::translate("Dialog2", "CNOC", nullptr));
        label_9->setText(QApplication::translate("Dialog2", "Etat", nullptr));
        comboBox->setItemText(0, QApplication::translate("Dialog2", "Ouvert", nullptr));
        comboBox->setItemText(1, QApplication::translate("Dialog2", "R\303\251solu", nullptr));
        comboBox->setItemText(2, QApplication::translate("Dialog2", "En attente", nullptr));

        QTableWidgetItem *___qtablewidgetitem = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Dialog2", "Titre", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Dialog2", "IP Incident", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Dialog2", "Etat", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Dialog2", "Type", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_2->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("Dialog2", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_2->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("Dialog2", "Produit", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_2->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("Dialog2", "Cat\303\251gorie", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_2->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("Dialog2", "UE", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_2->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("Dialog2", "Grp d'affectation", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_2->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("Dialog2", "Motifs de transfert", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_2->horizontalHeaderItem(10);
        ___qtablewidgetitem10->setText(QApplication::translate("Dialog2", "Solution", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget_2->horizontalHeaderItem(11);
        ___qtablewidgetitem11->setText(QApplication::translate("Dialog2", "Commentaire", nullptr));
        pushButton_3ca->setText(QApplication::translate("Dialog2", "Update", nullptr));
        label_13->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Dialog2", "Envoi (CA)", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem12->setText(QApplication::translate("Dialog2", "Titre", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem13->setText(QApplication::translate("Dialog2", "IP Incident", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem14->setText(QApplication::translate("Dialog2", "Etat", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem15->setText(QApplication::translate("Dialog2", "Type", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem16->setText(QApplication::translate("Dialog2", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem17->setText(QApplication::translate("Dialog2", "Produit", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem18->setText(QApplication::translate("Dialog2", "Cat\303\251gorie", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem19->setText(QApplication::translate("Dialog2", "UE", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem20->setText(QApplication::translate("Dialog2", "Grp d'affectation", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget->horizontalHeaderItem(9);
        ___qtablewidgetitem21->setText(QApplication::translate("Dialog2", "Motifs de transfert", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget->horizontalHeaderItem(10);
        ___qtablewidgetitem22->setText(QApplication::translate("Dialog2", "Solution", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget->horizontalHeaderItem(11);
        ___qtablewidgetitem23->setText(QApplication::translate("Dialog2", "Commentaire", nullptr));
        pushButton_3cnoc->setText(QApplication::translate("Dialog2", "Update ", nullptr));
        label_12->setText(QApplication::translate("Dialog2", "<html><head/><body><p><br/></p></body></html>", nullptr));
        label_14->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Dialog2", "Reception(CNOC)", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget_3->horizontalHeaderItem(0);
        ___qtablewidgetitem24->setText(QApplication::translate("Dialog2", "Titre", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget_3->horizontalHeaderItem(1);
        ___qtablewidgetitem25->setText(QApplication::translate("Dialog2", "IP Incident", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget_3->horizontalHeaderItem(2);
        ___qtablewidgetitem26->setText(QApplication::translate("Dialog2", "Etat", nullptr));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidget_3->horizontalHeaderItem(3);
        ___qtablewidgetitem27->setText(QApplication::translate("Dialog2", "Type", nullptr));
        QTableWidgetItem *___qtablewidgetitem28 = tableWidget_3->horizontalHeaderItem(4);
        ___qtablewidgetitem28->setText(QApplication::translate("Dialog2", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem29 = tableWidget_3->horizontalHeaderItem(5);
        ___qtablewidgetitem29->setText(QApplication::translate("Dialog2", "Produit", nullptr));
        QTableWidgetItem *___qtablewidgetitem30 = tableWidget_3->horizontalHeaderItem(6);
        ___qtablewidgetitem30->setText(QApplication::translate("Dialog2", "Cat\303\251gorie", nullptr));
        QTableWidgetItem *___qtablewidgetitem31 = tableWidget_3->horizontalHeaderItem(7);
        ___qtablewidgetitem31->setText(QApplication::translate("Dialog2", "UE", nullptr));
        QTableWidgetItem *___qtablewidgetitem32 = tableWidget_3->horizontalHeaderItem(8);
        ___qtablewidgetitem32->setText(QApplication::translate("Dialog2", "Grp d'affectation", nullptr));
        QTableWidgetItem *___qtablewidgetitem33 = tableWidget_3->horizontalHeaderItem(9);
        ___qtablewidgetitem33->setText(QApplication::translate("Dialog2", "Motifs de transfert", nullptr));
        QTableWidgetItem *___qtablewidgetitem34 = tableWidget_3->horizontalHeaderItem(10);
        ___qtablewidgetitem34->setText(QApplication::translate("Dialog2", "Solution", nullptr));
        QTableWidgetItem *___qtablewidgetitem35 = tableWidget_3->horizontalHeaderItem(11);
        ___qtablewidgetitem35->setText(QApplication::translate("Dialog2", "Commentaire", nullptr));
        pushButton_3_ue->setText(QApplication::translate("Dialog2", "Update", nullptr));
        label_15->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("Dialog2", "UE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog2: public Ui_Dialog2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG2_H
