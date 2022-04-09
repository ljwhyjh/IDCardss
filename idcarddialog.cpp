#include "idcarddialog.h"
#include "ui_idcarddialog.h"

#include <qdebug.h>
#include <qpixmap.h>
#include <QMessageBox>
IdcardDialog::IdcardDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::IdcardDialog)
{
    ui->setupUi(this);

    connect(ui->readBtn,&QPushButton::clicked,this,&IdcardDialog::onReadBtnClicked);

}

IdcardDialog::~IdcardDialog()
{
    delete ui;


}

void IdcardDialog::onReadBtnClicked()
{
    IDCard *idCard = new  IDCard();

    bool ishas =idCard->readCard(Name,  Gender, Folk,
                            BirthDay,  Code, Address,Agency,  ExpireStart, ExpireEnd,BmpPath);

    if(ishas)
    {
        qDebug()<<QString::fromLocal8Bit(Name) <<QString::fromLocal8Bit(Gender);

        ui->nameEdit->setText(QString::fromLocal8Bit(Name));
        ui->genderEdit->setText(QString::fromLocal8Bit(Gender));
        ui->folkEdit->setText(QString::fromLocal8Bit(Folk));
        ui->birthEdit->setText(BirthDay);
        ui->codeEdit->setText(Code);
        ui->addrEdit->setText(QString::fromLocal8Bit(Address));
        ui->agencyEdit->setText(QString::fromLocal8Bit(Agency));
        ui->expireStartEdit->setText(ExpireStart);
        ui->expireEndEdit->setText(QString::fromLocal8Bit(ExpireEnd));

        QPixmap pix(BmpPath);
        ui->picLabel->setPixmap(pix);
    }
    else
    {
        ui->nameEdit->setText(" ");
        ui->genderEdit->setText("");
        ui->folkEdit->setText("");
        ui->birthEdit->setText("");
        ui->codeEdit->setText("");
        ui->addrEdit->setText("");
        ui->agencyEdit->setText("");
        ui->expireStartEdit->setText("");
        ui->expireEndEdit->setText("");

        QPixmap pix("");
        ui->picLabel->setPixmap(pix);
    }



}

