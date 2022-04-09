#ifndef IDCARDDIALOG_H
#define IDCARDDIALOG_H

#include <QDialog>
#include "idcard.h"


QT_BEGIN_NAMESPACE
namespace Ui { class IdcardDialog; }
QT_END_NAMESPACE

class IdcardDialog : public QDialog
{
    Q_OBJECT

public:
    IdcardDialog(QWidget *parent = nullptr);
    ~IdcardDialog();

private:

    char Name[32];
    char Gender[4];
    char Folk[4];
    char BirthDay[9];
    char Code[19];
    char Address[71];
    char Agency[31];
    char ExpireStart[9];
    char ExpireEnd[9];
    char BmpPath[30];


private slots:
    void onReadBtnClicked();

private:
    Ui::IdcardDialog *ui;
};
#endif // IDCARDDIALOG_H
