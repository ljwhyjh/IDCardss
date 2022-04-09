#include "idcard.h"
#include <QMessageBox>
#include <QString>
#include <QObject>
#include <QDebug>
#include <QLibrary>
#include <QTextCodec>

typedef int  (*_UCommand1)(unsigned char* pCmd,int* parg0,int* parg1,int* parg2);
typedef int (__stdcall *_GetAddr)(char* pbuf);
typedef int (__stdcall *_GetBegin)(char* pbuf);
typedef int (__stdcall *_GetName)(char* pbuf);
typedef int (__stdcall *_GetSex)(char* pbuf);
typedef int (__stdcall *_GetSexGB)(char* pbuf);
typedef int (__stdcall *_GetFolk)(char* pbuf);
typedef int (__stdcall *_GetFolkGB)(char* pbuf);
typedef int (__stdcall *_GetIDNum)(char* pbuf);
typedef int (__stdcall *_GetDep)(char* pbuf);
typedef int (__stdcall *_GetBirth)(char* pbuf);
typedef int (__stdcall *_GetEnd)(char* pbuf);
typedef int (__stdcall *_GetNewAddr)(char* pbuf);
typedef int (__stdcall *_GetBmpPath)(char* pbuf);

IDCard::IDCard()
{
//   iPort=1001;

//   retjinglun=InitComm(iPort);

}

IDCard::~IDCard()
{
    //CloseComm();
}

bool IDCard::readCard(char *Name, char *Gender, char *Folk, char *BirthDay, char *Code, char *Address, char *Agency,
                      char *ExpireStart, char *ExpireEnd,char *BmpPath)
{
//    QTextCodec *codec = QTextCodec::codecForName("System"); //系统编码
//    QTextCodec::setCodecForLocale(codec);

    qDebug() << "start:  \n";
    QLibrary lib("RdCard.dll");
    bool retLib = lib.load();
    if (retLib) {
        qDebug() << "had loaded\n";

        _UCommand1 UCommand1=(_UCommand1)lib.resolve("UCommand1");
        _GetName   GetName= (_GetName)lib.resolve("GetName");
        _GetSexGB GetSexGB= (_GetSexGB)lib.resolve("GetSexGB");
        _GetFolkGB GetFolkGB=(_GetFolkGB)lib.resolve("GetFolkGB");
        _GetBirth GetBirth = (_GetBirth)lib.resolve("GetBirth");
        _GetAddr  GetAddr = (_GetAddr)lib.resolve("GetAddr");
        _GetIDNum GetIDNum=(_GetIDNum)lib.resolve("GetIDNum");
        _GetDep   GetDep  =(_GetDep)lib.resolve("GetDep");
        _GetBegin GetBegin=(_GetBegin)lib.resolve("GetBegin");
        _GetEnd   GetEnd  =(_GetEnd)lib.resolve("GetEnd");
        _GetBmpPath GetBmpPath=(_GetBmpPath)lib.resolve("GetBmpPath");

        unsigned char cmd = 0x41;
        int para0 = 0, para1 = 8811, para2 = 9986;
        int ret = UCommand1(&cmd, &para0, &para1, &para2);
        if(ret != 62171&& ret != 62172 && ret != 62173 && ret != 62174)
        {
             QMessageBox::information(NULL, ("提示"),"设备连接失败，请检查设备是否插好！ \n");
            return false;
        }

        //验证卡（寻卡）
            cmd = 0x43;
            ret = UCommand1(&cmd, &para0, &para1, &para2);

            //读卡
            cmd = 0x49;
            ret = UCommand1(&cmd, &para0, &para1, &para2);
            qDebug()<<ret<<endl;

            if(ret != 62171 && ret != 62172 && ret != 62173 && ret != 62174)
            {
                 QMessageBox::information(NULL, ("提示"),("读卡失败！ "));
                return false;
            }



            switch(ret)
            {
            case 62172://二代证
                {
                 // QMessageBox::information(NULL, ("提示"),("读卡成功！ "));
                    GetName(Name);
                    TrimStr(Name);
                    GetSexGB(Gender);
                    GetFolkGB(Folk);
                    GetBirth(BirthDay);
                    GetAddr(Address);
                    TrimStr(Address);
                    GetIDNum(Code);
                    GetDep(Agency);
                    TrimStr(Agency);
                    GetBegin(ExpireStart);
                    GetEnd(ExpireEnd);
                    GetBmpPath(BmpPath);
//                    GetNewAddr(NewAddress);
//                    TrimStr(NewAddress);

                    break;
                }
            }

            //关闭读卡器
                cmd = 0x42;
                UCommand1(&cmd, &para0, &para1, &para2);

              qDebug()<<Name <<Gender<<Gender<<BirthDay;
    } else {
        qDebug() <<"load error\n";
    }

    return true;
}

char *IDCard::TrimStr(char *str)
{
    char *head = str;
    while(*head == ' ')
    {
        ++head;
    }

    char *end = head + strlen(head) - 1;
    while(*end == ' ')
    {
        --end;
    }
    *(end + 1) = 0;
    strcpy(str, head);
    return str;
}
