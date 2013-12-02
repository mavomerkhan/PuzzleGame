/* Name: Maviya Khan
 * netid: mkhan79
 * Course: CS 340 Software Design
 * Project #4: Fifteen Puzzle
 */

#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    
    return a.exec();
}
