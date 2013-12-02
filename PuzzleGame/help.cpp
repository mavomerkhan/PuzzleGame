#include "help.h"
#include "ui_help.h"

Help::Help(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Help)
{
    ui->setupUi(this);
    //setWindowTitle(QApplication::translate("Contents", "Contents", 0, QApplication::UnicodeUTF8));
    QPushButton *quit = new QPushButton("Close", this);
    quit->setGeometry(175, 415, 41, 31);
    connect(quit, SIGNAL(clicked()), this, SLOT(close()));
}

Help::~Help()
{
    delete ui;
}
