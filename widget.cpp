#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    setWindowIcon(QIcon("logo.ico"));
    QRegExp regId("^[0-9]{5}$");
    ui->lineEdit->setValidator(new QRegExpValidator(regId,this));
    ui->lineEdit_2->setValidator(new QRegExpValidator(regId,this));
    ui->lineEdit_3->setValidator(new QRegExpValidator(regId,this));
    QRegExp regId1("^[1-6]{1}$");
    ui->lineEdit_4->setValidator(new QRegExpValidator(regId1,this));
    ui->lineEdit_10->setValidator(new QRegExpValidator(regId1,this));
    ui->lineEdit_12->setValidator(new QRegExpValidator(regId1,this));
    ui->lineEdit_14->setValidator(new QRegExpValidator(regId1,this));
    QRegExp regId2("^[1-9]{1}$");
    ui->lineEdit_5->setValidator(new QRegExpValidator(regId2,this));
    ui->lineEdit_11->setValidator(new QRegExpValidator(regId2,this));
    ui->lineEdit_13->setValidator(new QRegExpValidator(regId2,this));
    ui->lineEdit_15->setValidator(new QRegExpValidator(regId2,this));
    QRegExp regId3("^[0-9]{4}$");
    ui->lineEdit_6->setValidator(new QRegExpValidator(regId3,this));
    ui->lineEdit_7->setValidator(new QRegExpValidator(regId3,this));
    ui->lineEdit_8->setValidator(new QRegExpValidator(regId3,this));
    QRegExp regId4("^[0-9]{2}$");
    ui->lineEdit_9->setValidator(new QRegExpValidator(regId4,this));
    ui->label_11->setVisible(false);
    ui->comboBox_2->setVisible(false);
    ui->lineEdit_6->setEnabled(false);
    ui->lineEdit_7->setEnabled(false);
    ui->lineEdit_8->setEnabled(false);
    ui->pushButton_16->setEnabled(false);
}

Widget::~Widget()
{
    delete ui;
}
void Widget::SetText(QString str){
    ui->label->setText(str);
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
            if(templong == 0x4B3FE90E8B000000)
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
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x123A3),&tempint,sizeof(tempint),0);
        if(tempint == 0x8B909090){
            ui->checkBox_22->setChecked(true);
        }
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x6687F),&templong,sizeof(templong),0);
        if(templong == 0x1840C79090909090){
            ui->checkBox_23->setChecked(true);
        }
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x13A7B),&templong,sizeof(templong),0);
        if(templong == 0x9090909090909090){
            ui->checkBox_24->setChecked(true);
        }
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x309D8),&templong,sizeof(templong),0);
        if(templong == 0x0F7490002B1009E9){
            ui->checkBox_25->setChecked(true);
        }
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x30A25),&templong,sizeof(templong),0);
        if(templong == 0x9090909090909090){
          ui->checkBox_26->setChecked(true);
        }
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x47C56D),&tempint,sizeof(tempint),0);
        if(tempint == 0x0F6100B0){
            ui->checkBox_28->setChecked(true);
        }
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x4AF800),&templong,sizeof(templong),0);
        if(templong == 0xB789909090909090){
            ui->checkBox_29->setChecked(true);
        }
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x3158B),&templong,sizeof(templong),0);
        if(templong == 0xE853909090900CEB){
            ui->checkBox_30->setChecked(true);
        }
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x482B8F),&templong,sizeof(templong),0);
        if(templong == 0xFF9090FFF1146CE9){
            ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1B4E),&tempint,sizeof(tempint),0);
            if(tempint >= 75)
                tempint -= 25;
            if(tempint == 49 ||tempint == 50)
                tempint--;
            ui->comboBox_4->setCurrentIndex(tempint);
            ui->checkBox_31->setChecked(true);
        }
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x5830CA),&templong,sizeof(templong),0);
        if(templong == 0xFF9090FFE10F43E9){
            ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1B8D),&tempint,sizeof(tempint),0);
            if(tempint >= 75)
                tempint -= 25;
            if(tempint == 49 ||tempint == 50)
                tempint--;
            ui->comboBox_5->setCurrentIndex(tempint);
            ui->checkBox_32->setChecked(true);
        }
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x4A36B2),&templong,sizeof(templong),0);
        if(templong == 0x685889FFEF0E86E9){
            ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1BD8),&tempint,sizeof(tempint),0);
            if(tempint >= 75)
                tempint -= 25;
            if(tempint == 49 ||tempint == 50)
                tempint--;
            ui->comboBox_6->setCurrentIndex(tempint);
            ui->checkBox_33->setChecked(true);
        }
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x58207C),&templong,sizeof(templong),0);
        if(templong == 0x8BEF8BFFE11FB9E9){
            ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1C47),&tempint,sizeof(tempint),0);
            if(tempint >= 75)
                tempint -= 25;
            if(tempint == 49 ||tempint == 50)
                tempint--;
            ui->comboBox_7->setCurrentIndex(tempint);
            ui->checkBox_34->setChecked(true);
        }
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x583A39),&templong,sizeof(templong),0);
        if(templong == 0x529090FFE10A62E9){
            ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x3944B8),&tempint,sizeof(tempint),0);
            if(tempint >= 75)
                tempint -= 25;
            if(tempint == 49 ||tempint == 50)
                tempint--;
            ui->comboBox_10->setCurrentIndex(tempint);
            ui->checkBox_37->setChecked(true);
        }
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x60D17),&templong,sizeof(templong),0);
        if(templong == 0xC7909000333724E9){
            ui->checkBox_35->setChecked(true);
        }
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x13056),&templong,sizeof(templong),0);
        if(templong == 0x9090900038141FE9){
            ui->checkBox_36->setChecked(true);
            ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x394494),&tempint,sizeof(tempint),0);
            ui->comboBox_9->setCurrentIndex(tempint);
        }
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x49A02C),&templong,sizeof(templong),0);
        if(templong == 0x86C7909090904EEB){
            ui->checkBox_38->setChecked(true);
        }
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x49322D),&templong,sizeof(templong),0);
        if(templong == 0x006A909090900BEB){
            ui->checkBox_39->setChecked(true);
        }
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x581A8E),&tempint,sizeof(tempint),0);
        if(tempint == 0x2B9020EB){
            ui->checkBox_40->setChecked(true);
        }
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x63E43),&templong,sizeof(templong),0);
        if(templong == 0xD284900033067AE9){
            ui->checkBox_41->setChecked(true);
        }
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x12E97A),&templong,sizeof(templong),0);
        if(templong == 0x578B909090909090){
            ui->checkBox_43->setChecked(true);
        }
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x12E890),&tempint,sizeof(tempint),0);
        if(tempint == 0x438B9090){
            ui->checkBox_44->setChecked(true);
        }
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x583A31),&templong,sizeof(templong),0);
        if(templong == 0x016A909090909090){
            ui->checkBox_45->setChecked(true);
        }
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x4E5CE),&templong,sizeof(templong),0);
        if(templong == 0x4C478900000035B8){
            ui->checkBox_46->setChecked(true);
        }
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x13BEC),&templong,sizeof(templong),0);
        if(templong == 0xC35B5F9090909090){
            ui->horizontalSlider->setValue(0);
        }
        else
        {
            ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1A7A),&tempint,sizeof(tempint),0);
            if(tempint == 3000){
                ui->horizontalSlider->setValue(1);
            }
            else if(tempint == 2000){
                ui->horizontalSlider->setValue(2);
            }
            else if(tempint == 1000){
                ui->horizontalSlider->setValue(3);
            }
            else if(tempint == 700){
                ui->horizontalSlider->setValue(5);
            }
            else if(tempint == 300){
                ui->horizontalSlider->setValue(6);
            }
            else if(tempint == 100){
                ui->horizontalSlider->setValue(7);
            }
            else if(tempint == 20){
                ui->horizontalSlider->setValue(8);
            }
            ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x13BCB),&templong,sizeof(templong),0);
            if(templong == 0xB983000055388689)
                ui->horizontalSlider->setValue(4);

        }
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x6C769),&templong,sizeof(templong),0);
        if(templong == 0x245CD9C68B5C4589){
            ui->radioButton_16->setChecked(true);
        }
        else
        {
            ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x394056),&templong,sizeof(templong),0);
            if(templong == 0x00000B5C45C70975)
               ui->radioButton_18->setChecked(true);
            else if (templong == 0x0000125C45C70975)
                 ui->radioButton_17->setChecked(true);
            else if(templong == 0x0000295C45C70975)
                ui->radioButton_20->setChecked(true);
            else if(templong == 0x00001A5C45C70975)
                ui->radioButton_21->setChecked(true);
            else if(templong == 0x0000225C45C70975)
                ui->radioButton_22->setChecked(true);
            else if(templong == 0x0000185C45C70975)
                ui->radioButton_19->setChecked(true);
            else if(templong == 0x0000115C45C70975)
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
            GameProcessHandle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, GameProcessID);//取游戏进程句柄
            GameHandle = Szy_GetModuleHandleW(GameProcessHandle, L"PlantsVsZombies.exe"); //取游戏模块句柄
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
       GameProcessID = 0;
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
       ui->checkBox_23->setChecked(false);
       ui->checkBox_24->setChecked(false);
       ui->checkBox_25->setChecked(false);
       ui->lineEdit_6->setEnabled(false);
       ui->lineEdit_7->setEnabled(false);
       ui->lineEdit_8->setEnabled(false);
       ui->pushButton_16->setEnabled(false);
       ui->horizontalSlider->setValue(4);
       ui->checkBox_26->setChecked(false);
       ui->checkBox_28->setChecked(false);
       ui->checkBox_29->setChecked(false);
       ui->checkBox_30->setChecked(false);
       ui->checkBox_31->setChecked(false);
       ui->comboBox_4->setEnabled(true);
       ui->checkBox_32->setChecked(false);
       ui->comboBox_5->setEnabled(true);
       ui->checkBox_33->setChecked(false);
       ui->comboBox_6->setEnabled(true);
       ui->checkBox_34->setChecked(false);
       ui->checkBox_35->setChecked(false);
       ui->checkBox_36->setChecked(false);
       ui->checkBox_37->setChecked(false);
       ui->checkBox_38->setChecked(false);
       ui->checkBox_39->setChecked(false);
       ui->checkBox_40->setChecked(false);
       ui->checkBox_41->setChecked(false);
       ui->checkBox_43->setChecked(false);
       ui->checkBox_44->setChecked(false);
       ui->checkBox_45->setChecked(false);
       ui->checkBox_46->setChecked(false);
       ui->comboBox_7->setEnabled(true);
    }
}
bool Widget::SuspendThreadHandle(DWORD dwThreadId) { //挂起游戏所有线程
    HANDLE hThreadSnap = CreateToolhelp32Snapshot(TH32CS_SNAPTHREAD, 0); //创建线程快照
    THREADENTRY32 te;
    te.dwSize = sizeof(THREADENTRY32); //填充结构体
    Thread32First(hThreadSnap, &te); //取第一条线程
    do {
        if (te.th32OwnerProcessID == dwThreadId) { //如果线程的进程ID = 指定进程ID
            HANDLE hThread = OpenThread(THREAD_ALL_ACCESS, FALSE, te.th32ThreadID); //打开线程取线程句柄
            SuspendThread(hThread); //挂起线程
            CloseHandle(hThread);//关闭线程句柄
        }
    } while (Thread32Next(hThreadSnap, &te)); //遍历完成
    CloseHandle(hThreadSnap);//关闭线程快照句柄
    return true;
}
bool Widget::ResumeThreadHandle(DWORD dwThreadId) { //恢复游戏所有线程
    HANDLE hThreadSnap = CreateToolhelp32Snapshot(TH32CS_SNAPTHREAD, 0); //创建线程快照
    THREADENTRY32 te;
    te.dwSize = sizeof(THREADENTRY32); //填充结构体
    Thread32First(hThreadSnap, &te); //取第一条线程
    do {
        if (te.th32OwnerProcessID == dwThreadId) { //如果线程的进程ID = 指定进程ID
            HANDLE hThread = OpenThread(THREAD_ALL_ACCESS, FALSE, te.th32ThreadID); //打开线程取线程句柄
            ResumeThread(hThread); //恢复线程
            CloseHandle(hThread);//关闭线程句柄
        }
    } while (Thread32Next(hThreadSnap, &te)); //遍历完成
    CloseHandle(hThreadSnap);//关闭线程快照句柄
    return true;
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
        long long temp3 = 0x000000FFC7FDAFE9;
        long long WriteSGTZ = 0x3B90900038023DE9;
        WriteProcessMemory(GameProcessHandle, LPVOID((DWORD64)(GameHandle) + 0x394087), &temp1, sizeof(temp1), 0);
        WriteProcessMemory(GameProcessHandle, LPVOID((DWORD64)(GameHandle) + 0x394091), &temp2, sizeof(temp2), 0);
        WriteProcessMemory(GameProcessHandle, LPVOID((DWORD64)(GameHandle) + 0x394098), &temp3, sizeof(temp3), 0);
        WriteProcessMemory(GameProcessHandle, LPVOID((DWORD64)(GameHandle) + 0x13E45), &WriteSGTZ, sizeof(WriteSGTZ), 0);
        Sleep(500);
        //还原
        WriteSGTZ = 0x3BFF0000559C8783;
        temp1 = 0;
        temp2 = 0;
        temp3 = 0;
        WriteProcessMemory(GameProcessHandle, LPVOID((DWORD64)(GameHandle) + 0x13E45), &WriteSGTZ, sizeof(WriteSGTZ), 0);
        WriteProcessMemory(GameProcessHandle, LPVOID((DWORD64)(GameHandle) + 0x394087), &temp1, sizeof(temp1), 0);
        WriteProcessMemory(GameProcessHandle, LPVOID((DWORD64)(GameHandle) + 0x394091), &temp2, sizeof(temp2), 0);
        WriteProcessMemory(GameProcessHandle, LPVOID((DWORD64)(GameHandle) + 0x394098), &temp3, sizeof(temp3), 0);
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
            WriteWSBD2 = 0x4B3FE90E8B000000;
        }
        else{
            WriteWSBD1 = 0xB8000006249084C7;
            WriteWSBD2 = 0x4B3FE90E8B00000B;
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
        pushad
        mov ebx,0x006A9EC0
        mov ecx, [ebx]
        mov ecx, [ecx+0x00000768]
        mov ebx, 0x0040C3E0
        call ebx
        popad
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
        pushad
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
        popad
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
        pushad
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
        popad
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
       long long WriteHookY,WriteHookHead,WriteHook1,WriteHook2,WriteHook3;
        WriteHookY = 0x245CD9C68B5C4589;
        WriteHookHead = 0x0;
        WriteHook1 = 0x0;
        WriteHook2 = 0x0;
        WriteHook3 = 0x0;
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x6C769), &WriteHookY, sizeof(WriteHookY), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x39404E), &WriteHookHead, sizeof(WriteHookHead), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x394056), &WriteHook1, sizeof(WriteHook1), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x39405E), &WriteHook2, sizeof(WriteHook2), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x394066), &WriteHook3, sizeof(WriteHook3), 0);
    }
}
void Widget::on_radioButton_18_clicked() //毁灭菇
{
    if(GameProcessID != 0){
        long long WriteHookY,WriteHookHead,WriteHook1,WriteHook2,WriteHook3;
        WriteHookY = 0x245CD9003278E0E9;
        WriteHookHead = 0x0FF88305740EF883;
        WriteHook1 = 0x00000B5C45C70975;
        WriteHook2 = 0xC68B5C458903EB00;
        WriteHook3 = 0x000090FFCD8703E9;
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x6C769), &WriteHookY, sizeof(WriteHookY), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x39404E), &WriteHookHead, sizeof(WriteHookHead), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x394056), &WriteHook1, sizeof(WriteHook1), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x39405E), &WriteHook2, sizeof(WriteHook2), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x394066), &WriteHook3, sizeof(WriteHook3), 0);
    }
}
void Widget::on_radioButton_17_clicked() //魅惑
{
    if(GameProcessID != 0){
        long long WriteHookY,WriteHookHead,WriteHook1,WriteHook2,WriteHook3;
        WriteHookY = 0x245CD9003278E0E9;
        WriteHookHead = 0x0FF88305740EF883;
        WriteHook1 = 0x0000125C45C70975;
        WriteHook2 = 0xC68B5C458903EB00;
        WriteHook3 = 0x000090FFCD8703E9;
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x6C769), &WriteHookY, sizeof(WriteHookY), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x39404E), &WriteHookHead, sizeof(WriteHookHead), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x394056), &WriteHook1, sizeof(WriteHook1), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x39405E), &WriteHook2, sizeof(WriteHook2), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x394066), &WriteHook3, sizeof(WriteHook3), 0);
    }
}
void Widget::on_radioButton_20_clicked() //冰炮
{
    if(GameProcessID != 0){
        long long WriteHookY,WriteHookHead,WriteHook1,WriteHook2,WriteHook3;
        WriteHookY = 0x245CD9003278E0E9;
        WriteHookHead = 0x0FF88305740EF883;
        WriteHook1 = 0x0000295C45C70975;
        WriteHook2 = 0xC68B5C458903EB00;
        WriteHook3 = 0x000090FFCD8703E9;
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x6C769), &WriteHookY, sizeof(WriteHookY), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x39404E), &WriteHookHead, sizeof(WriteHookHead), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x394056), &WriteHook1, sizeof(WriteHook1), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x39405E), &WriteHook2, sizeof(WriteHook2), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x394066), &WriteHook3, sizeof(WriteHook3), 0);
    }
}
void Widget::on_radioButton_21_clicked() //土豆地雷
{
    if(GameProcessID != 0){
        long long WriteHookY,WriteHookHead,WriteHook1,WriteHook2,WriteHook3;
        WriteHookY = 0x245CD9003278E0E9;
        WriteHookHead = 0x0FF88305740EF883;
        WriteHook1 = 0x00001A5C45C70975;
        WriteHook2 = 0xC68B5C458903EB00;
        WriteHook3 = 0x000090FFCD8703E9;
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x6C769), &WriteHookY, sizeof(WriteHookY), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x39404E), &WriteHookHead, sizeof(WriteHookHead), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x394056), &WriteHook1, sizeof(WriteHook1), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x39405E), &WriteHook2, sizeof(WriteHook2), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x394066), &WriteHook3, sizeof(WriteHook3), 0);
    }
}


void Widget::on_radioButton_22_clicked() //冰大豌豆
{
    if(GameProcessID != 0){
        long long WriteHookY,WriteHookHead,WriteHook1,WriteHook2,WriteHook3;
        WriteHookY = 0x245CD9003278E0E9;
        WriteHookHead = 0x0FF88305740EF883;
        WriteHook1 = 0x0000225C45C70975;
        WriteHook2 = 0xC68B5C458903EB00;
        WriteHook3 = 0x000090FFCD8703E9;
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x6C769), &WriteHookY, sizeof(WriteHookY), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x39404E), &WriteHookHead, sizeof(WriteHookHead), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x394056), &WriteHook1, sizeof(WriteHook1), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x39405E), &WriteHook2, sizeof(WriteHook2), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x394066), &WriteHook3, sizeof(WriteHook3), 0);
    }
}


void Widget::on_radioButton_19_clicked() //辣椒
{
    if(GameProcessID != 0){
        long long WriteHookY,WriteHookHead,WriteHook1,WriteHook2,WriteHook3;
        WriteHookY = 0x245CD9003278E0E9;
        WriteHookHead = 0x0FF88305740EF883;
        WriteHook1 = 0x0000185C45C70975;
        WriteHook2 = 0xC68B5C458903EB00;
        WriteHook3 = 0x000090FFCD8703E9;
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x6C769), &WriteHookY, sizeof(WriteHookY), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x39404E), &WriteHookHead, sizeof(WriteHookHead), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x394056), &WriteHook1, sizeof(WriteHook1), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x39405E), &WriteHook2, sizeof(WriteHook2), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x394066), &WriteHook3, sizeof(WriteHook3), 0);
    }
}


void Widget::on_radioButton_23_clicked() //冰刺
{
    if(GameProcessID != 0){
        long long WriteHookY,WriteHookHead,WriteHook1,WriteHook2,WriteHook3;
        WriteHookY = 0x245CD9003278E0E9;
        WriteHookHead = 0x0FF88305740EF883;
        WriteHook1 = 0x0000115C45C70975;
        WriteHook2 = 0xC68B5C458903EB00;
        WriteHook3 = 0x000090FFCD8703E9;
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x6C769), &WriteHookY, sizeof(WriteHookY), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x39404E), &WriteHookHead, sizeof(WriteHookHead), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x394056), &WriteHook1, sizeof(WriteHook1), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x39405E), &WriteHook2, sizeof(WriteHook2), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x394066), &WriteHook3, sizeof(WriteHook3), 0);
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
    if(GameProcessID != 0 && !ui->lineEdit->text().isEmpty()){
        int tempaddr;
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2A9EC0),&tempaddr,sizeof(tempaddr),0);//基地址
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(tempaddr) + 0x82C),&tempaddr,sizeof(tempaddr),0);//一级偏移
        int WriteYB = ui->lineEdit->text().toInt();
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(tempaddr) + 0x208), &WriteYB, sizeof(WriteYB), 0);
    }
}
void Widget::on_pushButton_11_clicked() //更改金币
{
    if(GameProcessID != 0 && !ui->lineEdit_2->text().isEmpty() ){
        int tempaddr;
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2A9EC0),&tempaddr,sizeof(tempaddr),0);//基地址
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(tempaddr) + 0x82C),&tempaddr,sizeof(tempaddr),0);//一级偏移
        int WriteJB = ui->lineEdit_2->text().toInt();
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(tempaddr) + 0x20C), &WriteJB, sizeof(WriteJB), 0);
    }
}
void Widget::on_pushButton_12_clicked() //更改钻石
{
    if(GameProcessID != 0 && !ui->lineEdit_3->text().isEmpty()){
        int tempaddr;
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2A9EC0),&tempaddr,sizeof(tempaddr),0);//基地址
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(tempaddr) + 0x82C),&tempaddr,sizeof(tempaddr),0);//一级偏移
        int WriteZS = ui->lineEdit_3->text().toInt();
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(tempaddr) + 0x210), &WriteZS, sizeof(WriteZS), 0);
    }
}
void ZZcall() //种植call
{
    __asm
    {
        push -1
        mov eax,DWORD PTR DS:[0x6E11CE] //植物ID
        push eax
        mov eax,DWORD PTR DS:[0x6E11D6] //列
        push eax
        mov eax,DWORD PTR DS:[0x6a9ec0]
        mov eax,DWORD PTR DS:[eax+0x768]
        push eax
        mov eax,DWORD PTR DS:[0x6E11D2]       //行
        mov ecx,0x40d120
        call ecx
        mov BYTE PTR DS:[eax+0x130], 0x01
    }
}
void isZZ(){ //能否全屏种植call
    __asm{
            mov ebp,DWORD PTR DS:[0x6E11CE]
            push ebp
            mov ebp,DWORD PTR DS:[0x6E11D6]
            push ebp
            mov ebp,DWORD PTR DS:[0x6a9ec0]
            mov ebp,DWORD PTR SS:[ebp+0x768]
            push ebp
            mov eax,DWORD PTR DS:[0x6E11D2]
            mov ebp,0x0040E020
            call ebp
            cmp eax,1
            je less_than
            push -1
            mov ebp,DWORD PTR DS:[0x6E11CE]
            push ebp          //植物ID
            mov eax,DWORD PTR DS:[0x6E11D2]      //行
            mov ebp,DWORD PTR DS:[0x6E11D6]
            push ebp              //列
            mov ebp,DWORD PTR DS:[0x6a9ec0]
            mov ebp,DWORD PTR SS:[ebp+0x768]
            push ebp
            mov ebp,0x40d120
            call ebp
            mov BYTE PTR DS:[eax+0x130], 0x01
        less_than:
    }
}
void Widget::on_pushButton_13_clicked() //种植植物
{
    if(GameProcessID != 0){
        if(ui->lineEdit_4->text().isEmpty() || ui->lineEdit_5->text().isEmpty()){
            return;
        }
        int cartempaddr;
        int carSL;
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2A9EC0),&cartempaddr,sizeof(cartempaddr),0);//小推车数量临时地址
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(cartempaddr) + 0x768),&cartempaddr,sizeof(cartempaddr),0);//一级偏移
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(cartempaddr) + 0x110),&carSL,sizeof(carSL),0);//二级偏移
        //根据小推车数量是否合法判断是否在局内
        if(carSL < 0 || carSL > 6)
            return;
        int zzid = ui->comboBox->currentIndex();
        if(zzid == 48){ //模仿者
            int mfid = ui->comboBox_2->currentIndex();
            if(mfid > 50)
                mfid += 24; //跳过植物道具
            if(mfid == 177)
                mfid = 56; //呼叫网管
            long long mfzhook = 0xA9E9900033641FE9;
            long long mfzhook1 = 0x89128B006E1276BA;
            int mfzhook2 = 0x9389128B;
            long long mfzhook3 = 0xD0E9000001389389;
            long long mfzhook4 = 0x000090FFCC9BD0E9;
            WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1276),&mfid,sizeof(mfid),0);
            WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x5DC4C),&mfzhook,sizeof(mfzhook),0);
            WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x394070),&mfzhook1,sizeof(mfzhook1),0);
            WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x394075),&mfzhook2,sizeof(mfzhook2),0);
            WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x394077),&mfzhook3,sizeof(mfzhook3),0);
            WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x39407D),&mfzhook4,sizeof(mfzhook4),0);
        }
        if(zzid > 50)
            zzid += 24; //跳过植物道具
        if(zzid == 177)
            zzid = 56; //呼叫网管
        if(!ui->checkBox_27->isChecked()){ //全屏种植未选中
            int zzx = ui->lineEdit_4->text().toInt() -1; //行坐标修正
            int zzy = ui->lineEdit_5->text().toInt() -1; //列坐标修正
            WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E11CE),&zzid,sizeof(zzid),0); //植物ID
            WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E11D2),&zzx,sizeof(zzx),0); //植物X
            WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E11D6),&zzy,sizeof(zzy),0); //植物Y
            DWORD tempThreadId{0}; //线程ID
            //开辟内存空间
            LPVOID tempaddr = VirtualAllocEx(GameProcessHandle,NULL,0x40900,MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);
            //注入汇编代码
            WriteProcessMemory(GameProcessHandle,tempaddr,ZZcall,0x40900,0);
            //MessageBoxExA(0,std::to_string(int(tempaddr)).c_str(),"",0,0);
            SuspendThreadHandle(GameProcessID); //暂停游戏全部线程
            //调用注入的代码
            HANDLE tempThreadHandle = CreateRemoteThread(GameProcessHandle,NULL,0,(LPTHREAD_START_ROUTINE)tempaddr,NULL,0,&tempThreadId);
            WaitForSingleObject(tempThreadHandle,INFINITE); //等待注入代码运行结束
            VirtualFreeEx(GameProcessHandle,tempaddr,0,MEM_RELEASE);//释放开辟的空间
            ResumeThreadHandle(GameProcessID);//恢复游戏全部线程
        }
        else{ //全屏种植选中
            DWORD tempThreadId{0}; //线程ID
            //开辟内存空间
            LPVOID tempaddr = VirtualAllocEx(GameProcessHandle,NULL,0x40900,MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);
            //注入汇编代码
            WriteProcessMemory(GameProcessHandle,tempaddr,isZZ,0x40900,0);
            WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E11CE),&zzid,sizeof(zzid),0); //植物ID
            int zzx{0},zzy{0};
            SuspendThreadHandle(GameProcessID); //暂停游戏全部线程
            for(int i = 0;i<59;i++){
                WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E11D2),&zzx,sizeof(zzx),0); //植物X
                WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E11D6),&zzy,sizeof(zzy),0); //植物Y
                //调用注入的代码
                HANDLE tempThreadHandle = CreateRemoteThread(GameProcessHandle,NULL,0,(LPTHREAD_START_ROUTINE)tempaddr,NULL,0,&tempThreadId);
                zzy++;
                if(zzy > 9){
                    zzy = 0;
                    zzx++;
                }
                WaitForSingleObject(tempThreadHandle,INFINITE); //等待注入代码运行结束
            }
            Sleep(1);
            VirtualFreeEx(GameProcessHandle,tempaddr,0,MEM_RELEASE);//释放开辟的空间
            ResumeThreadHandle(GameProcessID);//恢复游戏全部线程
        }
    }
}
void Widget::on_comboBox_activated(int index)
{
    if(index == 48){//选中模仿者
        ui->label_11->setVisible(true);
        ui->comboBox_2->setVisible(true);
    }
    else{
        ui->label_11->setVisible(false);
        ui->comboBox_2->setVisible(false);
    }
}
void Widget::on_checkBox_23_stateChanged(int arg1) //核爆无坑
{
    if(GameProcessID != 0){
        int jjhmgpush,mhhmgpush,hmdppush,hmhcpush,kdjgpush,kdjgzpush;
        long long jjhmgcall,jjhmgjmp,muhmgcall,hmdpcall,hmhcall,mhhmgzw,hmhczw,jjhmgzw,kdjgcall,kdjgzcall;
        if(arg1 == 2){//被选中
            jjhmgpush = 0x90909090;
            jjhmgcall = 0x1840C79090909090;
            jjhmgjmp = 0x468B909090901CEB;
            mhhmgpush = 0x90909090;
            muhmgcall = 0x1840C79090909090;
            hmdppush = 0x90909090;
            hmdpcall = 0x1840C79090909090;
            hmhcpush = 0x90909090;
            hmhcall = 0x1840C79090909090;
            mhhmgzw = 0x2444DB9090909090;
            hmhczw = 0x2444DB9090909090;
            jjhmgzw = 0x2444DB9090909090;
            kdjgpush = 0x90909090;
            kdjgcall = 0x1840C79090909090;
            kdjgzpush = 0x90909090;
            kdjgzcall = 0x1840C79090909090;
        }
        else{
            jjhmgpush = 0xFEC3E852;
            jjhmgcall = 0x1840C7FFB6FEC3E8;
            jjhmgjmp = 0x468B00000018850F;
            mhhmgpush = 0x26FCE852;
            muhmgcall = 0x1840C7FFFA26FCE8;
            hmdppush = 0x747EE852;
            hmdpcall = 0x1840C7FFB8747EE8;
            hmhcpush = 0x41C1E852;
            hmhcall = 0x1840C7FFB841C1E8;
            mhhmgzw = 0x2444DBFFFFFE03E8;
            hmhczw = 0x2444DBFFBE18C8E8;
            jjhmgzw = 0x2444DBFFBCD5CAE8;
            kdjgpush = 0xE82875FF;
            kdjgcall = 0x1840C7FFB73991E8;
            kdjgzpush = 0xE82875FF;
            kdjgzcall = 0x1840C7FFA7391FE8;
        }
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x4990B7), &jjhmgpush, sizeof(jjhmgpush), 0); //禁忌毁灭菇本身
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x4990B8), &jjhmgcall, sizeof(jjhmgcall), 0); //禁忌毁灭菇本身
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x410824), &jjhmgjmp, sizeof(jjhmgjmp), 0); //禁忌毁灭菇僵尸
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x6687E), &mhhmgpush, sizeof(mhhmgpush), 0); //魅惑毁灭菇本身
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x6687F), &muhmgcall, sizeof(muhmgcall), 0); //魅惑毁灭菇本身
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x481AFC), &hmdppush, sizeof(hmdppush), 0); //毁灭大炮本身
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x481AFD), &hmdpcall, sizeof(hmdpcall), 0); //毁灭大炮本身
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x484DB9), &hmhcpush, sizeof(hmhcpush), 0); //毁灭海草本身
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x484DBA), &hmhcall, sizeof(hmhcall), 0); //毁灭海草本身
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x66848), &mhhmgzw, sizeof(mhhmgzw), 0); //魅惑毁灭菇销毁同格植物
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x484D83), &hmhczw, sizeof(hmhczw), 0); //毁灭海草销毁同格植物
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x499081), &jjhmgzw, sizeof(jjhmgzw), 0); //禁忌毁灭菇销毁同格植物
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x4955E7), &kdjgpush, sizeof(kdjgpush), 0); //坑洞坚果本身
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x4955EA), &kdjgcall, sizeof(kdjgcall), 0); //坑洞坚果本身
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x595659), &kdjgzpush, sizeof(kdjgzpush), 0); //坑洞坚果被砸
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x59565C), &kdjgzcall, sizeof(kdjgzcall), 0); //坑洞坚果被砸
    }
}
void Widget::on_checkBox_25_stateChanged(int arg1) //修改阳光内的阳光值
{
    if(GameProcessID != 0){
        long long ggygzjmp,ggygzhook1,ggygzhook2,ggygzhook3,ggygzhook4,ggygzhook5,ggygzhook6,ggygzhook7,ggygzhook8,ggygzhook9,ggygzhook10,ggygzhook11,ggygzhook12,ggygzhook13;
        int xyyz,zyyz,dyyz;
        if(arg1 == 2){//被选中
            ui->lineEdit_6->setEnabled(true);
            ui->lineEdit_7->setEnabled(true);
            ui->lineEdit_8->setEnabled(true);
            ui->pushButton_16->setEnabled(true);
            ggygzjmp = 0x0F7490003636E0E9;
            ggygzhook1 = 0x0B7505F88358468B;
            ggygzhook2 = 0xC00D8B0B7505F883;
            ggygzhook3 = 0x006E19C00D8B0B75;
            ggygzhook4 = 0x3EE9006E19C00D8B;
            ggygzhook5 = 0x04F883FFC9C93EE9;
            ggygzhook6 = 0xC40D8B0B7504F883;
            ggygzhook7 = 0x006E19C40D8B0B75;
            ggygzhook8 = 0x2EE9006E19C40D8B;
            ggygzhook9 = 0x06F883FFC9C92EE9;
            ggygzhook10 = 0xC80D8B067506F883;
            ggygzhook11 = 0x006E19C80D8B0675;
            ggygzhook12 = 0x1EE9006E19C80D8B;
            ggygzhook13 = 0x000090FFC9C91EE9;
            xyyz = ui->lineEdit_6->text().toInt();
            zyyz = ui->lineEdit_7->text().toInt();
            dyyz = ui->lineEdit_8->text().toInt();
        }
        else
        {
            ui->lineEdit_6->setEnabled(false);
            ui->lineEdit_7->setEnabled(false);
            ui->lineEdit_8->setEnabled(false);
            ui->pushButton_16->setEnabled(false);
            ggygzjmp = 0x0F7404F88358468B;
            ggygzhook1 = 0;
            ggygzhook2 = 0;
            ggygzhook3 = 0;
            ggygzhook4 = 0;
            ggygzhook5 = 0;
            ggygzhook6 = 0;
            ggygzhook7 = 0;
            ggygzhook8 = 0;
            ggygzhook9 = 0;
            ggygzhook10 = 0;
            ggygzhook11 = 0;
            ggygzhook12 = 0;
            ggygzhook13 = 0;
            xyyz = 15;
            zyyz = 25;
            dyyz = 50;
        }
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x309D8), &ggygzjmp, sizeof(ggygzjmp), 0); //jmp到新地址
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x3940BD), &ggygzhook1, sizeof(ggygzhook1), 0); //mov eax,[esi+58]
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x3940C0), &ggygzhook2, sizeof(ggygzhook2), 0); //cmp eax,05
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x3940C3), &ggygzhook3, sizeof(ggygzhook3), 0); //jne PlantsVsZombies.exe+2E19F9
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x3940C5), &ggygzhook4, sizeof(ggygzhook4), 0); //mov ecx,[PlantsVsZombies.exe+2E19C0] PlantsVsZombies.exe+2E19C0作为小阳光数值
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x3940CB), &ggygzhook5, sizeof(ggygzhook5), 0); //jmp PlantsVsZombies.exe+30A0E
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x3940D0), &ggygzhook6, sizeof(ggygzhook6), 0); //cmp eax,04
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x3940D3), &ggygzhook7, sizeof(ggygzhook7), 0); //jne PlantsVsZombies.exe+2E1A09
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x3940D5), &ggygzhook8, sizeof(ggygzhook8), 0); //mov ecx,[PlantsVsZombies.exe+2E19C4] PlantsVsZombies.exe+2E19C4作为中阳光数值
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x3940DB), &ggygzhook9, sizeof(ggygzhook9), 0); //jmp PlantsVsZombies.exe+30A0E
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x3940E0), &ggygzhook10, sizeof(ggygzhook10), 0); //cmp eax,06
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x3940E3), &ggygzhook11, sizeof(ggygzhook11), 0); //jne PlantsVsZombies.exe+2E1A14
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x3940E5), &ggygzhook12, sizeof(ggygzhook12), 0); //mov ecx,[PlantsVsZombies.exe+2E19C8] PlantsVsZombies.exe+2E19C8作为大阳光数值
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x3940EB), &ggygzhook13, sizeof(ggygzhook13), 0); //jmp PlantsVsZombies.exe+30A0E
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E19C0), &xyyz, sizeof(xyyz), 0); //写入小阳光数值
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E19C4), &zyyz, sizeof(zyyz), 0); //写入中阳光数值
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E19C8), &dyyz, sizeof(dyyz), 0); //写入大阳光数值
    }
}
void Widget::on_checkBox_26_stateChanged(int arg1) //解锁上限
{
    if(GameProcessID != 0){
        long long jssx1,jssx2;
        if(arg1 == 2){ //被选中
            jssx1 = 0x9090909090909090;
            jssx2 = 0x7401F8836CEB9090;
        }
        else
        {
            jssx1 = 0x27060000556080C7;
            jssx2 = 0x7401F8836CEB0000;
        }
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x30A25), &jssx1, sizeof(jssx1), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x30A2D), &jssx2, sizeof(jssx2), 0);
    }
}
void Widget::on_pushButton_16_clicked() //更改阳光内的阳光值
{
    if(!ui->lineEdit_6->text().isEmpty() && !ui->lineEdit_7->text().isEmpty() && !ui->lineEdit_8->text().isEmpty()){ //是否为空
        int xyyz = ui->lineEdit_6->text().toInt();
        int zyyz = ui->lineEdit_7->text().toInt();
        int dyyz = ui->lineEdit_8->text().toInt();
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E19C0), &xyyz, sizeof(xyyz), 0);//写入小阳光数值
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E19C4), &zyyz, sizeof(zyyz), 0);//写入中阳光数值
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E19C8), &dyyz, sizeof(dyyz), 0);//写入大阳光数值
    }
}
void Widget::on_checkBox_24_stateChanged(int arg1) //全场景阳光掉落
{
    if(GameProcessID != 0){
        int qcjdl1,qcjdl2,qcjdl3,qcjdl4,qcjdl5;
        long long qcjdl6,qcjdl7,qcjdl8,qcjdl9,qcjdl10;
        if(arg1 == 2) //被选中
        {
            qcjdl1 = 0xF8839090;
            qcjdl2 = 0xF8839090;
            qcjdl3 = 0xF8839090;
            qcjdl4 = 0xF8839090;
            qcjdl5 = 0x14B89090;
            qcjdl6 = 0x9090909090909090;
            qcjdl7 = 0xF883909090909090;
            qcjdl8 = 0xF883909090909090;
            qcjdl9 = 0xBE80909090909090;
            qcjdl10 = 0x401F0F9090909090;
        }
        else
        {
            qcjdl1 = 0xF8832974;
            qcjdl2 = 0xF8832474;
            qcjdl3 = 0xF8831F74;
            qcjdl4 = 0xF8831A74;
            qcjdl5 = 0x14B81574;
            qcjdl6 = 0x7AE900000170840F;
            qcjdl7 = 0xF8830000015E840F;
            qcjdl8 = 0xF88300000155840F;
            qcjdl9 = 0xBE800000014C840F;
            qcjdl10 = 0x401F0F0042BC7AE9;
        }
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0xB196), &qcjdl1, sizeof(qcjdl1), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0xB19B), &qcjdl2, sizeof(qcjdl2), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0xB1A0), &qcjdl3, sizeof(qcjdl3), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0xB1A5), &qcjdl4, sizeof(qcjdl4), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0xB1AA), &qcjdl5, sizeof(qcjdl5), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x13A7B), &qcjdl6, sizeof(qcjdl6), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x13A8D), &qcjdl7, sizeof(qcjdl7), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x13A96), &qcjdl8, sizeof(qcjdl8), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x13A9F), &qcjdl9, sizeof(qcjdl9), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x13A81), &qcjdl10, sizeof(qcjdl10), 0);
    }
}
void Widget::on_horizontalSlider_valueChanged(int value) //调整阳光下落速度
{
    if(GameProcessID != 0){
        int bdl1,bdl2,bdl3,bdl4;
        long long bdl5;
        if(value == 0){ //选择不掉落
            bdl1 = 0x90909090;
            bdl2 = 0x90909090;
            bdl3 = 0x8B909090;
            bdl4 = 0x90CE8B90;
            bdl5 = 0xC35B5F9090909090;
        }
        else
        {
            long long hook1,hook2,hook3,hook4;
            int hooknum;
            if(value == 4){ //还原
                hook1 = 0xB983000055388689;
                WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x13BCB), &hook1, sizeof(hook1), 0);
                return;
            }
            bdl1 = 0x6A50006A;
            bdl2 = 0x573C6A50;
            bdl3 = 0x8B573C6A;
            bdl4 = 0xE8CE8B57;
            bdl5 = 0xC35B5FFFFF8F1FE8;
            hook1 = 0xB98390003804D3E9;

            hook2 = 0x8689006E1A7A058B;
            hook3 = 0x1DE9000055388689;
            hook4 = 0x000090FFC7FB1DE9;
            if(value == 1)
                hooknum = 3000;
            else if(value == 2)
                hooknum = 2000;
            else if(value == 3)
                hooknum = 1000;
            else if(value == 5)
                hooknum = 700;
            else if(value == 6)
                hooknum = 300;
            else if(value == 7)
                hooknum = 100;
            else if(value == 8)
                hooknum = 20;
            int tempaddr;
            ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2A9EC0),&tempaddr,sizeof(tempaddr),0);//基地址
            ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(tempaddr) + 0x768),&tempaddr,sizeof(tempaddr),0);//一级偏移
            WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(tempaddr) + 0x5538), &hooknum, sizeof(hooknum), 0); //写入倒计时

            WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1A7A), &hooknum, sizeof(hooknum), 0);
            WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x13BCB), &hook1, sizeof(hook1), 0);

            WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x3940A3), &hook2, sizeof(hook2), 0);
            WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x3940A9), &hook3, sizeof(hook3), 0);
            WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x3940AF), &hook4, sizeof(hook4), 0);
        }
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x13BE4), &bdl1, sizeof(bdl1), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x13BE6), &bdl2, sizeof(bdl2), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x13BE7), &bdl3, sizeof(bdl3), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x13BE9), &bdl4, sizeof(bdl4), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x13BEC), &bdl5, sizeof(bdl5), 0);
    }
}
void Widget::on_checkBox_28_stateChanged(int arg1) //金卡恒定不涨价
{
    if(GameProcessID != 0){
        int jkhd;
        if(arg1 == 2) //被选中
        {
            jkhd = 0x0F6100B0;
        }
        else
        {
            jkhd = 0x0F61C084;
        }
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x47C56D), &jkhd, sizeof(jkhd), 0);
    }
}
void Widget::on_checkBox_29_stateChanged(int arg1) //没有月末
{
    if(GameProcessID != 0){
        long long myym;
        if(arg1 == 2) //被选中
        {
            myym = 0xB789909090909090;
        }
        else
        {
            myym = 0xB789000057CC9F01;
        }
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x4AF800), &myym, sizeof(myym), 0);
    }
}
void Widget::on_label_13_linkActivated(const QString &link) //哔哩哔哩超链接
{
    QDesktopServices::openUrl(QUrl(link));
}
void Widget::on_checkBox_30_stateChanged(int arg1) //快速收集
{
    if(GameProcessID != 0){
        if(GameProcessID != 0){
            long long kssj;
            if(arg1 == 2) //被选中
            {
                kssj = 0xE853909090900CEB;
            }
            else

            {
                kssj = 0xE8539000464D70E9;
            }
            WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x3158B), &kssj, sizeof(kssj), 0);
        }
    }
}
void Widget::on_pushButton_14_clicked() //修改卡槽
{
    if(GameProcessID != 0 && !ui->lineEdit_9->text().isEmpty() && ui->lineEdit_9->text().toInt() <= 14){
        int tempaddr;
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2A9EC0),&tempaddr,sizeof(tempaddr),0);//基地址
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(tempaddr) + 0x768),&tempaddr,sizeof(tempaddr),0);//一级偏移
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(tempaddr) + 0x144),&tempaddr,sizeof(tempaddr),0);//二级偏移
        int kcid = ui->comboBox_3->currentIndex();
        if(kcid >= 50) //隐藏植物修正
            kcid += 25;
        if(kcid == 48 ||kcid == 49) //模仿者修正
            kcid++;
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(tempaddr) + 0x5c + (0x50 * (ui->lineEdit_9->text().toInt() - 1))), &kcid, sizeof(kcid), 0);
    }
}
void Widget::on_checkBox_31_stateChanged(int arg1) //锁定抽奖盒子
{
    if(GameProcessID != 0){
        long long hookhard,hook1,hook2,hook3;
        if(arg1 == 2){ //被选中
            ui->comboBox_4->setEnabled(false);
            int zwid = ui->comboBox_4->currentIndex();
            if(zwid >= 50) //隐藏植物修正
                zwid += 25;
            if(zwid == 48 ||zwid == 49) //模仿者修正
                zwid++;
            WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1B4E), &zwid, sizeof(zwid), 0);
            hookhard = 0xFF9090FFF1146CE9;
            hook1 = 0x458B006E1B4E35FF;
            hook2 = 0x0EEB85E92875FF1C;
            hook3 = 0x90000EEB85E92875;
        }
        else
        {
            ui->comboBox_4->setEnabled(true);
            hookhard = 0xFF2875FF1C458B50;
            hook1 = 0;
            hook2 = 0;
            hook3 = 0;
        }
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x482B8F), &hookhard, sizeof(hookhard), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x394000), &hook1, sizeof(hook1), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x394008), &hook2, sizeof(hook2), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x39400A), &hook3, sizeof(hook3), 0);
    }
}
void Widget::on_checkBox_32_stateChanged(int arg1) //锁定豪华盒子
{
    if(GameProcessID != 0){
        long long hookhard,hook1,hook2,hook3,hook4;
        if(arg1 == 2){ //被选中
            ui->comboBox_5->setEnabled(false);
            int zwid = ui->comboBox_5->currentIndex();
            if(zwid >= 50) //隐藏植物修正
                zwid += 25;
            if(zwid == 48 ||zwid == 49) //模仿者修正
                zwid++;
            WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1B8D), &zwid, sizeof(zwid), 0);
            hookhard = 0xFF9090FFE10F43E9;
            hook1 = 0x458B006E1B8D35FF;
            hook2 = 0xAEE92875FF1C458B;
            hook3 = 0x001EF0AEE92875FF;
            hook4 = 0x90001EF0AEE92875;
        }
        else
        {
            ui->comboBox_5->setEnabled(true);
            hookhard = 0xFF2875FF1C458B57;
            hook1 = 0;
            hook2 = 0;
            hook3 = 0;
            hook4 = 0;
        }
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x5830CA), &hookhard, sizeof(hookhard), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x394012), &hook1, sizeof(hook1), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x394018), &hook2, sizeof(hook2), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x39401B), &hook3, sizeof(hook3), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x39401C), &hook4, sizeof(hook4), 0);
    }
}
void Widget::on_checkBox_33_stateChanged(int arg1) //锁定宝藏金坑
{
    if(GameProcessID != 0){
        long long hookhard,hook1,hook2,hook3,hook4;
        if(arg1 == 2){ //被选中
            ui->comboBox_6->setEnabled(false);
            int zwid = ui->comboBox_6->currentIndex();
            if(zwid >= 50) //隐藏植物修正
                zwid += 25;
            if(zwid == 48 ||zwid == 49) //模仿者修正
                zwid++;
            WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1BD8), &zwid, sizeof(zwid), 0);
            hookhard = 0x685889FFEF0E86E9;
            hook1 = 0xD81D8BFFC785CEE8;
            hook2 = 0x5889006E1BD81D8B;
            hook3 = 0x0010F16AE9685889;
            hook4 = 0x0000900010F16AE9;
        }
        else
        {
            ui->comboBox_6->setEnabled(true);
            hookhard = 0x685889FFB69459E8;
            hook1 = 0;
            hook2 = 0;
            hook3 = 0;
            hook4 = 0;
        }
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x4A36B2), &hookhard, sizeof(hookhard), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x39453D), &hook1, sizeof(hook1), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x394542), &hook2, sizeof(hook2), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x394548), &hook3, sizeof(hook3), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x39454B), &hook4, sizeof(hook4), 0);
    }
}
void Widget::on_checkBox_34_stateChanged(int arg1) //锁定备用物资
{
    if(GameProcessID != 0){
        long long hookhard,hook1,hook2,hook3;
        if(arg1 == 2){ //被选中
            ui->comboBox_7->setEnabled(false);
            int zwid = ui->comboBox_7->currentIndex();
            if(zwid >= 50) //隐藏植物修正
                zwid += 25;
            if(zwid == 48 ||zwid == 49) //模仿者修正
                zwid++;
            WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1C47), &zwid, sizeof(zwid), 0);
            hookhard = 0x8BEF8BFFE11FB9E9;
            hook1 = 0x684389006E1C47A1;
            hook2 = 0xE038E96061684389;
            hook3 = 0x90001EE038E96061;
        }
        else
        {
            ui->comboBox_7->setEnabled(true);
            hookhard = 0x8BEF8B6061684389;
            hook1 = 0;
            hook2 = 0;
            hook3 = 0;
        }
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x58207C), &hookhard, sizeof(hookhard), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x39403A), &hook1, sizeof(hook1), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x39403F), &hook2, sizeof(hook2), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x394042), &hook3, sizeof(hook3), 0);
    }
}
void dtcall(){ //搭梯call
    __asm
    {
        pushad
        mov edi,0x6E1C40
        mov edi,[edi] //行
        mov eax,0x6E1C44
        push [eax]  //列
        mov eax,0x6A9EC0
        mov eax,[eax]
        mov eax,[eax+0x768]
        mov ebx,0x00408F40
        call ebx
        popad
    }
}
void Widget::on_pushButton_15_clicked() //搭梯
{
    if(GameProcessID != 0 ){
        if(ui->lineEdit_10->text().isEmpty() || ui->lineEdit_11->text().isEmpty()){
            return;
        }
        int cartempaddr;
        int carSL;
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2A9EC0),&cartempaddr,sizeof(cartempaddr),0);//小推车数量临时地址
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(cartempaddr) + 0x768),&cartempaddr,sizeof(cartempaddr),0);//一级偏移
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(cartempaddr) + 0x110),&carSL,sizeof(carSL),0);//二级偏移
        //根据小推车数量是否合法判断是否在局内
        if(carSL < 0 || carSL > 6)
            return;
        int dtx = ui->lineEdit_10->text().toInt() -1;
        int dty = ui->lineEdit_11->text().toInt() -1;
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1C40),&dtx,sizeof(dtx),0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1C44),&dty,sizeof(dty),0);
        DWORD tempThreadId{0}; //线程ID
        //开辟内存空间
        LPVOID tempaddr = VirtualAllocEx(GameProcessHandle,NULL,0x40900,MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);
        //注入汇编代码
        WriteProcessMemory(GameProcessHandle,tempaddr,dtcall,0x40900,0);
        //调用注入的代码
        SuspendThreadHandle(GameProcessID); //暂停游戏全部线程
        HANDLE tempThreadHandle = CreateRemoteThread(GameProcessHandle,NULL,0,(LPTHREAD_START_ROUTINE)tempaddr,NULL,0,&tempThreadId);
        WaitForSingleObject(tempThreadHandle,INFINITE); //等待注入代码运行结束
        VirtualFreeEx(GameProcessHandle,tempaddr,0,MEM_RELEASE);//释放开辟的空间
        ResumeThreadHandle(GameProcessID);//恢复游戏全部线程
    }
}
void Widget::on_checkBox_35_stateChanged(int arg1) //窝瓜复制
{
    if(GameProcessID != 0){
        long long hookhard,hook1,hook2,hook3,hook4,hook5,hook6;
        if(arg1 == 2){ //被选中
            hookhard = 0xC7909000333724E9;
            hook1 = 0x468B2476FF016A60;
            hook2 = 0x9EC00D8B2876FF1C;
            hook3 = 0x00000768B1FF006A;
            hook4 = 0x46C761FFC78CC3E8;
            hook5 = 0xC8B4E9000000073C;
            hook6 = 0x000000000000FFCC;
        }
        else
        {
            hookhard = 0xC7000000073C46C7;
            hook1 = 0;
            hook2 = 0;
            hook3 = 0;
            hook4 = 0;
            hook5 = 0;
            hook6 = 0;
        }
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x60D17), &hookhard, sizeof(hookhard), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x394440), &hook1, sizeof(hook1), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x394448), &hook2, sizeof(hook2), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x394450), &hook3, sizeof(hook3), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x394458), &hook4, sizeof(hook4), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x394460), &hook5, sizeof(hook5), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x394468), &hook6, sizeof(hook6), 0);
    }
}
void JScall() //种植僵尸call
{
    __asm
    {
        mov ecx,DWORD PTR DS:[0x6E11D6] //列
        push ecx
        mov ecx,DWORD PTR DS:[0x6E11CE] //ID
        push ecx
        mov eax,DWORD PTR DS:[0x6E11D2] //行
        mov ecx,DWORD PTR DS:[0x6a9ec0]
        mov ecx,DWORD PTR DS:[ecx+0x768]
        mov ecx,DWORD PTR DS:[ecx+0x160] //指针
        mov bl,BYTE PTR DS:[0X7944E4]
        test bl,bl
        je accc
        mov BYTE PTR DS:[0X7944E4],0x2
        accc:
        mov ebx,0x42A0F0
        call ebx
        mov BYTE PTR DS:[0X7944E4],0x0
    }
}
void Widget::on_pushButton_17_clicked() //生成僵尸
{
    if(GameProcessID != 0){
        if(ui->lineEdit_12->text().isEmpty() || ui->lineEdit_13->text().isEmpty()){
            return;
        }
        int cartempaddr;
        int carSL;
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2A9EC0),&cartempaddr,sizeof(cartempaddr),0);//小推车数量临时地址
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(cartempaddr) + 0x768),&cartempaddr,sizeof(cartempaddr),0);//一级偏移
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(cartempaddr) + 0x110),&carSL,sizeof(carSL),0);//二级偏移
        //根据小推车数量是否合法判断是否在局内
        if(carSL < 0 || carSL > 6)
            return;
        int jsid = ui->comboBox_8->currentIndex();
        int jsx = ui->lineEdit_12->text().toInt() -1; //行坐标修正
        int jsy = ui->lineEdit_13->text().toInt() -1; //列坐标修正
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E11CE),&jsid,sizeof(jsid),0); //僵尸ID
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E11D2),&jsx,sizeof(jsx),0); //僵尸X
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E11D6),&jsy,sizeof(jsy),0); //僵尸Y
        byte mh;
        long long hookhard,hook1,hook2,hook3,hook4;
        if(ui->checkBox_42->isChecked()){
            mh = 1;
            hookhard = 0x87850F0036A3F3E9;
            hook1 = 0xFB80007944E41D8A;
            hook2 = 0x0000B880C6077502;
            hook3 = 0xE9C38914FD830100;
            hook4 = 0x000090FFC95BF1E9;
        }
        else{
            mh = 0;
            hookhard = 0x87850FD88B14FD83;
            hook1 = 0;
            hook2 = 0;
            hook3 = 0;
            hook4 = 0;
        }
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x3944E4),&mh,sizeof(mh),0); //魅惑状态
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2A108), &hookhard, sizeof(hookhard), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x394500), &hook1, sizeof(hook1), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x394508), &hook2, sizeof(hook2), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x394510), &hook3, sizeof(hook3), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x394517), &hook4, sizeof(hook4), 0);
        DWORD tempThreadId{0}; //线程ID
        //开辟内存空间
        LPVOID tempaddr = VirtualAllocEx(GameProcessHandle,NULL,0x40900,MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);
        //注入汇编代码
        WriteProcessMemory(GameProcessHandle,tempaddr,JScall,0x40900,0);
        //MessageBoxExA(0,std::to_string(int(tempaddr)).c_str(),"",0,0);
        SuspendThreadHandle(GameProcessID); //暂停游戏全部线程
        //调用注入的代码
        Sleep(10);
        HANDLE tempThreadHandle = CreateRemoteThread(GameProcessHandle,NULL,0,(LPTHREAD_START_ROUTINE)tempaddr,NULL,0,&tempThreadId);
        WaitForSingleObject(tempThreadHandle,INFINITE); //等待注入代码运行结束
        VirtualFreeEx(GameProcessHandle,tempaddr,0,MEM_RELEASE);//释放开辟的空间
        ResumeThreadHandle(GameProcessID);//恢复游戏全部线程
    }
}
void Widget::on_checkBox_36_stateChanged(int arg1) //锁定出怪
{
    if(GameProcessID != 0){
        long long hookhard,hook1,hook2,hook3;
        int jsid;
        if(arg1 == 2){//被选中
            ui->comboBox_9->setEnabled(false);
            hookhard = 0x9090900038141FE9;
            hook1 = 0xC78B0079449435FF;
            hook2 = 0xEBD2E9FFC79939E8;
            hook3 = 0x000000FFC7EBD2E9;
            jsid = ui->comboBox_9->currentIndex();
        }
        else{
            ui->comboBox_9->setEnabled(true);
            hookhard = 0xFFFFAD62E8C78B56;
            hook1 = 0;
            hook2 = 0;
            hook3 = 0;
        }
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x394494), &jsid, sizeof(jsid), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x13056), &hookhard, sizeof(hookhard), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x39447A), &hook1, sizeof(hook1), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x394482), &hook2, sizeof(hook2), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x394487), &hook3, sizeof(hook3), 0);
    }
}
void Widget::on_checkBox_37_stateChanged(int arg1) //自费盒子
{
    if(GameProcessID != 0){
        long long hookhard,hook1,hook2,hook3;
        if(arg1 == 2){ //被选中
            ui->comboBox_10->setEnabled(false);
            int zwid = ui->comboBox_10->currentIndex();
            if(zwid >= 50) //隐藏植物修正
                zwid += 25;
            if(zwid == 48 ||zwid == 49) //模仿者修正
                zwid++;
            WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x3944B8), &zwid, sizeof(zwid), 0);
            hookhard = 0x529090FFE10A62E9;
            hook1 = 0x478B007944B835FF;
            hook2 = 0x1EF58FE92877FF1C;
            hook3 = 0x90001EF58FE92877;
        }
        else
        {
            ui->comboBox_10->setEnabled(true);
            hookhard = 0x522877FF1C478B50;
            hook1 = 0;
            hook2 = 0;
            hook3 = 0;
        }
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x583A39), &hookhard, sizeof(hookhard), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x3944A0), &hook1, sizeof(hook1), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x3944A8), &hook2, sizeof(hook2), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x3944AA), &hook3, sizeof(hook3), 0);
    }
}
void Widget::on_checkBox_40_stateChanged(int arg1) //带土神力
{
    if(GameProcessID != 0){
        int dtsl;
        if(arg1 == 2){//被选中
            dtsl = 0x2B9020EB;
        }
        else{
            dtsl = 0x2B1C458B;
        }
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x581A8E), &dtsl, sizeof(dtsl), 0);
    }
}
void Widget::on_checkBox_41_stateChanged(int arg1) //无需唤醒
{
    if(GameProcessID != 0){
        long long hookhard,hook1,hook2,hook3;
        if(arg1 == 2){//被选中
            hookhard = 0xD284900033067AE9;
            hook1 = 0x8A010000013080C6;
            hook2 = 0x75E900000144938A;
            hook3 = 0x000000FFCCF975E9;
        }
        else{
            hookhard = 0xD28400000144938A;
            hook1 = 0;
            hook2 = 0;
            hook3 = 0;
        }
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x63E43), &hookhard, sizeof(hookhard), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x3944C2), &hook1, sizeof(hook1), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x3944C9), &hook2, sizeof(hook2), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x3944CF), &hook3, sizeof(hook3), 0);
    }
}
void Widget::on_checkBox_43_stateChanged(int arg1) //耐砸王
{
    if(GameProcessID != 0){
        long long nzw2;
        if(arg1 == 2){//被选中
            nzw2 = 0x578B909090909090;
        }
        else{
            nzw2 = 0x578BFFF34200E851;
        }
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x12E97A), &nzw2, sizeof(nzw2), 0);
    }
}
void Widget::on_checkBox_45_stateChanged(int arg1) //真.零费盒子
{
    if(GameProcessID != 0){
        long long lfhz;
        if(arg1 == 2){//被选中
            lfhz = 0x016A909090909090;
        }
        else{
            lfhz = 0x016A000055608A29;
        }
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x583A31), &lfhz, sizeof(lfhz), 0);
    }
}
void Widget::on_checkBox_38_stateChanged(int arg1) //屏蔽免控
{
    if(GameProcessID != 0){
        long long mk1,mk2;
        if(arg1 == 2){//被选中
            mk1 = 0x86C7909090904EEB;
            mk2 = 0x0F90909090900BEB;
        }
        else{
            mk1 = 0x86C70000004A850F;
            mk2 = 0x0F0A000000C4BE83;
        }
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x49A02C), &mk1, sizeof(mk1), 0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x49A800), &mk2, sizeof(mk2), 0);
    }
}
void Widget::on_checkBox_39_stateChanged(int arg1) //屏蔽防爆门
{
    if(GameProcessID != 0){
        long long fb;
        if(arg1 == 2){//被选中
            fb = 0x006A909090900BEB;
        }
        else{
            fb = 0x006A00000007850F;
        }
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x49322D), &fb, sizeof(fb), 0);
    }
}
void mbcall(){ //搭梯call
    __asm
    {
        pushad
        mov eax,dword ptr ds:[0x6a9ec0]
        mov eax,dword ptr ds:[eax+0x768]
        mov eax,dword ptr ds:[eax+0x160]
        push eax
        mov edi,dword ptr ds:[0x6E1C40]
        mov ebx,dword ptr ds:[0x6E1C44]
        mov eax,0x426620
        call eax
        popad
    }
}
void Widget::on_pushButton_18_clicked() //生成墓碑
{
    if(GameProcessID != 0 ){
        if(ui->lineEdit_14->text().isEmpty() || ui->lineEdit_15->text().isEmpty()){
            return;
        }
        int cartempaddr;
        int carSL;
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2A9EC0),&cartempaddr,sizeof(cartempaddr),0);//小推车数量临时地址
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(cartempaddr) + 0x768),&cartempaddr,sizeof(cartempaddr),0);//一级偏移
        ReadProcessMemory(GameProcessHandle,LPVOID((DWORD64)(cartempaddr) + 0x110),&carSL,sizeof(carSL),0);//二级偏移
        //根据小推车数量是否合法判断是否在局内
        if(carSL < 0 || carSL > 6)
            return;
        int mbx = ui->lineEdit_14->text().toInt() -1;
        int mby = ui->lineEdit_15->text().toInt() -1;
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1C40),&mbx,sizeof(mbx),0);
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x2E1C44),&mby,sizeof(mby),0);
        DWORD tempThreadId{0}; //线程ID
        //开辟内存空间
        LPVOID tempaddr = VirtualAllocEx(GameProcessHandle,NULL,0x40900,MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);
        //注入汇编代码
        WriteProcessMemory(GameProcessHandle,tempaddr,mbcall,0x40900,0);
        SuspendThreadHandle(GameProcessID); //暂停游戏全部线程
        //调用注入的代码
        HANDLE tempThreadHandle = CreateRemoteThread(GameProcessHandle,NULL,0,(LPTHREAD_START_ROUTINE)tempaddr,NULL,0,&tempThreadId);
        WaitForSingleObject(tempThreadHandle,INFINITE); //等待注入代码运行结束
        VirtualFreeEx(GameProcessHandle,tempaddr,0,MEM_RELEASE);//释放开辟的空间
        ResumeThreadHandle(GameProcessID);//恢复游戏全部线程
    }
}
void Widget::on_checkBox_44_stateChanged(int arg1) //僵尸自残
{
    if(GameProcessID != 0){
        int  zc;
        if(arg1 == 2){//被选中
            zc = 0x438B9090;
        }
        else{
            zc = 0x438B5D74;
        }
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x12E890), &zc, sizeof(zc), 0);
    }
}
#define updatebuffer QString::fromLocal8Bit(R"(
9.27更新:<br>
修复问题:<br>
修复因游戏版本更新造成的功能失效<br>
新增内容:<br>
使用UPX压缩壳压缩本体文件<br><br>
注:仅适配版本2.5.1,如遇BUG请及时反馈!!!
)")
void Widget::on_pushButton_19_clicked()
{
    QMessageBox message(QMessageBox::NoIcon, QString::fromLocal8Bit("更新记录"), updatebuffer);
    //message.setIconPixmap(QPixmap("logo.ico"));
    message.exec();
}
void Widget::on_checkBox_46_stateChanged(int arg1) //罐子透视
{
    if(GameProcessID != 0){
        long long  ts;
        if(arg1 == 2){//被选中
            ts = 0x4C478900000035B8;
        }
        else{
            ts = 0x4C4789FFC083067E;
        }
        WriteProcessMemory(GameProcessHandle,LPVOID((DWORD64)(GameHandle) + 0x4E5CE), &ts, sizeof(ts), 0);
    }
}

