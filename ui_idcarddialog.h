/********************************************************************************
** Form generated from reading UI file 'idcarddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IDCARDDIALOG_H
#define UI_IDCARDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_IdcardDialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *picLabel;
    QTextEdit *nameEdit;
    QTextEdit *genderEdit;
    QTextEdit *folkEdit;
    QTextEdit *birthEdit;
    QTextEdit *addrEdit;
    QTextEdit *codeEdit;
    QTextEdit *agencyEdit;
    QTextEdit *expireStartEdit;
    QLabel *label_9;
    QTextEdit *expireEndEdit;
    QPushButton *readBtn;

    void setupUi(QDialog *IdcardDialog)
    {
        if (IdcardDialog->objectName().isEmpty())
            IdcardDialog->setObjectName(QString::fromUtf8("IdcardDialog"));
        IdcardDialog->resize(527, 430);
        label = new QLabel(IdcardDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 40, 41, 20));
        label_2 = new QLabel(IdcardDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 90, 41, 20));
        label_3 = new QLabel(IdcardDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(140, 90, 41, 20));
        label_4 = new QLabel(IdcardDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 130, 41, 20));
        label_5 = new QLabel(IdcardDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 180, 41, 16));
        label_6 = new QLabel(IdcardDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 230, 81, 20));
        label_7 = new QLabel(IdcardDialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(30, 270, 51, 20));
        label_8 = new QLabel(IdcardDialog);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(30, 330, 51, 20));
        picLabel = new QLabel(IdcardDialog);
        picLabel->setObjectName(QString::fromUtf8("picLabel"));
        picLabel->setGeometry(QRect(280, 20, 121, 111));
        nameEdit = new QTextEdit(IdcardDialog);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        nameEdit->setGeometry(QRect(70, 30, 104, 31));
        genderEdit = new QTextEdit(IdcardDialog);
        genderEdit->setObjectName(QString::fromUtf8("genderEdit"));
        genderEdit->setGeometry(QRect(70, 90, 51, 31));
        folkEdit = new QTextEdit(IdcardDialog);
        folkEdit->setObjectName(QString::fromUtf8("folkEdit"));
        folkEdit->setGeometry(QRect(180, 90, 51, 31));
        birthEdit = new QTextEdit(IdcardDialog);
        birthEdit->setObjectName(QString::fromUtf8("birthEdit"));
        birthEdit->setGeometry(QRect(70, 130, 111, 31));
        addrEdit = new QTextEdit(IdcardDialog);
        addrEdit->setObjectName(QString::fromUtf8("addrEdit"));
        addrEdit->setGeometry(QRect(70, 170, 271, 31));
        codeEdit = new QTextEdit(IdcardDialog);
        codeEdit->setObjectName(QString::fromUtf8("codeEdit"));
        codeEdit->setGeometry(QRect(110, 220, 311, 31));
        agencyEdit = new QTextEdit(IdcardDialog);
        agencyEdit->setObjectName(QString::fromUtf8("agencyEdit"));
        agencyEdit->setGeometry(QRect(90, 270, 331, 31));
        expireStartEdit = new QTextEdit(IdcardDialog);
        expireStartEdit->setObjectName(QString::fromUtf8("expireStartEdit"));
        expireStartEdit->setGeometry(QRect(90, 330, 101, 31));
        label_9 = new QLabel(IdcardDialog);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(200, 340, 41, 16));
        expireEndEdit = new QTextEdit(IdcardDialog);
        expireEndEdit->setObjectName(QString::fromUtf8("expireEndEdit"));
        expireEndEdit->setGeometry(QRect(220, 330, 101, 31));
        readBtn = new QPushButton(IdcardDialog);
        readBtn->setObjectName(QString::fromUtf8("readBtn"));
        readBtn->setGeometry(QRect(140, 390, 75, 23));

        retranslateUi(IdcardDialog);

        QMetaObject::connectSlotsByName(IdcardDialog);
    } // setupUi

    void retranslateUi(QDialog *IdcardDialog)
    {
        IdcardDialog->setWindowTitle(QCoreApplication::translate("IdcardDialog", "IdcardDialog", nullptr));
        label->setText(QCoreApplication::translate("IdcardDialog", "\345\247\223 \345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("IdcardDialog", "\346\200\247 \345\210\253", nullptr));
        label_3->setText(QCoreApplication::translate("IdcardDialog", "\346\260\221 \346\227\217", nullptr));
        label_4->setText(QCoreApplication::translate("IdcardDialog", "\345\207\272 \347\224\237", nullptr));
        label_5->setText(QCoreApplication::translate("IdcardDialog", "\345\234\260 \345\235\200", nullptr));
        label_6->setText(QCoreApplication::translate("IdcardDialog", "\345\205\254\346\260\221\350\272\253\344\273\275\345\217\267\347\240\201", nullptr));
        label_7->setText(QCoreApplication::translate("IdcardDialog", "\347\255\276\345\217\221\346\234\272\345\205\263", nullptr));
        label_8->setText(QCoreApplication::translate("IdcardDialog", "\346\234\211\346\225\210\346\234\237\351\231\220", nullptr));
        picLabel->setText(QCoreApplication::translate("IdcardDialog", "<html><head/><body><p align=\"center\">\347\205\247\347\211\207</p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("IdcardDialog", "\350\207\263", nullptr));
        readBtn->setText(QCoreApplication::translate("IdcardDialog", "\350\272\253\344\273\275\350\257\201\350\257\273\345\217\226", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IdcardDialog: public Ui_IdcardDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IDCARDDIALOG_H
