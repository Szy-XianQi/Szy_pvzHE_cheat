#include "widget.h"

#include <QApplication>
bool threadflag{true};
void checkGame(Widget* tmpW){
    while(threadflag){
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
    int ret = a.exec();
    threadflag = false;
    t1.join();
    return ret;
}
