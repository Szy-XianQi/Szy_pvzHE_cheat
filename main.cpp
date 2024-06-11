#include "widget.h"

#include <QApplication>
void checkGame(Widget* tmpW){
    while(1){
        DWORD processID = tmpW->Szy_GetProcessIDW(L"PlantsVsZombies.exe");
        if(!processID){
            tmpW->SetText(QString::fromLocal8Bit("未发现游戏进程"));
            tmpW->setGameProcessID(0);
        }
        else{
            tmpW->SetText(QString::fromLocal8Bit("注入进程:")+QString::number(processID));
            tmpW->setGameProcessID(processID);
            if(!tmpW->getFirst()){
                tmpW->init();
                tmpW->setFirst(true);
            }
        }
        Sleep(500);
    }
}
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    std::thread t1(checkGame,&w);
    w.show();
    return a.exec();
}
