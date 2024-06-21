#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    setWindowIcon(QIcon("logo.ico"));
}

Widget::~Widget()
{
    delete ui;
}
void Widget::SetText(QString str){
    ui->label->setText(str);
    QRegExp regId("^[0-9]{5}$");
    ui->lineEdit->setValidator(new QRegExpValidator(regId,this));
    ui->lineEdit_2->setValidator(new QRegExpValidator(regId,this));
    ui->lineEdit_3->setValidator(new QRegExpValidator(regId,this));
}
void Widget::init(){
    if(GameProcessID != 0){
        GameProcessHandle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, GameProcessID);
        GameHandle = Szy_GetModuleHandleW(GameProcessHandle, L"PlantsVsZombies.exe");
        int tempint = 0;
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x87296),&tempint,sizeof(tempint),0);
        if(tempint == 0x47C71474)
            ui->checkBox_2->setChecked(true);
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0xFE2F),&tempint,sizeof(tempint),0);
        if(tempint == 0x000920E9)
            ui->checkBox_3->setChecked(true);
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x443550),&tempint,sizeof(tempint),0);
        if(tempint == 0x005046C6)
            ui->checkBox_4->setChecked(true);
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x6103A),&tempint,sizeof(tempint),0);
        if(tempint == 0x019C840F)
            ui->checkBox_5->setChecked(true);
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x64A96),&tempint,sizeof(tempint),0);
        if(tempint == 0xFE98840F)
            ui->checkBox_6->setChecked(true);
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x14EBA8),&tempint,sizeof(tempint),0);
        if(tempint == 0xBE809090)
            ui->checkBox_7->setChecked(true);
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x13431),&tempint,sizeof(tempint),0);
        if(tempint ==  0x00047FE9)
            ui->checkBox_8->setChecked(true);
        long long templong = 0;
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x10AE6),&templong,sizeof(templong),0);
        if(templong ==  0x5C8B909090909090)
            ui->checkBox_9->setChecked(true);
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x13E45),&templong,sizeof(templong),0);
        if(templong ==  0x3B90909090909090)
            ui->checkBox_10->setChecked(true);
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x1D8FF),&tempint,sizeof(tempint),0);
        if(tempint ==  0xD9F720EB)
            ui->checkBox_11->setChecked(true);
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x12A8AF),&templong,sizeof(templong),0);
        if(templong ==  0x00000006249084C7){
            ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x12A8AF+8),&templong,sizeof(templong),0);
            if(templong == 0xE43FE90E8B000000)
                ui->checkBox_12->setChecked(true);
        }
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x1A679),&tempint,sizeof(tempint),0);
        if(tempint ==  0x000000BA){
            ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x1A680),&tempint,sizeof(tempint),0);
            if(tempint ==  0x000000BA)
                ui->checkBox_13->setChecked(true);
        }
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x13130F),&templong,sizeof(templong),0);
        if(templong ==  0x909010000000EF81)
            ui->checkBox_14->setChecked(true);
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x12FCF0),&tempint,sizeof(tempint),0);
        if(tempint == 0x00404683)
            ui->checkBox_15->setChecked(true);
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x5FE53),&templong,sizeof(templong),0);
        if(templong ==  0x478B909090909090)
            ui->checkBox_16->setChecked(true);
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x125CAB),&tempint,sizeof(tempint),0);
        if(tempint ==  0x7F839090){
            ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x125CC6),&tempint,sizeof(tempint),0);
            if(tempint ==  0x006A9090)
                ui->checkBox_17->setChecked(true);
        }
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x12AED4),&tempint,sizeof(tempint),0);
        if(tempint == 0x46839090){
            ui->checkBox_18->setChecked(true);
        }
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x12BEE7),&tempint,sizeof(tempint),0);
        if(tempint == 0x01B09090){
            ui->checkBox_19->setChecked(true);
        }
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x60837),&templong,sizeof(templong),0);
        if(templong ==  0xBB80909090909090){
            ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x60929),&tempint,sizeof(tempint),0);
            if(tempint == 0xFE8345EB){
                ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x60747),&tempint,sizeof(tempint),0);
                if(tempint == 0x448B5FEB)
                    ui->checkBox_20->setChecked(true);
            }
        }
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x6C769),&templong,sizeof(templong),0);
        if(templong == 0x245CD9C68B5C4589)
            ui->radioButton_16->setChecked(true);
        else
        {
            ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1948),&templong,sizeof(templong),0);
            if(templong == 0xEB0000000B5C45C7)
               ui->radioButton_18->setChecked(true);
            else if (templong == 0xEB000000125C45C7)
                 ui->radioButton_17->setChecked(true);
            else if(templong == 0xEB0000000C5C45C7)
                ui->radioButton_20->setChecked(true);
            else if(templong == 0xEB0000001A5C45C7)
                ui->radioButton_21->setChecked(true);
            else if(templong == 0xEB000000055C45C7)
                ui->radioButton_22->setChecked(true);
            else if(templong == 0xEB000000185C45C7)
                ui->radioButton_19->setChecked(true);
            else if(templong == 0xEB000000115C45C7)
                ui->radioButton_23->setChecked(true);
        }
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2A9EAB),&tempint,sizeof(tempint),0);
        if(tempint == 1)
            ui->radioButton_2->setChecked(true);
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2A9EAA),&tempint,sizeof(tempint),0);
        if(tempint == 1)
            ui->radioButton_3->setChecked(true);
    }
}
DWORD Widget::Szy_GetProcessIDW(const wchar_t* ProcessName)
{
    HANDLE hSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    PROCESSENTRY32W ProcessTable;
    memset(&ProcessTable,0,sizeof(PROCESSENTRY32W));
    ProcessTable.dwSize = sizeof(PROCESSENTRY32);
    bool rt = Process32First(hSnapshot, &ProcessTable);
    if (wcscmp(ProcessTable.szExeFile, ProcessName) == 0) {
        return ProcessTable.th32ProcessID;
    }
    while (rt)
    {
        rt = Process32Next(hSnapshot, &ProcessTable);
        if (wcscmp(ProcessTable.szExeFile, ProcessName) == 0) {
            return ProcessTable.th32ProcessID;
        }
    }
    return 0;
}
void Widget::setGameProcessID(DWORD ProcessID){
    if(ProcessID != 0){
        if(ProcessID != GameProcessID){
            GameProcessID = ProcessID;
            GameProcessHandle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, GameProcessID);
            GameHandle = Szy_GetModuleHandleW(GameProcessHandle, L"PlantsVsZombies.exe");
        }
        if(wxyg){
            DWORD64 tempYGAddr = 0; //临时阳光地址
            ReadProcessMemory(GameProcessHandle, (LPVOID)((DWORD64)(GameHandle) + 0x2A9EC0), &tempYGAddr, sizeof(DWORD64), 0); //一级偏移
            ReadProcessMemory(GameProcessHandle, (LPVOID)(tempYGAddr + 0x768), &tempYGAddr, sizeof(DWORD64), 0);//二级偏移
            int WriteYG = 9999; //写入阳光数量
            WriteProcessMemory(GameProcessHandle, (LPVOID)(tempYGAddr + 0x5560), &WriteYG, sizeof(WriteYG), 0);
        }
        if(wxxk){
            int tempxkAddr = 0; //临时阳光地址
            ReadProcessMemory(GameProcessHandle, (LPVOID)((DWORD64)(GameHandle) + 0x2A9EC0), &tempxkAddr, sizeof(tempxkAddr), 0); //基地址
            ReadProcessMemory(GameProcessHandle, (LPVOID)((DWORD64)(tempxkAddr) + 0x774), &tempxkAddr, sizeof(tempxkAddr), 0); //一级偏移
            ReadProcessMemory(GameProcessHandle, (LPVOID)((DWORD64)(tempxkAddr) + 0x88), &tempxkAddr, sizeof(tempxkAddr), 0); //一级偏移
            int Writexk = 0; //写入数据状态
            WriteProcessMemory(GameProcessHandle, (LPVOID)(tempxkAddr + 0x18), &Writexk, sizeof(Writexk), 0);//按钮状态
            Writexk = 255; //写入数据RGB
            WriteProcessMemory(GameProcessHandle, (LPVOID)(tempxkAddr + 0x1C), &Writexk, sizeof(Writexk), 0);//按钮状态
            WriteProcessMemory(GameProcessHandle, (LPVOID)(tempxkAddr + 0x20), &Writexk, sizeof(Writexk), 0);//按钮状态
            WriteProcessMemory(GameProcessHandle, (LPVOID)(tempxkAddr + 0x24), &Writexk, sizeof(Writexk), 0);//按钮状态


        }
        int carhead = 0x99FC05D9;
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x58000),&carhead,sizeof(carhead),0);
        int cartail = 0x003047C6;
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x58D1C),&cartail,sizeof(cartail),0);
        DWORD64 tempGWAddr = 0; //临时怪物倒计时地址
        int GW,SL;
        ReadProcessMemory(GameProcessHandle, (LPVOID)((DWORD64)(GameHandle) + 0x2A9EC0), &tempGWAddr, sizeof(DWORD64), 0); //一级偏移
        ReadProcessMemory(GameProcessHandle, (LPVOID)(tempGWAddr + 0x768), &tempGWAddr, sizeof(DWORD64), 0);
        ReadProcessMemory(GameProcessHandle, (LPVOID)(tempGWAddr + 0x559C), &GW, sizeof(GW), 0);//倒计时三级偏移
        ReadProcessMemory(GameProcessHandle, (LPVOID)(tempGWAddr + 0xA0), &SL, sizeof(SL), 0);//数量三级偏移
        if(GW<9000)
            ui->label_2->setText(QString::fromLocal8Bit("刷怪倒计时:")+QString::number(GW));
        if(SL<2000)
            ui->label_3->setText(QString::fromLocal8Bit("场上僵尸数:")+QString::number(SL));
    }
    else{
       wxxk = false;
       wxyg = false;
       ui->checkBox->setChecked(false);
       ui->checkBox_2->setChecked(false);
       ui->checkBox_3->setChecked(false);
       ui->checkBox_4->setChecked(false);
       ui->checkBox_5->setChecked(false);
       ui->checkBox_6->setChecked(false);
       ui->checkBox_7->setChecked(false);
       ui->checkBox_8->setChecked(false);
       ui->checkBox_9->setChecked(false);
       ui->checkBox_10->setChecked(false);
       ui->checkBox_11->setChecked(false);
       ui->checkBox_12->setChecked(false);
       ui->checkBox_13->setChecked(false);
       ui->checkBox_14->setChecked(false);
       ui->checkBox_15->setChecked(false);
       ui->checkBox_16->setChecked(false);
       ui->checkBox_17->setChecked(false);
       ui->checkBox_18->setChecked(false);
       ui->checkBox_19->setChecked(false);
       ui->checkBox_20->setChecked(false);
       ui->checkBox_21->setChecked(false);
       ui->checkBox_22->setChecked(false);
       ui->radioButton->setChecked(true);
       ui->radioButton_16->setChecked(true);
    }
}
DWORD Widget::getGameProcessID(){
    return GameProcessID;
}
bool Widget::getFirst(){
    return first;
}
void Widget::setFirst(bool toFitst){
    first = toFitst;
}
HMODULE Widget::Szy_GetModuleHandleW(HANDLE ProcessHandle, const wchar_t* ModuleName)
{
    HMODULE ModuleHandle[1024];
    memset(&ModuleHandle,0,sizeof(ModuleHandle));
    DWORD cbNeeded{0};
    if (K32EnumProcessModulesEx(ProcessHandle, ModuleHandle, sizeof(ModuleHandle), &cbNeeded, LIST_MODULES_ALL))
    {
        for (DWORD i = 0; i < (cbNeeded / sizeof(HMODULE)); i++)
        {
            wchar_t szModName[MAX_PATH];
            K32GetModuleBaseNameW(ProcessHandle, ModuleHandle[i], szModName, sizeof(szModName) / sizeof(TCHAR));
            if (wcscmp(szModName, ModuleName) == 0)
            {
                return ModuleHandle[i];
            }
        }
    }
    return 0;
}
void Widget::on_checkBox_stateChanged(int arg1)//无限阳光
{
    if(GameProcessID != 0){
        if(arg1 == 2){//被选中
            wxyg = true;
        }
        else{
            wxyg = false;
        }
    }
}
void Widget::on_checkBox_2_stateChanged(int arg1)//无需冷却
{
    if(GameProcessID != 0){
        int WriteLQ;
        if(arg1 == 2){//被选中
            WriteLQ = 0x47C71474;
        }
        else{
            WriteLQ = 0x47C7147E;
        }
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x87296), &WriteLQ, sizeof(WriteLQ), 0);
    }
}
void Widget::on_checkBox_3_stateChanged(int arg1)//任意种植
{
    if(GameProcessID != 0){
        int WriteZZ;
        if(arg1 == 2){//被选中
            WriteZZ = 0x000920E9;
        }
        else{
            WriteZZ = 0x091F840F;
        }
        WriteProcessMemory(GameProcessHandle, LPVOID((DWORD64)(GameHandle) + 0xFE2F), &WriteZZ, sizeof(WriteZZ), 0);
    }
}
void Widget::on_checkBox_4_stateChanged(int arg1)//穿透帧伤
{
    if(GameProcessID != 0){
        int WriteCQ;
        if(arg1 == 2){//被选中
            WriteCQ = 0x005046C6;
        }
        else{
            WriteCQ = 0x015046C6;
        }
        WriteProcessMemory(GameProcessHandle, LPVOID((DWORD64)(GameHandle) + 0x443550), &WriteCQ, sizeof(WriteCQ), 0);
    }
}
void Widget::on_checkBox_5_stateChanged(int arg1)//快速填装
{
    if(GameProcessID != 0){
        int WriteTZ;
        if(arg1 == 2){//被选中
            WriteTZ = 0x019C840F;
        }
        else{
            WriteTZ = 0x019C850F;
        }
        WriteProcessMemory(GameProcessHandle, LPVOID((DWORD64)(GameHandle) + 0x6103A), &WriteTZ, sizeof(WriteTZ), 0);
    }
}
void Widget::on_checkBox_6_stateChanged(int arg1)//超级攻速
{
    if(GameProcessID != 0){
        int WriteGS;
        if(arg1 == 2){//被选中
            WriteGS = 0xFE98840F;
        }
        else{
            WriteGS = 0xFE98850F;
        }
        WriteProcessMemory(GameProcessHandle, LPVOID((DWORD64)(GameHandle) + 0x64A96), &WriteGS, sizeof(WriteGS), 0);
    }
}
void Widget::on_checkBox_7_stateChanged(int arg1)//后台运行
{
    if(GameProcessID != 0){
        int WriteHT;
        if(arg1 == 2){//被选中
            WriteHT = 0xBE809090;
        }
        else{
            WriteHT = 0xBE802E74;
        }
        WriteProcessMemory(GameProcessHandle, LPVOID((DWORD64)(GameHandle) + 0x14EBA8), &WriteHT, sizeof(WriteHT), 0);
    }
}
void Widget::on_checkBox_8_stateChanged(int arg1)//无视进家
{
    if(GameProcessID != 0){
        int WriteJJ;
        if(arg1 == 2){//被选中
            WriteJJ = 0x00047FE9;
        }
        else{
            WriteJJ = 0x047E840F;
        }
        WriteProcessMemory(GameProcessHandle, LPVOID((DWORD64)(GameHandle) + 0x13431), &WriteJJ, sizeof(WriteJJ), 0);
    }
}
void Widget::on_checkBox_9_stateChanged(int arg1)//竖排种植
{
    if(GameProcessID != 0){
        long long WritePSDH;
        if(arg1 == 2){//被选中
            WritePSDH = 0x5C8B909090909090;
        }
        else{
            WritePSDH = 0x5C8B000000E5850F;
        }
        WriteProcessMemory(GameProcessHandle, LPVOID((DWORD64)(GameHandle) + 0x10AE6), &WritePSDH, sizeof(WritePSDH), 0);
    }
}
void Widget::on_pushButton_clicked() //清除墓碑
{
    if(GameProcessID != 0){
        int WriteMB = 0xB70F9090;
        WriteProcessMemory(GameProcessHandle, LPVOID((DWORD64)(GameHandle) + 0x1BE28), &WriteMB, sizeof(WriteMB), 0);
        Sleep(200);
        WriteMB = 0xB70F9674;
        WriteProcessMemory(GameProcessHandle, LPVOID((DWORD64)(GameHandle) + 0x1BE28), &WriteMB, sizeof(WriteMB), 0);
    }
}
void Widget::on_pushButton_2_clicked() //清空植物
{
    if(GameProcessID != 0){
        int WriteZW = 0xB70F9090;
        WriteProcessMemory(GameProcessHandle, LPVOID((DWORD64)(GameHandle) + 0x1BB2E), &WriteZW, sizeof(WriteZW), 0);
        Sleep(200);
        WriteZW = 0xB70FB074;
        WriteProcessMemory(GameProcessHandle, LPVOID((DWORD64)(GameHandle) + 0x1BB2E), &WriteZW, sizeof(WriteZW), 0);
    }
}
void Widget::on_pushButton_3_clicked() //一键断头
{
    int cartempaddr;
    int carSL;
    ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2A9EC0),&cartempaddr,sizeof(cartempaddr),0);//小推车数量临时地址
    ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(cartempaddr) + 0x768),&cartempaddr,sizeof(cartempaddr),0);//一级偏移
    ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(cartempaddr) + 0x110),&carSL,sizeof(carSL),0);//二级偏移
    //根据小推车数量是否合法判断是否在局内
    if(carSL < 0 || carSL > 6)
        return;
    int tempzombieaddr{0};
    int zombieaddr{0};
    ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2A9EC0),&tempzombieaddr,sizeof(tempzombieaddr),0);
    ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(tempzombieaddr) + 0x768),&tempzombieaddr,sizeof(tempzombieaddr),0);
    ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(tempzombieaddr) + 0x90),&zombieaddr,sizeof(zombieaddr),0);
    int Writefalg = 3;
    for(int i = 0;i<=1000;i++){
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(zombieaddr) + 0x28+(i*0x204)),&Writefalg,sizeof(Writefalg),0);
    }
}
void Widget::on_checkBox_10_stateChanged(int arg1) //暂停刷怪
{
    if(GameProcessID != 0){
        long long WriteTZSG;
        if(arg1 == 2){//被选中
            WriteTZSG = 0x3B90909090909090;
        }
        else{
            WriteTZSG = 0x3BFF0000559C8783;
        }
        WriteProcessMemory(GameProcessHandle, LPVOID((DWORD64)(GameHandle) + 0x13E45), &WriteTZSG, sizeof(WriteTZSG), 0);
    }
}
void Widget::on_pushButton_4_clicked() //僵尸全出
{
    if(GameProcessID != 0){
        //更改
        long long temp1 = 0x00010000559C87C7;
        long long temp2 = 0xE9FF0000559C8783;
        long long temp3 = 0x000000FFD324F2E9;
        long long WriteSGTZ = 0x3B9090002CDAFAE9;
        WriteProcessMemory(GameProcessHandle, LPVOID((DWORD64)(GameHandle) + 0x2E1944), &temp1, sizeof(temp1), 0);
        WriteProcessMemory(GameProcessHandle, LPVOID((DWORD64)(GameHandle) + 0x2E194E), &temp2, sizeof(temp2), 0);
        WriteProcessMemory(GameProcessHandle, LPVOID((DWORD64)(GameHandle) + 0x2E1955), &temp3, sizeof(temp3), 0);
        WriteProcessMemory(GameProcessHandle, LPVOID((DWORD64)(GameHandle) + 0x13E45), &WriteSGTZ, sizeof(WriteSGTZ), 0);
        Sleep(500);
        //还原
        WriteSGTZ = 0x3BFF0000559C8783;
        temp1 = 0;
        temp2 = 0;
        temp3 = 0;
        WriteProcessMemory(GameProcessHandle, LPVOID((DWORD64)(GameHandle) + 0x13E45), &WriteSGTZ, sizeof(WriteSGTZ), 0);
        WriteProcessMemory(GameProcessHandle, LPVOID((DWORD64)(GameHandle) + 0x2E1944), &temp1, sizeof(temp1), 0);
        WriteProcessMemory(GameProcessHandle, LPVOID((DWORD64)(GameHandle) + 0x2E194E), &temp2, sizeof(temp2), 0);
        WriteProcessMemory(GameProcessHandle, LPVOID((DWORD64)(GameHandle) + 0x2E1955), &temp3, sizeof(temp3), 0);
        ui->checkBox_10->setChecked(false);
    }
}
void Widget::on_checkBox_11_stateChanged(int arg1) //爆炸全屏
{
    if(GameProcessID != 0){
        int WriteBZFW;
        int WriteLJFW;
        if(arg1 == 2){//被选中
            WriteBZFW = 0xD9F720EB;
            WriteLJFW = 0xE8539090;
        }
        else{
            WriteBZFW = 0xD9F73E7F;
            WriteLJFW = 0xE8533975;
        }
        WriteProcessMemory(GameProcessHandle, LPVOID((DWORD64)(GameHandle) + 0x1D8FF), &WriteBZFW, sizeof(WriteBZFW), 0);
        WriteProcessMemory(GameProcessHandle, LPVOID((DWORD64)(GameHandle) + 0x664F2), &WriteLJFW, sizeof(WriteLJFW), 0);
    }
}
void Widget::on_checkBox_12_stateChanged(int arg1) //无视冰道
{
    if(GameProcessID != 0){
        long long WriteWSBD1;
        long long WriteWSBD2;
        if(arg1 == 2){//被选中
            WriteWSBD1 = 0x00000006249084C7;
            WriteWSBD2 = 0xE43FE90E8B000000;
        }
        else{
            WriteWSBD1 = 0xB8000006249084C7;
            WriteWSBD2 = 0xE43FE90E8B00000B;
        }
        WriteProcessMemory(GameProcessHandle, LPVOID((DWORD64)(GameHandle) + 0x12A8AF), &WriteWSBD1, sizeof(WriteWSBD1), 0);
        WriteProcessMemory(GameProcessHandle, LPVOID((DWORD64)(GameHandle) + 0x12A8AF + 8), &WriteWSBD2, sizeof(WriteWSBD2), 0);
    }
}
void Widget::on_checkBox_13_stateChanged(int arg1) // 无视迷雾
{
    if(GameProcessID != 0){
        int WriteWSMW1;
        int WriteWSMW2;
        if(arg1 == 2){//被选中
            WriteWSMW1 = 0x000000BA;
            WriteWSMW2 = 0x000000BA;
        }
        else{
            WriteWSMW1 = 0x0000FFBA;
            WriteWSMW2 = 0x0000C8BA;
        }
        WriteProcessMemory(GameProcessHandle, LPVOID((DWORD64)(GameHandle) + 0x1A679), &WriteWSMW1, sizeof(WriteWSMW1), 0);
        WriteProcessMemory(GameProcessHandle, LPVOID((DWORD64)(GameHandle) + 0x1A680), &WriteWSMW2, sizeof(WriteWSMW2), 0);
    }
}
void Widget::on_checkBox_14_stateChanged(int arg1) //脆皮僵尸
{
    if(GameProcessID != 0){
        long long WriteCPJS1;
        int WriteCPJS2;
        int WriteCPJS3;
        if(arg1 == 2){//被选中
            WriteCPJS1 = 0x909010000000EF81;
            WriteCPJS2 = 0x50539090;
            WriteCPJS3 = 0xBE839090;
        }
        else{
            WriteCPJS1 = 0x1C24448920247C2B;
            WriteCPJS2 = 0x5053087E;
            WriteCPJS3 = 0xBE831D7E;
        }
        WriteProcessMemory(GameProcessHandle, LPVOID((DWORD64)(GameHandle) + 0x13130F), &WriteCPJS1, sizeof(WriteCPJS1), 0);
        WriteProcessMemory(GameProcessHandle, LPVOID((DWORD64)(GameHandle) + 0x13186D), &WriteCPJS2, sizeof(WriteCPJS2), 0);
        WriteProcessMemory(GameProcessHandle, LPVOID((DWORD64)(GameHandle) + 0x131858), &WriteCPJS3, sizeof(WriteCPJS3), 0);

    }
}
void Widget::on_checkBox_15_stateChanged(int arg1) //植物无敌
{
    if(GameProcessID != 0){
        int WriteWD;
        if(arg1 == 2){//被选中
            WriteWD = 0x00404683;
        }
        else{
            WriteWD = 0xFC404683;
        }
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x12FCF0), &WriteWD, sizeof(WriteWD), 0);
    }
}
void GBcall() //通关call
{
    __asm
    {

        mov ebx,0x006A9EC0
        mov ecx, [ebx]
        mov ecx, [ecx+0x00000768]
        mov ebx, 0x0040C3E0
        call ebx
    }
}
void Widget::on_pushButton_5_clicked() //直接过关
{
    if(GameProcessID != 0){
        int cartempaddr;
        int carSL;
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2A9EC0),&cartempaddr,sizeof(cartempaddr),0);//小推车数量临时地址
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(cartempaddr) + 0x768),&cartempaddr,sizeof(cartempaddr),0);//一级偏移
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(cartempaddr) + 0x110),&carSL,sizeof(carSL),0);//二级偏移
        //根据小推车数量是否合法判断是否在局内
        if(carSL < 0 || carSL > 6)
            return;
        DWORD tempThreadId{0}; //线程ID
        //开辟内存空间
        LPVOID tempaddr = VirtualAllocEx(GameProcessHandle,NULL,0x40900,MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);
        //注入汇编代码
        WriteProcessMemory(GameProcessHandle,tempaddr,GBcall,0x40900,0);
        //调用注入的代码
        HANDLE tempThreadHandle = CreateRemoteThread(GameProcessHandle,NULL,0,(LPTHREAD_START_ROUTINE)tempaddr,NULL,0,&tempThreadId);
        WaitForSingleObject(tempThreadHandle,INFINITE); //等待注入代码运行结束
        VirtualFreeEx(GameProcessHandle,tempaddr,0,MEM_RELEASE);//释放开辟的空间
    }
}
void Widget::on_checkBox_16_stateChanged(int arg1) //地雷秒出
{
    if(GameProcessID != 0){
        long long WriteMQ;
        if(arg1 == 2){//被选中
            WriteMQ = 0x478B909090909090;
        }
        else{
            WriteMQ = 0x478B000001FA850F;

        }
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x5FE53), &WriteMQ, sizeof(WriteMQ), 0);
    }
}
void Widget::on_checkBox_17_stateChanged(int arg1) //气球自爆
{
    if(GameProcessID != 0){
        int WriteQQ1;
        int WriteQQ2;
        if(arg1 == 2){//被选中
            WriteQQ1 = 0x7F839090;
            WriteQQ2 = 0x006A9090;
        }
        else{
            WriteQQ1 = 0x7F832475;
            WriteQQ2 = 0x006A0974;
        }
        WriteProcessMemory(GameProcessHandle, LPVOID((DWORD64)(GameHandle) + 0x125CAB), &WriteQQ1, sizeof(WriteQQ1), 0);
        WriteProcessMemory(GameProcessHandle, LPVOID((DWORD64)(GameHandle) + 0x125CC6), &WriteQQ2, sizeof(WriteQQ2), 0);
    }
}
void Widget::on_checkBox_18_stateChanged(int arg1) //僵尸罚站
{
    if(GameProcessID != 0){
        int WriteFZ;
        if(arg1 == 2){//被选中
            WriteFZ = 0x46839090;
            ui->pushButton_3->setEnabled(false);
             ui->pushButton_10->setEnabled(false);
        }
        else{
            WriteFZ = 0x46831D75;
            ui->pushButton_3->setEnabled(true);
            ui->pushButton_10->setEnabled(true);
        }
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x12AED4), &WriteFZ, sizeof(WriteFZ), 0);
    }
}
void Widget::on_checkBox_19_stateChanged(int arg1) //僵尸回头
{
    if(GameProcessID != 0){
        int WriteHT;
        if(arg1 == 2){//被选中
            WriteHT = 0x01B09090;
        }
        else{
            WriteHT = 0x01B00374;
        }
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x12BEE7), &WriteHT, sizeof(WriteHT), 0);
    }
}
void Widget::on_checkBox_20_stateChanged(int arg1) //窝瓜全屏
{
    if(GameProcessID != 0){
        long long WriteWGQP1;
        int WriteWGQP2;
        int WriteWGQP3;
        if(arg1 == 2){//被选中
            WriteWGQP1 = 0xBB80909090909090;
            WriteWGQP2 = 0xFE8345EB;
            WriteWGQP3 = 0x448B5FEB;
        }
        else{
            WriteWGQP1 = 0xBB8000000162850F;
            WriteWGQP2 = 0xFE83707F;
            WriteWGQP3 = 0x448B7275;
        }
        WriteProcessMemory(GameProcessHandle, LPVOID((DWORD64)(GameHandle) + 0x60837), &WriteWGQP1, sizeof(WriteWGQP1), 0);
        WriteProcessMemory(GameProcessHandle, LPVOID((DWORD64)(GameHandle) + 0x60929), &WriteWGQP2, sizeof(WriteWGQP2), 0);
        WriteProcessMemory(GameProcessHandle, LPVOID((DWORD64)(GameHandle) + 0x60747), &WriteWGQP3, sizeof(WriteWGQP3), 0);
    }
}
void FCcall() //发车call
{
    //第一辆车
    __asm
    {
        mov edx,0x6A9EC0
        mov esi,[edx]
        mov esi,[esi+0x768]
        mov esi,[esi+0x100]
        mov edx,0x00458DA0
        call edx
    }
    //第二辆车
    __asm
    {
        mov edx,0x6A9EC0
        mov esi,[edx]
        mov esi,[esi+0x768]
        mov esi,[esi+0x100]
        add esi,0x48
        mov edx,0x00458DA0
        call edx
    }
    //第三辆车
    __asm
    {
        mov edx,0x6A9EC0
        mov esi,[edx]
        mov esi,[esi+0x768]
        mov esi,[esi+0x100]
        add esi,0x48
        add esi,0x48
        mov edx,0x00458DA0
        call edx
    }
    //第四辆车
    __asm
    {
        mov edx,0x6A9EC0
        mov esi,[edx]
        mov esi,[esi+0x768]
        mov esi,[esi+0x100]
        add esi,0x48
        add esi,0x48
        add esi,0x48
        mov edx,0x00458DA0
        call edx
    }
    //第五辆车
    __asm
    {
        mov edx,0x6A9EC0
        mov esi,[edx]
        mov esi,[esi+0x768]
        mov esi,[esi+0x100]
        add esi,0x48
        add esi,0x48
        add esi,0x48
        add esi,0x48
        mov edx,0x00458DA0
        call edx
    }
    //第六辆车
    __asm
    {
        mov edx,0x6A9EC0
        mov esi,[edx]
        mov esi,[esi+0x768]
        mov esi,[esi+0x110]
        cmp esi,6 //读取车数量判断是否大于等于5
        jl less_than //大于五则为六辆车 发第六辆车 否则不发第六辆车
            mov edx,0x6A9EC0
            mov esi,[edx]
            mov esi,[esi+0x768]
            mov esi,[esi+0x100]
            add esi,0x48
            add esi,0x48
            add esi,0x48
            add esi,0x48
            add esi,0x48
            mov edx,0x00458DA0
            call edx
        less_than:
    }
}
void Widget::on_pushButton_6_clicked() //一键发车
{
    if(GameProcessID != 0){
        int cartempaddr;
        int carSL;
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2A9EC0),&cartempaddr,sizeof(cartempaddr),0);//小推车数量临时地址
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(cartempaddr) + 0x768),&cartempaddr,sizeof(cartempaddr),0);//一级偏移
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(cartempaddr) + 0x110),&carSL,sizeof(carSL),0);//二级偏移
        //根据小推车数量是否合法判断是否在局内
        if(carSL <= 0 || carSL > 6)
            return;
        DWORD tempThreadId{0}; //线程ID
        //开辟内存空间
        LPVOID tempaddr = VirtualAllocEx(GameProcessHandle,NULL,0x40900,MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);
        //注入汇编代码
        WriteProcessMemory(GameProcessHandle,tempaddr,FCcall,0x40900,0);
        //调用注入的代码
        HANDLE tempThreadHandle = CreateRemoteThread(GameProcessHandle,NULL,0,(LPTHREAD_START_ROUTINE)tempaddr,NULL,0,&tempThreadId);
        WaitForSingleObject(tempThreadHandle,INFINITE); //等待注入代码运行结束
        VirtualFreeEx(GameProcessHandle,tempaddr,0,MEM_RELEASE);//释放开辟的空间
    }
}
void SXTCcall() //推车归位call
{
    //第一辆车
    __asm
    {
        mov edx,0x6A9EC0
        mov esi,[edx]
        mov esi,[esi+0x768]
        mov esi,[esi+0x100]
        push esi
        mov eax,0
        mov edx,0x00458000
        call edx
    }
    //第二辆车
    __asm
    {
        mov edx,0x6A9EC0
        mov esi,[edx]
        mov esi,[esi+0x768]
        mov esi,[esi+0x100]
        add esi,0x48
        push esi
        mov eax,1
        mov edx,0x00458000
        call edx
    }
    //第三辆车
    __asm
    {
        mov edx,0x6A9EC0
        mov esi,[edx]
        mov esi,[esi+0x768]
        mov esi,[esi+0x100]
        add esi,0x48
        add esi,0x48
        push esi
        mov eax,2
        mov edx,0x00458000
        call edx
    }
    //第四辆车
    __asm
    {
        mov edx,0x6A9EC0
        mov esi,[edx]
        mov esi,[esi+0x768]
        mov esi,[esi+0x100]
        add esi,0x48
        add esi,0x48
        add esi,0x48
        push esi
        mov eax,3
        mov edx,0x00458000
        call edx
    }
    //第五辆车
    __asm
    {
        mov edx,0x6A9EC0
        mov esi,[edx]
        mov esi,[esi+0x768]
        mov esi,[esi+0x100]
        add esi,0x48
        add esi,0x48
        add esi,0x48
        add esi,0x48
        push esi
        mov eax,4
        mov edx,0x00458000
        call edx
    }
    //第六辆车
    __asm
    {
        mov edx,0x6A9EC0
        mov esi,[edx]
        mov esi,[esi+0x768]
        mov esi,[esi+0x110]
        cmp esi,6 //读取车数量判断是否大于等于5
        jl less_than //大于五则为六辆车 发第六辆车 否则不刷新第六辆车
        mov edx,0x6A9EC0
        mov esi,[edx]
        mov esi,[esi+0x768]
        mov esi,[esi+0x100]
        add esi,0x48
        add esi,0x48
        add esi,0x48
        add esi,0x48
        add esi,0x48
        push esi
        mov eax,5
        mov edx,0x00458000
        call edx
    less_than:
    }
}
void Widget::on_pushButton_8_clicked() //推车归位
{
    if(GameProcessID != 0){
        int cartempaddr;
        int carSL;
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2A9EC0),&cartempaddr,sizeof(cartempaddr),0);//小推车数量临时地址
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(cartempaddr) + 0x768),&cartempaddr,sizeof(cartempaddr),0);//一级偏移
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(cartempaddr) + 0x110),&carSL,sizeof(carSL),0);//二级偏移
        //根据小推车数量是否合法判断是否在局内
        if(carSL < 0 || carSL > 6)
            return;
        DWORD tempThreadId{0}; //线程ID
        //开辟内存空间
        LPVOID tempaddr = VirtualAllocEx(GameProcessHandle,NULL,0x40900,MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);
        //注入汇编代码
        WriteProcessMemory(GameProcessHandle,tempaddr,SXTCcall,0x40900,0);
        //调用注入的代码
        HANDLE tempThreadHandle = CreateRemoteThread(GameProcessHandle,NULL,0,(LPTHREAD_START_ROUTINE)tempaddr,NULL,0,&tempThreadId);
        WaitForSingleObject(tempThreadHandle,INFINITE); //等待注入代码运行结束
        VirtualFreeEx(GameProcessHandle,tempaddr,0,MEM_RELEASE);//释放开辟的空间
    }
}
void Widget::on_radioButton_clicked() //标准速度
{
    if(GameProcessID != 0){
        int tempSeed = 0;
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2A9EAA),&tempSeed,sizeof(tempSeed),0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2A9EAB),&tempSeed,sizeof(tempSeed),0);
    }
}
void Widget::on_radioButton_2_clicked() //全局加速
{
    if(GameProcessID != 0){
        int tempSeed = 0;
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2A9EAA),&tempSeed,sizeof(tempSeed),0);
        tempSeed = 1;
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2A9EAB),&tempSeed,sizeof(tempSeed),0);
    }
}
void Widget::on_radioButton_3_clicked() //全局减速
{
    if(GameProcessID != 0){
        int tempSeed = 1;
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2A9EAA),&tempSeed,sizeof(tempSeed),0);
        tempSeed = 0;
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2A9EAB),&tempSeed,sizeof(tempSeed),0);
    }
}
void Widget::on_pushButton_9_clicked() //全场魅惑
{
    if(GameProcessID != 0){
        int cartempaddr;
        int carSL;
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2A9EC0),&cartempaddr,sizeof(cartempaddr),0);//小推车数量临时地址
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(cartempaddr) + 0x768),&cartempaddr,sizeof(cartempaddr),0);//一级偏移
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(cartempaddr) + 0x110),&carSL,sizeof(carSL),0);//二级偏移
        //根据小推车数量是否合法判断是否在局内
        if(carSL < 0 || carSL > 6)
            return;
        int tempzombieaddr{0};
        int zombieaddr{0};
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2A9EC0),&tempzombieaddr,sizeof(tempzombieaddr),0);
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(tempzombieaddr) + 0x768),&tempzombieaddr,sizeof(tempzombieaddr),0);
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(tempzombieaddr) + 0x90),&zombieaddr,sizeof(zombieaddr),0);
        int Writefalg = 1;
        for(int i = 0;i<=1000;i++){
            WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(zombieaddr) + 0xB8+(i*0x204)),&Writefalg,sizeof(Writefalg),0);
        }
    }

}
void Widget::on_pushButton_10_clicked() //超强大风
{
    if(GameProcessID != 0){
        int cartempaddr;
        int carSL;
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2A9EC0),&cartempaddr,sizeof(cartempaddr),0);//小推车数量临时地址
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(cartempaddr) + 0x768),&cartempaddr,sizeof(cartempaddr),0);//一级偏移
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(cartempaddr) + 0x110),&carSL,sizeof(carSL),0);//二级偏移
        //根据小推车数量是否合法判断是否在局内
        if(carSL < 0 || carSL > 6)
            return;
        int tempzombieaddr{0};
        int zombieaddr{0};
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2A9EC0),&tempzombieaddr,sizeof(tempzombieaddr),0);
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(tempzombieaddr) + 0x768),&tempzombieaddr,sizeof(tempzombieaddr),0);
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(tempzombieaddr) + 0x90),&zombieaddr,sizeof(zombieaddr),0);
        int Writefalg = 1;
        for(int i = 0;i<=1000;i++){
            WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(zombieaddr) + 0xB9+(i*0x204)),&Writefalg,sizeof(Writefalg),0);
        }
    }
}
void Widget::on_radioButton_16_clicked() //还原普通子弹
{
    if(GameProcessID != 0){
        long long WriteHookY,WriteHookHead,WriteHook1,WriteHook2,WriteHook3,WriteHook4,WriteHook5,WriteHook6,WriteHook7,WriteHook8;
        WriteHookY = 0x245CD9C68B5C4589;
        WriteHookHead = 0x0;
        WriteHook1 = 0x0;
        WriteHook2 = 0x0;
        WriteHook3 = 0x0;
        WriteHook4 = 0x0;
        WriteHook5 = 0x0;
        WriteHook6 = 0x0;
        WriteHook7 = 0x0;
        WriteHook8 = 0x0;
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x6C769), &WriteHookY, sizeof(WriteHookY), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E193E), &WriteHookHead, sizeof(WriteHookHead), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1941), &WriteHook1, sizeof(WriteHookHead), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1943), &WriteHook2, sizeof(WriteHook2), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1946), &WriteHook3, sizeof(WriteHook3), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1948), &WriteHook4, sizeof(WriteHook4), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E194F), &WriteHook5, sizeof(WriteHook5), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1951), &WriteHook6, sizeof(WriteHook6), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1954), &WriteHook7, sizeof(WriteHook7), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1956), &WriteHook8, sizeof(WriteHook8), 0);
    }
}
void Widget::on_radioButton_18_clicked() //毁灭菇
{
    if(GameProcessID != 0){
        long long WriteHookY,WriteHookHead,WriteHook1,WriteHook2,WriteHook3,WriteHook4,WriteHook5,WriteHook6,WriteHook7,WriteHook8;
        WriteHookY = 0x245CD9002751D0E9;
        WriteHookHead = 0x0FF88305740EF883;
        WriteHook1 = 0xC709750FF8830574;
        WriteHook2 = 0x5C45C709750FF883;
        WriteHook3 = 0x00000B5C45C70975;
        WriteHook4 = 0xEB0000000B5C45C7;
        WriteHook5 = 0xE9C68B5C458903EB;
        WriteHook6 = 0xAE13E9C68B5C4589;
        WriteHook7 = 0x90FFD8AE13E9C68B;
        WriteHook8 = 0x000090FFD8AE13E9;
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x6C769), &WriteHookY, sizeof(WriteHookY), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E193E), &WriteHookHead, sizeof(WriteHookHead), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1941), &WriteHook1, sizeof(WriteHookHead), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1943), &WriteHook2, sizeof(WriteHook2), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1946), &WriteHook3, sizeof(WriteHook3), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1948), &WriteHook4, sizeof(WriteHook4), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E194F), &WriteHook5, sizeof(WriteHook5), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1951), &WriteHook6, sizeof(WriteHook6), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1954), &WriteHook7, sizeof(WriteHook7), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1956), &WriteHook8, sizeof(WriteHook8), 0);
    }
}


void Widget::on_radioButton_17_clicked() //魅惑
{
    if(GameProcessID != 0){
        long long WriteHookY,WriteHookHead,WriteHook1,WriteHook2,WriteHook3,WriteHook4,WriteHook5,WriteHook6,WriteHook7,WriteHook8;
        WriteHookY = 0x245CD9002751D0E9;
        WriteHookHead = 0x0FF88305740EF883;
        WriteHook1 = 0xC709750FF8830574;
        WriteHook2 = 0x5C45C709750FF883;
        WriteHook3 = 0x00000B5C45C70975;
        WriteHook4 = 0xEB000000125C45C7;
        WriteHook5 = 0xE9C68B5C458903EB;
        WriteHook6 = 0xAE13E9C68B5C4589;
        WriteHook7 = 0x90FFD8AE13E9C68B;
        WriteHook8 = 0x000090FFD8AE13E9;
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x6C769), &WriteHookY, sizeof(WriteHookY), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E193E), &WriteHookHead, sizeof(WriteHookHead), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1941), &WriteHook1, sizeof(WriteHookHead), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1943), &WriteHook2, sizeof(WriteHook2), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1946), &WriteHook3, sizeof(WriteHook3), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1948), &WriteHook4, sizeof(WriteHook4), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E194F), &WriteHook5, sizeof(WriteHook5), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1951), &WriteHook6, sizeof(WriteHook6), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1954), &WriteHook7, sizeof(WriteHook7), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1956), &WriteHook8, sizeof(WriteHook8), 0);
    }
}


void Widget::on_radioButton_20_clicked() //黄油
{
    if(GameProcessID != 0){
        long long WriteHookY,WriteHookHead,WriteHook1,WriteHook2,WriteHook3,WriteHook4,WriteHook5,WriteHook6,WriteHook7,WriteHook8;
        WriteHookY = 0x245CD9002751D0E9;
        WriteHookHead = 0x0FF88305740EF883;
        WriteHook1 = 0xC709750FF8830574;
        WriteHook2 = 0x5C45C709750FF883;
        WriteHook3 = 0x00000B5C45C70975;
        WriteHook4 = 0xEB0000000C5C45C7;
        WriteHook5 = 0xE9C68B5C458903EB;
        WriteHook6 = 0xAE13E9C68B5C4589;
        WriteHook7 = 0x90FFD8AE13E9C68B;
        WriteHook8 = 0x000090FFD8AE13E9;
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x6C769), &WriteHookY, sizeof(WriteHookY), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E193E), &WriteHookHead, sizeof(WriteHookHead), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1941), &WriteHook1, sizeof(WriteHookHead), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1943), &WriteHook2, sizeof(WriteHook2), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1946), &WriteHook3, sizeof(WriteHook3), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1948), &WriteHook4, sizeof(WriteHook4), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E194F), &WriteHook5, sizeof(WriteHook5), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1951), &WriteHook6, sizeof(WriteHook6), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1954), &WriteHook7, sizeof(WriteHook7), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1956), &WriteHook8, sizeof(WriteHook8), 0);
    }
}


void Widget::on_radioButton_21_clicked() //土豆地雷
{
    if(GameProcessID != 0){
        long long WriteHookY,WriteHookHead,WriteHook1,WriteHook2,WriteHook3,WriteHook4,WriteHook5,WriteHook6,WriteHook7,WriteHook8;
        WriteHookY = 0x245CD9002751D0E9;
        WriteHookHead = 0x0FF88305740EF883;
        WriteHook1 = 0xC709750FF8830574;
        WriteHook2 = 0x5C45C709750FF883;
        WriteHook3 = 0x00000B5C45C70975;
        WriteHook4 = 0xEB0000001A5C45C7;
        WriteHook5 = 0xE9C68B5C458903EB;
        WriteHook6 = 0xAE13E9C68B5C4589;
        WriteHook7 = 0x90FFD8AE13E9C68B;
        WriteHook8 = 0x000090FFD8AE13E9;
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x6C769), &WriteHookY, sizeof(WriteHookY), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E193E), &WriteHookHead, sizeof(WriteHookHead), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1941), &WriteHook1, sizeof(WriteHookHead), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1943), &WriteHook2, sizeof(WriteHook2), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1946), &WriteHook3, sizeof(WriteHook3), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1948), &WriteHook4, sizeof(WriteHook4), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E194F), &WriteHook5, sizeof(WriteHook5), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1951), &WriteHook6, sizeof(WriteHook6), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1954), &WriteHook7, sizeof(WriteHook7), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1956), &WriteHook8, sizeof(WriteHook8), 0);
    }
}


void Widget::on_radioButton_22_clicked() //冰瓜
{
    if(GameProcessID != 0){
        long long WriteHookY,WriteHookHead,WriteHook1,WriteHook2,WriteHook3,WriteHook4,WriteHook5,WriteHook6,WriteHook7,WriteHook8;
        WriteHookY = 0x245CD9002751D0E9;
        WriteHookHead = 0x0FF88305740EF883;
        WriteHook1 = 0xC709750FF8830574;
        WriteHook2 = 0x5C45C709750FF883;
        WriteHook3 = 0x00000B5C45C70975;
        WriteHook4 = 0xEB000000055C45C7;
        WriteHook5 = 0xE9C68B5C458903EB;
        WriteHook6 = 0xAE13E9C68B5C4589;
        WriteHook7 = 0x90FFD8AE13E9C68B;
        WriteHook8 = 0x000090FFD8AE13E9;
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x6C769), &WriteHookY, sizeof(WriteHookY), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E193E), &WriteHookHead, sizeof(WriteHookHead), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1941), &WriteHook1, sizeof(WriteHookHead), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1943), &WriteHook2, sizeof(WriteHook2), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1946), &WriteHook3, sizeof(WriteHook3), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1948), &WriteHook4, sizeof(WriteHook4), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E194F), &WriteHook5, sizeof(WriteHook5), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1951), &WriteHook6, sizeof(WriteHook6), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1954), &WriteHook7, sizeof(WriteHook7), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1956), &WriteHook8, sizeof(WriteHook8), 0);
    }
}


void Widget::on_radioButton_19_clicked() //辣椒
{
    if(GameProcessID != 0){
        long long WriteHookY,WriteHookHead,WriteHook1,WriteHook2,WriteHook3,WriteHook4,WriteHook5,WriteHook6,WriteHook7,WriteHook8;
        WriteHookY = 0x245CD9002751D0E9;
        WriteHookHead = 0x0FF88305740EF883;
        WriteHook1 = 0xC709750FF8830574;
        WriteHook2 = 0x5C45C709750FF883;
        WriteHook3 = 0x00000B5C45C70975;
        WriteHook4 = 0xEB000000185C45C7;
        WriteHook5 = 0xE9C68B5C458903EB;
        WriteHook6 = 0xAE13E9C68B5C4589;
        WriteHook7 = 0x90FFD8AE13E9C68B;
        WriteHook8 = 0x000090FFD8AE13E9;
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x6C769), &WriteHookY, sizeof(WriteHookY), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E193E), &WriteHookHead, sizeof(WriteHookHead), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1941), &WriteHook1, sizeof(WriteHookHead), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1943), &WriteHook2, sizeof(WriteHook2), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1946), &WriteHook3, sizeof(WriteHook3), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1948), &WriteHook4, sizeof(WriteHook4), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E194F), &WriteHook5, sizeof(WriteHook5), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1951), &WriteHook6, sizeof(WriteHook6), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1954), &WriteHook7, sizeof(WriteHook7), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1956), &WriteHook8, sizeof(WriteHook8), 0);
    }
}


void Widget::on_radioButton_23_clicked() //冰刺
{
    if(GameProcessID != 0){
        long long WriteHookY,WriteHookHead,WriteHook1,WriteHook2,WriteHook3,WriteHook4,WriteHook5,WriteHook6,WriteHook7,WriteHook8;
        WriteHookY = 0x245CD9002751D0E9;
        WriteHookHead = 0x0FF88305740EF883;
        WriteHook1 = 0xC709750FF8830574;
        WriteHook2 = 0x5C45C709750FF883;
        WriteHook3 = 0x00000B5C45C70975;
        WriteHook4 = 0xEB000000115C45C7;
        WriteHook5 = 0xE9C68B5C458903EB;
        WriteHook6 = 0xAE13E9C68B5C4589;
        WriteHook7 = 0x90FFD8AE13E9C68B;
        WriteHook8 = 0x000090FFD8AE13E9;
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x6C769), &WriteHookY, sizeof(WriteHookY), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E193E), &WriteHookHead, sizeof(WriteHookHead), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1941), &WriteHook1, sizeof(WriteHookHead), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1943), &WriteHook2, sizeof(WriteHook2), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1946), &WriteHook3, sizeof(WriteHook3), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1948), &WriteHook4, sizeof(WriteHook4), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E194F), &WriteHook5, sizeof(WriteHook5), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1951), &WriteHook6, sizeof(WriteHook6), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1954), &WriteHook7, sizeof(WriteHook7), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1956), &WriteHook8, sizeof(WriteHook8), 0);
    }
}
void Widget::on_checkBox_21_stateChanged(int arg1) //无需选卡
{
    if(GameProcessID != 0){
        if(arg1 == 2){//被选中
            wxxk = true;
        }
        else{
            wxxk = false;
        }
    }
}
void Widget::on_checkBox_22_stateChanged(int arg1) //锁定铲子
{
    if(GameProcessID != 0){
        int tempaddr,WriteCzflag,WriteCzmov;
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2A9EC0),&tempaddr,sizeof(tempaddr),0);//基地址
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(tempaddr) + 0x768),&tempaddr,sizeof(tempaddr),0);//一级偏移
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(tempaddr) + 0x138),&tempaddr,sizeof(tempaddr),0);//二级偏移
        if(arg1 == 2){//被选中
            WriteCzflag = 6;
            WriteCzmov = 0x8B909090;
        }
        else{
            WriteCzflag = 0;
            WriteCzmov = 0x8B305A89;
        }
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(tempaddr) + 0x30), &WriteCzflag, sizeof(WriteCzflag), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x123A3), &WriteCzmov, sizeof(WriteCzmov), 0);
    }
}
void Widget::on_label_4_linkActivated(const QString &link) //GitHub超链接
{
    QDesktopServices::openUrl(QUrl(link));
}


void Widget::on_pushButton_7_clicked() //更改银币
{
    if(GameProcessID != 0){
        int tempaddr;
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2A9EC0),&tempaddr,sizeof(tempaddr),0);//基地址
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(tempaddr) + 0x82C),&tempaddr,sizeof(tempaddr),0);//一级偏移
        int WriteYB = ui->lineEdit->text().toInt();
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(tempaddr) + 0x208), &WriteYB, sizeof(WriteYB), 0);
    }
}
void Widget::on_pushButton_11_clicked() //更改金币
{
    if(GameProcessID != 0){
        int tempaddr;
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2A9EC0),&tempaddr,sizeof(tempaddr),0);//基地址
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(tempaddr) + 0x82C),&tempaddr,sizeof(tempaddr),0);//一级偏移
        int WriteJB = ui->lineEdit_2->text().toInt();
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(tempaddr) + 0x20C), &WriteJB, sizeof(WriteJB), 0);
    }
}
void Widget::on_pushButton_12_clicked() //更改钻石
{
    if(GameProcessID != 0){
        int tempaddr;
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2A9EC0),&tempaddr,sizeof(tempaddr),0);//基地址
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(tempaddr) + 0x82C),&tempaddr,sizeof(tempaddr),0);//一级偏移
        int WriteZS = ui->lineEdit_3->text().toInt();
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(tempaddr) + 0x210), &WriteZS, sizeof(WriteZS), 0);
    }
}

