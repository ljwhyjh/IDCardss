#include "idcarddialog.h"

#include <QApplication>
#include <QTextCodec>

int main(int argc, char *argv[])
{

    QTextCodec *codec = QTextCodec::codecForName("System"); //系统编码
    QTextCodec::setCodecForLocale(codec);


    QApplication a(argc, argv);
    IdcardDialog w;

    w.show();
    return a.exec();
}
