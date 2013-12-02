#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    QPushButton *quit = new QPushButton("Close", this);
    quit->setGeometry(90, 100, 41, 31);
   // setWindowTitle(QApplication::translate("About", "About", 0, QApplication::UnicodeUTF8));

    connect(quit, SIGNAL(clicked()), this, SLOT(close()));
}

Dialog::~Dialog()
{
    delete ui;
}
