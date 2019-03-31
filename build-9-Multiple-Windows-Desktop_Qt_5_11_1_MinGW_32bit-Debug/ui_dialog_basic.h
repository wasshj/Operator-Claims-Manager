/********************************************************************************
** Form generated from reading UI file 'dialog_basic.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_BASIC_H
#define UI_DIALOG_BASIC_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog_basic
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QDialog *Dialog_basic)
    {
        if (Dialog_basic->objectName().isEmpty())
            Dialog_basic->setObjectName(QStringLiteral("Dialog_basic"));
        Dialog_basic->resize(596, 427);
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/img/icontt2.png"), QSize(), QIcon::Normal, QIcon::Off);
        Dialog_basic->setWindowIcon(icon);
        label = new QLabel(Dialog_basic);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, -10, 601, 441));
        label->setCursor(QCursor(Qt::ArrowCursor));
        label->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/1nolight.png")));
        lineEdit = new QLineEdit(Dialog_basic);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(190, 190, 221, 31));
        lineEdit_2 = new QLineEdit(Dialog_basic);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(190, 230, 221, 31));
        pushButton = new QPushButton(Dialog_basic);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(190, 270, 221, 41));
        label_2 = new QLabel(Dialog_basic);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setEnabled(true);
        label_2->setGeometry(QRect(330, 320, 81, 20));
        pushButton_2 = new QPushButton(Dialog_basic);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(310, 320, 101, 23));
        pushButton_3 = new QPushButton(Dialog_basic);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(40, 330, 41, 41));
        pushButton_4 = new QPushButton(Dialog_basic);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(40, 380, 41, 41));

        retranslateUi(Dialog_basic);

        QMetaObject::connectSlotsByName(Dialog_basic);
    } // setupUi

    void retranslateUi(QDialog *Dialog_basic)
    {
        Dialog_basic->setWindowTitle(QApplication::translate("Dialog_basic", "Dialog", nullptr));
        label->setText(QString());
        pushButton->setText(QString());
        label_2->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog_basic: public Ui_Dialog_basic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_BASIC_H
