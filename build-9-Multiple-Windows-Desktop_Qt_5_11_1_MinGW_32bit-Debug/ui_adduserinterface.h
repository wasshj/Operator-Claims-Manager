/********************************************************************************
** Form generated from reading UI file 'adduserinterface.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDUSERINTERFACE_H
#define UI_ADDUSERINTERFACE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_adduserinterface
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;
    QLabel *label_4;
    QComboBox *comboBox;

    void setupUi(QDialog *adduserinterface)
    {
        if (adduserinterface->objectName().isEmpty())
            adduserinterface->setObjectName(QStringLiteral("adduserinterface"));
        adduserinterface->resize(387, 327);
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/img/manyusers.png"), QSize(), QIcon::Normal, QIcon::Off);
        adduserinterface->setWindowIcon(icon);
        label = new QLabel(adduserinterface);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 50, 47, 13));
        label_2 = new QLabel(adduserinterface);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 100, 47, 13));
        label_3 = new QLabel(adduserinterface);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(90, 150, 61, 16));
        lineEdit = new QLineEdit(adduserinterface);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(90, 70, 141, 20));
        lineEdit_2 = new QLineEdit(adduserinterface);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(90, 120, 141, 20));
        lineEdit_2->setEchoMode(QLineEdit::Password);
        lineEdit_3 = new QLineEdit(adduserinterface);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(90, 170, 141, 20));
        lineEdit_3->setEchoMode(QLineEdit::Password);
        pushButton = new QPushButton(adduserinterface);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(120, 260, 75, 23));
        label_4 = new QLabel(adduserinterface);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(90, 200, 47, 13));
        comboBox = new QComboBox(adduserinterface);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(90, 220, 141, 22));

        retranslateUi(adduserinterface);

        QMetaObject::connectSlotsByName(adduserinterface);
    } // setupUi

    void retranslateUi(QDialog *adduserinterface)
    {
        adduserinterface->setWindowTitle(QApplication::translate("adduserinterface", "Add User", nullptr));
        label->setText(QApplication::translate("adduserinterface", "<html><head/><body><p><span style=\" font-size:9pt;\">User</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("adduserinterface", "<html><head/><body><p><span style=\" font-size:9pt;\">Pass</span></p></body></html>", nullptr));
        label_3->setText(QApplication::translate("adduserinterface", "<html><head/><body><p><span style=\" font-size:9pt;\">Confirmer</span></p></body></html>", nullptr));
        pushButton->setText(QApplication::translate("adduserinterface", "Ajouter", nullptr));
        label_4->setText(QApplication::translate("adduserinterface", "<html><head/><body><p><span style=\" font-size:10pt;\">Service</span></p></body></html>", nullptr));
        comboBox->setItemText(0, QApplication::translate("adduserinterface", "CA", nullptr));
        comboBox->setItemText(1, QApplication::translate("adduserinterface", "CNOC", nullptr));
        comboBox->setItemText(2, QApplication::translate("adduserinterface", "UE", nullptr));

    } // retranslateUi

};

namespace Ui {
    class adduserinterface: public Ui_adduserinterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDUSERINTERFACE_H
