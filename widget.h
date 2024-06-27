#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<thread>
#include<windows.h>
#include <tlhelp32.h>
#include <Psapi.h>
#include <QDesktopServices>
#include <QUrl>
#include<QRegExp>
#include<QRegExpValidator>
QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    void SetText(QString str);
    DWORD Szy_GetProcessIDW(const wchar_t* ProcessName);
    void setGameProcessID(DWORD ProcessID);
    DWORD getGameProcessID();
    HMODULE Szy_GetModuleHandleW(HANDLE ProcessHandle, const wchar_t* ModuleName);
    void init();
    bool getFirst();
    void setFirst(bool toFitst);
private slots:
    void on_checkBox_stateChanged(int arg1);

    void on_checkBox_2_stateChanged(int arg1);

    void on_checkBox_3_stateChanged(int arg1);

    void on_checkBox_4_stateChanged(int arg1);

    void on_checkBox_5_stateChanged(int arg1);

    void on_checkBox_6_stateChanged(int arg1);

    void on_checkBox_7_stateChanged(int arg1);

    void on_checkBox_8_stateChanged(int arg1);

    void on_checkBox_9_stateChanged(int arg1);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_checkBox_10_stateChanged(int arg1);

    void on_pushButton_4_clicked();

    void on_checkBox_11_stateChanged(int arg1);

    void on_checkBox_12_stateChanged(int arg1);

    void on_checkBox_13_stateChanged(int arg1);

    void on_checkBox_14_stateChanged(int arg1);

    void on_pushButton_5_clicked();

    void on_checkBox_15_stateChanged(int arg1);

    void on_checkBox_16_stateChanged(int arg1);

    void on_checkBox_17_stateChanged(int arg1);

    void on_checkBox_18_stateChanged(int arg1);

    void on_checkBox_19_stateChanged(int arg1);

    void on_checkBox_20_stateChanged(int arg1);

    void on_pushButton_6_clicked();

    void on_pushButton_8_clicked();

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();



    void on_radioButton_16_clicked();

    void on_radioButton_18_clicked();

    void on_radioButton_17_clicked();

    void on_radioButton_20_clicked();

    void on_radioButton_21_clicked();

    void on_radioButton_22_clicked();

    void on_radioButton_19_clicked();

    void on_radioButton_23_clicked();

    void on_checkBox_21_stateChanged(int arg1);

    void on_checkBox_22_stateChanged(int arg1);

    void on_label_4_linkActivated(const QString &link);

    void on_pushButton_7_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_13_clicked();

    void on_comboBox_activated(int index);

    void on_checkBox_23_stateChanged(int arg1);

    void on_checkBox_25_stateChanged(int arg1);

    void on_checkBox_26_stateChanged(int arg1);

    void on_pushButton_16_clicked();

    void on_checkBox_24_stateChanged(int arg1);


    void on_horizontalSlider_valueChanged(int value);

    void on_checkBox_28_stateChanged(int arg1);


    void on_checkBox_29_stateChanged(int arg1);

    void on_label_13_linkActivated(const QString &link);

    void on_checkBox_30_stateChanged(int arg1);

    void on_pushButton_14_clicked();


    void on_checkBox_31_stateChanged(int arg1);

    void on_checkBox_32_stateChanged(int arg1);

    void on_checkBox_33_stateChanged(int arg1);

    void on_checkBox_34_stateChanged(int arg1);

    void on_pushButton_15_clicked();

private:
    Ui::Widget *ui;
    bool wxyg{false};
    bool first{false};
    bool wxxk{false};
    HANDLE  GameProcessHandle{0};
    DWORD  GameProcessID{0};
    HMODULE  GameHandle{0};
};
#endif // WIDGET_H
