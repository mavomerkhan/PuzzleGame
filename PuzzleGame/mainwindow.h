#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <qdesktopwidget.h>
#include <algorithm>
#include <QDateTime>
#include <QPushButton>
#include <QMessageBox>
#include "help.h"
#include "dialog.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private slots:
    void on_contents_triggered();
    void on_showdialog_triggered();
    void on_shuffle_triggered();
    void on_reset_triggered();
    void on_btn1_clicked();
    void on_btn2_clicked();
    void on_btn3_clicked();
    void on_btn4_clicked();
    void on_btn5_clicked();
    void on_btn6_clicked();
    void on_btn7_clicked();
    void on_btn8_clicked();
    void on_btn9_clicked();
    void on_btn10_clicked();
    void on_btn11_clicked();
    void on_btn12_clicked();
    void on_btn13_clicked();
    void on_btn14_clicked();
    void on_btn15_clicked();
    void on_btn16_clicked();
    
private:
    Ui::MainWindow *ui;
    QPushButton *btn_1;
    QPushButton *btn_2;
    QPushButton *btn_3;
    QPushButton *btn_4;
    QPushButton *btn_5;
    QPushButton *btn_6;
    QPushButton *btn_7;
    QPushButton *btn_8;
    QPushButton *btn_9;
    QPushButton *btn_10;
    QPushButton *btn_11;
    QPushButton *btn_12;
    QPushButton *btn_13;
    QPushButton *btn_14;
    QPushButton *btn_15;
    QPushButton *btn_16;
    std::vector<int> number_array;
private:
    void Shuffle();
    bool CheckSolvable();
    int CheckSolution();
};

#endif // MAINWINDOW_H
