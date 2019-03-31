/********************************************************************************
** Form generated from reading UI file 'admininterface.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMININTERFACE_H
#define UI_ADMININTERFACE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_admininterface
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QComboBox *comboBox;
    QLabel *label_3;
    QPushButton *pushButton;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QDialog *admininterface)
    {
        if (admininterface->objectName().isEmpty())
            admininterface->setObjectName(QStringLiteral("admininterface"));
        admininterface->resize(359, 348);
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/img/oneuser.png"), QSize(), QIcon::Normal, QIcon::Off);
        admininterface->setWindowIcon(icon);
        groupBox = new QGroupBox(admininterface);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(60, 50, 221, 241));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(80, 190, 131, 23));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 50, 71, 21));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(0, 130, 221, 20));
        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(0, 20, 221, 22));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 100, 91, 21));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(0, 190, 75, 23));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 51, 20));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(0, 70, 221, 20));

        retranslateUi(admininterface);

        QMetaObject::connectSlotsByName(admininterface);
    } // setupUi

    void retranslateUi(QDialog *admininterface)
    {
        admininterface->setWindowTitle(QApplication::translate("admininterface", "Users", nullptr));
        groupBox->setTitle(QString());
        pushButton_2->setText(QApplication::translate("admininterface", "Ajouter un nouveau user", nullptr));
        label_2->setText(QApplication::translate("admininterface", "<html><head/><body><p><span style=\" font-size:11pt;\">New pass</span></p></body></html>", nullptr));
        label_3->setText(QApplication::translate("admininterface", "<html><head/><body><p><span style=\" font-size:11pt;\">Confirmer</span></p></body></html>", nullptr));
        pushButton->setText(QApplication::translate("admininterface", "Changer", nullptr));
        label->setText(QApplication::translate("admininterface", "<html><head/><body><p><span style=\" font-size:11pt;\">Users</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admininterface: public Ui_admininterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMININTERFACE_H
