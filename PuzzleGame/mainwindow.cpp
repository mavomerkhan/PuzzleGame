#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
      QAction *quit = new QAction("&Quit", this);
      QAction *shuffle = new QAction("&Shuffle", this);
      QAction *reset = new QAction("&Reset", this);
     // QEvent *quit = new QEvent("&Quit", this);

      QMenu *file;
      file = menuBar()->addMenu("&File");
      file->addAction(shuffle);
      file->addSeparator();
      file->addAction(reset);
      file->addSeparator();
      file->addAction(quit);

      QAction *actionabout = new QAction("&About", this);
      QAction *actioncontents = new QAction("&Contents", this);

      QMenu *about;
      about = menuBar()->addMenu("&Help");
      about->addAction(actioncontents);
      about->addSeparator();
      about->addAction(actionabout);


      this->setGeometry(0,0,501,477);

      QRect screenGeometry = QApplication::desktop()->screenGeometry();
      int x = (screenGeometry.width()-width()) / 2;
      int y = (screenGeometry.height()-height()) / 2;
      move(x, y);

      btn_1 = new QPushButton("1",this);
      btn_1->setGeometry(10,30,121,111);
      btn_2 = new QPushButton("2",this);
      btn_2->setGeometry(130,30,121,111);
      btn_3 = new QPushButton("3",this);
      btn_3->setGeometry(250,30,121,111);
      btn_4 = new QPushButton("4",this);
      btn_4->setGeometry(370,30,121,111);
      btn_5 = new QPushButton("5",this);
      btn_5->setGeometry(10,140,121,111);
      btn_6 = new QPushButton("6",this);
      btn_6->setGeometry(130,140,121,111);
      btn_7 = new QPushButton("7",this);
      btn_7->setGeometry(250,140,121,111);
      btn_8 = new QPushButton("8",this);
      btn_8->setGeometry(370,140,121,111);
      btn_9 = new QPushButton("9",this);
      btn_9->setGeometry(10,250,121,111);
      btn_10 = new QPushButton("10",this);
      btn_10->setGeometry(130,250,121,111);
      btn_11 = new QPushButton("11",this);
      btn_11->setGeometry(250,250,121,111);
      btn_12 = new QPushButton("12",this);
      btn_12->setGeometry(370,250,121,111);
      btn_13 = new QPushButton("13",this);
      btn_13->setGeometry(10,360,121,111);
      btn_14 = new QPushButton("14",this);
      btn_14->setGeometry(130,360,121,111);
      btn_15 = new QPushButton("15",this);
      btn_15->setGeometry(250,360,121,111);
      btn_16 = new QPushButton(" ",this);
      btn_16->setGeometry(370,360,121,111);

      Shuffle();

      connect(actionabout, SIGNAL(triggered()), this, SLOT(on_showdialog_triggered()));
      connect(shuffle, SIGNAL(triggered()), this, SLOT(on_shuffle_triggered()));
      connect(reset, SIGNAL(triggered()), this, SLOT(on_reset_triggered()));
      connect(actioncontents, SIGNAL(triggered()), this, SLOT(on_contents_triggered()));
      connect(quit, SIGNAL(triggered()), qApp, SLOT(quit()));
      connect(btn_1, SIGNAL(clicked()), this, SLOT(on_btn1_clicked()));
      connect(btn_2, SIGNAL(clicked()), this, SLOT(on_btn2_clicked()));
      connect(btn_3, SIGNAL(clicked()), this, SLOT(on_btn3_clicked()));
      connect(btn_4, SIGNAL(clicked()), this, SLOT(on_btn4_clicked()));
      connect(btn_5, SIGNAL(clicked()), this, SLOT(on_btn5_clicked()));
      connect(btn_6, SIGNAL(clicked()), this, SLOT(on_btn6_clicked()));
      connect(btn_7, SIGNAL(clicked()), this, SLOT(on_btn7_clicked()));
      connect(btn_8, SIGNAL(clicked()), this, SLOT(on_btn8_clicked()));
      connect(btn_9, SIGNAL(clicked()), this, SLOT(on_btn9_clicked()));
      connect(btn_10, SIGNAL(clicked()), this, SLOT(on_btn10_clicked()));
      connect(btn_11, SIGNAL(clicked()), this, SLOT(on_btn11_clicked()));
      connect(btn_12, SIGNAL(clicked()), this, SLOT(on_btn12_clicked()));
      connect(btn_13, SIGNAL(clicked()), this, SLOT(on_btn13_clicked()));
      connect(btn_14, SIGNAL(clicked()), this, SLOT(on_btn14_clicked()));
      connect(btn_15, SIGNAL(clicked()), this, SLOT(on_btn15_clicked()));
      connect(btn_16, SIGNAL(clicked()), this, SLOT(on_btn16_clicked()));

}
void MainWindow::on_shuffle_triggered()
{
    Shuffle();
}
void MainWindow::on_contents_triggered()
{
    Help *dlgHelp = new Help(this);
    dlgHelp->show();
}

void MainWindow::on_showdialog_triggered()
{
    Dialog *New = new Dialog(this);
    New->show();
}
void MainWindow::on_btn1_clicked()
{
    if(btn_5->text()== " ")
    {
        btn_5->setText(btn_1->text());
        btn_1->setText(" ");
        int swap = number_array[4];
        number_array[4] = number_array[0];
        number_array[0] = swap;
    }
    else if(btn_2->text()== " ")
    {
        btn_2->setText(btn_1->text());
         btn_1->setText(" ");
        int swap = number_array[0];
        number_array[0] = number_array[1];
        number_array[1] = swap;
    }
    if(CheckSolution()==16)
    {

            QMessageBox yesNoMsgBox;
            yesNoMsgBox.setWindowTitle("15 Puzzle");
            yesNoMsgBox.setText("Puzzle Solved");
            yesNoMsgBox.setInformativeText(QString("Re shuffle? "));
            yesNoMsgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
            yesNoMsgBox.setDefaultButton(QMessageBox::Yes);
            switch (yesNoMsgBox.exec()){
                case QMessageBox::Yes: {
                    Shuffle();
                    break;
                }
                case QMessageBox::No: {
                    break;
                }
            }
    }
}

void MainWindow::on_btn2_clicked()
{
    if(btn_6->text()== " ")
    {
        btn_6->setText(btn_2->text());
        btn_2->setText(" ");
        int swap = number_array[5];
        number_array[5] = number_array[1];
        number_array[1] = swap;
    }
    else if(btn_1->text()== " ")
    {
        btn_1->setText(btn_2->text());
         btn_2->setText(" ");
        int swap = number_array[0];
        number_array[0] = number_array[1];
        number_array[1] = swap;
    }
    else if(btn_3->text()== " ")
    {
        btn_3->setText(btn_2->text());
         btn_2->setText(" ");
        int swap = number_array[1];
        number_array[1] = number_array[2];
        number_array[2] = swap;
    }
    if(CheckSolution()==16)
    {

            QMessageBox yesNoMsgBox;
            yesNoMsgBox.setWindowTitle("15 Puzzle");
            yesNoMsgBox.setText("Puzzle Solved");
            yesNoMsgBox.setInformativeText(QString("Re shuffle? "));
            yesNoMsgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
            yesNoMsgBox.setDefaultButton(QMessageBox::Yes);
            switch (yesNoMsgBox.exec()){
                case QMessageBox::Yes: {
                    Shuffle();
                    break;
                }
                case QMessageBox::No: {
                    break;
                }
            }
        }
}
void MainWindow::on_btn3_clicked()
{
    if(btn_7->text()== " ")
    {
        btn_7->setText(btn_3->text());
        btn_3->setText(" ");
        int swap = number_array[6];
        number_array[6] = number_array[2];
        number_array[2] = swap;
    }
    else if(btn_4->text()== " ")
    {
        btn_4->setText(btn_3->text());
         btn_3->setText(" ");
        int swap = number_array[2];
        number_array[2] = number_array[3];
        number_array[3] = swap;
    }
    else if(btn_2->text()== " ")
    {
        btn_2->setText(btn_3->text());
         btn_3->setText(" ");
        int swap = number_array[1];
        number_array[1] = number_array[2];
        number_array[2] = swap;
    }
    if(CheckSolution()==16)
    {

            QMessageBox yesNoMsgBox;
            yesNoMsgBox.setWindowTitle("15 Puzzle");
            yesNoMsgBox.setText("Puzzle Solved");
            yesNoMsgBox.setInformativeText(QString("Re shuffle? "));
            yesNoMsgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
            yesNoMsgBox.setDefaultButton(QMessageBox::Yes);
            switch (yesNoMsgBox.exec()){
                case QMessageBox::Yes: {
                    Shuffle();
                    break;
                }
                case QMessageBox::No: {
                    break;
                }
            }
        }
}

void MainWindow::on_btn4_clicked()
{
    if(btn_8->text()== " ")
    {
        btn_8->setText(btn_4->text());
        btn_4->setText(" ");
        int swap = number_array[7];
        number_array[7] = number_array[3];
        number_array[3] = swap;
    }
    else if(btn_3->text()== " ")
    {
        btn_3->setText(btn_4->text());
         btn_4->setText(" ");
        int swap = number_array[3];
        number_array[3] = number_array[2];
        number_array[2] = swap;
    }
    if(CheckSolution()==16)
    {

            QMessageBox yesNoMsgBox;
            yesNoMsgBox.setWindowTitle("15 Puzzle");
            yesNoMsgBox.setText("Puzzle Solved");
            yesNoMsgBox.setInformativeText(QString("Re shuffle? "));
            yesNoMsgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
            yesNoMsgBox.setDefaultButton(QMessageBox::Yes);
            switch (yesNoMsgBox.exec()){
                case QMessageBox::Yes: {
                    Shuffle();
                    break;
                }
                case QMessageBox::No: {
                    break;
                }
            }
        }
}
void MainWindow::on_btn5_clicked()
{
    if(btn_9->text()== " ")
    {
        btn_9->setText(btn_5->text());
        btn_5->setText(" ");
        int swap = number_array[8];
        number_array[8] = number_array[4];
        number_array[4] = swap;
    }
    else if(btn_6->text()== " ")
    {
        btn_6->setText(btn_5->text());
         btn_5->setText(" ");
        int swap = number_array[5];
        number_array[5] = number_array[4];
        number_array[4] = swap;
    }
    else if(btn_1->text()== " ")
    {
        btn_1->setText(btn_5->text());
         btn_5->setText(" ");
        int swap = number_array[0];
        number_array[0] = number_array[4];
        number_array[4] = swap;
    }
    if(CheckSolution()==16)
    {

            QMessageBox yesNoMsgBox;
            yesNoMsgBox.setWindowTitle("15 Puzzle");
            yesNoMsgBox.setText("Puzzle Solved");
            yesNoMsgBox.setInformativeText(QString("Re shuffle? "));
            yesNoMsgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
            yesNoMsgBox.setDefaultButton(QMessageBox::Yes);
            switch (yesNoMsgBox.exec()){
                case QMessageBox::Yes: {
                    Shuffle();
                    break;
                }
                case QMessageBox::No: {
                    break;
                }
            }
        }
}

void MainWindow::on_btn6_clicked()
{
    if(btn_10->text()== " ")
    {
        btn_10->setText(btn_6->text());
        btn_6->setText(" ");
        int swap = number_array[9];
        number_array[9] = number_array[5];
        number_array[5] = swap;
    }
    else if(btn_7->text()== " ")
    {
        btn_7->setText(btn_6->text());
         btn_6->setText(" ");
        int swap = number_array[5];
        number_array[5] = number_array[6];
        number_array[6] = swap;
    }
    else if(btn_5->text()== " ")
    {
        btn_5->setText(btn_6->text());
         btn_6->setText(" ");
        int swap = number_array[4];
        number_array[4] = number_array[5];
        number_array[5] = swap;
    }
    else if(btn_2->text()== " ")
    {
        btn_2->setText(btn_6->text());
        btn_6->setText(" ");
        int swap = number_array[1];
        number_array[1] = number_array[5];
        number_array[5] = swap;
    }
    if(CheckSolution()==16)
    {

            QMessageBox yesNoMsgBox;
            yesNoMsgBox.setWindowTitle("15 Puzzle");
            yesNoMsgBox.setText("Puzzle Solved");
            yesNoMsgBox.setInformativeText(QString("Re shuffle? "));
            yesNoMsgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
            yesNoMsgBox.setDefaultButton(QMessageBox::Yes);
            switch (yesNoMsgBox.exec()){
                case QMessageBox::Yes: {
                    Shuffle();
                    break;
                }
                case QMessageBox::No: {
                    break;
                }
            }
        }
}
void MainWindow::on_btn7_clicked()
{
    if(btn_11->text()== " ")
    {
        btn_11->setText(btn_7->text());
        btn_7->setText(" ");
        int swap = number_array[10];
        number_array[10] = number_array[6];
        number_array[6] = swap;
    }
    else if(btn_8->text()== " ")
    {
        btn_8->setText(btn_7->text());
        btn_7->setText(" ");
        int swap = number_array[6];
        number_array[6] = number_array[7];
        number_array[7] = swap;
    }
    else if(btn_6->text()== " ")
    {
        btn_6->setText(btn_7->text());
        btn_7->setText(" ");
        int swap = number_array[6];
        number_array[6] = number_array[5];
        number_array[5] = swap;
    }
    else if(btn_3->text()== " ")
    {
        btn_3->setText(btn_7->text());
        btn_7->setText(" ");
        int swap = number_array[2];
        number_array[2] = number_array[6];
        number_array[6] = swap;
    }
    if(CheckSolution()==16)
    {

            QMessageBox yesNoMsgBox;
            yesNoMsgBox.setWindowTitle("15 Puzzle");
            yesNoMsgBox.setText("Puzzle Solved");
            yesNoMsgBox.setInformativeText(QString("Re shuffle? "));
            yesNoMsgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
            yesNoMsgBox.setDefaultButton(QMessageBox::Yes);
            switch (yesNoMsgBox.exec()){
                case QMessageBox::Yes: {
                    Shuffle();
                    break;
                }
                case QMessageBox::No: {
                    break;
                }
            }
        }
}

void MainWindow::on_btn8_clicked()
{
    if(btn_12->text()== " ")
    {
        btn_12->setText(btn_8->text());
        btn_8->setText(" ");
        int swap = number_array[11];
        number_array[11] = number_array[7];
        number_array[7] = swap;
    }
    else if(btn_7->text()== " ")
    {
        btn_7->setText(btn_8->text());
        btn_8->setText(" ");
        int swap = number_array[6];
        number_array[6] = number_array[7];
        number_array[7] = swap;
    }
    else if(btn_4->text()== " ")
    {
        btn_4->setText(btn_8->text());
        btn_8->setText(" ");
        int swap = number_array[7];
        number_array[7] = number_array[3];
        number_array[3] = swap;
    }
    if(CheckSolution()==16)
    {

            QMessageBox yesNoMsgBox;
            yesNoMsgBox.setWindowTitle("15 Puzzle");
            yesNoMsgBox.setText("Puzzle Solved");
            yesNoMsgBox.setInformativeText(QString("Re shuffle? "));
            yesNoMsgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
            yesNoMsgBox.setDefaultButton(QMessageBox::Yes);
            switch (yesNoMsgBox.exec()){
                case QMessageBox::Yes: {
                    Shuffle();
                    break;
                }
                case QMessageBox::No: {
                    break;
                }
            }
        }
}
void MainWindow::on_btn9_clicked()
{
    if(btn_13->text()== " ")
    {
        btn_13->setText(btn_9->text());
        btn_9->setText(" ");
        int swap = number_array[12];
        number_array[12] = number_array[8];
        number_array[8] = swap;
    }
    else if(btn_10->text()== " ")
    {
        btn_10->setText(btn_9->text());
        btn_9->setText(" ");
        int swap = number_array[8];
        number_array[8] = number_array[9];
        number_array[9] = swap;
    }
    else if(btn_5->text()== " ")
    {
        btn_5->setText(btn_9->text());
        btn_9->setText(" ");
        int swap = number_array[8];
        number_array[8] = number_array[4];
        number_array[4] = swap;
    }
    if(CheckSolution()==16)
    {

            QMessageBox yesNoMsgBox;
            yesNoMsgBox.setWindowTitle("15 Puzzle");
            yesNoMsgBox.setText("Puzzle Solved");
            yesNoMsgBox.setInformativeText(QString("Re shuffle? "));
            yesNoMsgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
            yesNoMsgBox.setDefaultButton(QMessageBox::Yes);
            switch (yesNoMsgBox.exec()){
                case QMessageBox::Yes: {
                    Shuffle();
                    break;
                }
                case QMessageBox::No: {
                    break;
                }
            }
        }
}

void MainWindow::on_btn10_clicked()
{
    if(btn_14->text()== " ")
    {
        btn_14->setText(btn_10->text());
        btn_10->setText(" ");
        int swap = number_array[13];
        number_array[13] = number_array[9];
        number_array[9] = swap;
    }
    else if(btn_11->text()== " ")
    {
        btn_11->setText(btn_10->text());
        btn_10->setText(" ");
        int swap = number_array[10];
        number_array[10] = number_array[9];
        number_array[9] = swap;
    }
    else if(btn_9->text()== " ")
    {
        btn_9->setText(btn_10->text());
        btn_10->setText(" ");
        int swap = number_array[8];
        number_array[8] = number_array[9];
        number_array[9] = swap;
    }
    else if(btn_6->text()== " ")
    {
        btn_6->setText(btn_10->text());
        btn_10->setText(" ");
        int swap = number_array[9];
        number_array[9] = number_array[5];
        number_array[5] = swap;
    }
    if(CheckSolution()==16)
    {

            QMessageBox yesNoMsgBox;
            yesNoMsgBox.setWindowTitle("15 Puzzle");
            yesNoMsgBox.setText("Puzzle Solved");
            yesNoMsgBox.setInformativeText(QString("Re shuffle? "));
            yesNoMsgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
            yesNoMsgBox.setDefaultButton(QMessageBox::Yes);
            switch (yesNoMsgBox.exec()){
                case QMessageBox::Yes: {
                    Shuffle();
                    break;
                }
                case QMessageBox::No: {
                    break;
                }
            }
        }
}
void MainWindow::on_btn11_clicked()
{
    if(btn_15->text()== " ")
    {
        btn_15->setText(btn_11->text());
        btn_11->setText(" ");
        int swap = number_array[14];
        number_array[14] = number_array[10];
        number_array[10] = swap;
    }
    else if(btn_12->text()== " ")
    {
        btn_12->setText(btn_11->text());
        btn_11->setText(" ");
        int swap = number_array[11];
        number_array[11] = number_array[10];
        number_array[10] = swap;
    }
    else if(btn_10->text()== " ")
    {
        btn_10->setText(btn_11->text());
        btn_11->setText(" ");
        int swap = number_array[10];
        number_array[10] = number_array[9];
        number_array[9] = swap;
    }
    else if(btn_7->text()== " ")
    {
        btn_7->setText(btn_11->text());
        btn_11->setText(" ");
        int swap = number_array[10];
        number_array[10] = number_array[6];
        number_array[6] = swap;
    }
    if(CheckSolution()==16)
    {

            QMessageBox yesNoMsgBox;
            yesNoMsgBox.setWindowTitle("15 Puzzle");
            yesNoMsgBox.setText("Puzzle Solved");
            yesNoMsgBox.setInformativeText(QString("Re shuffle? "));
            yesNoMsgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
            yesNoMsgBox.setDefaultButton(QMessageBox::Yes);
            switch (yesNoMsgBox.exec()){
                case QMessageBox::Yes: {
                    Shuffle();
                    break;
                }
                case QMessageBox::No: {
                    break;
                }
            }
        }
}

void MainWindow::on_btn12_clicked()
{
    if(btn_16->text()== " ")
    {
        btn_16->setText(btn_12->text());
        btn_12->setText(" ");
        int swap = number_array[11];
        number_array[11] = number_array[15];
        number_array[15] = swap;
    }
    else if(btn_11->text()== " ")
    {
        btn_11->setText(btn_12->text());
        btn_12->setText(" ");
        int swap = number_array[10];
        number_array[10] = number_array[11];
        number_array[11] = swap;
    }
    else if(btn_8->text()== " ")
    {
        btn_8->setText(btn_12->text());
        btn_12->setText(" ");
        int swap = number_array[11];
        number_array[11] = number_array[7];
        number_array[7] = swap;
    }
    if(CheckSolution()==16)
    {

            QMessageBox yesNoMsgBox;
            yesNoMsgBox.setWindowTitle("15 Puzzle");
            yesNoMsgBox.setText("Puzzle Solved");
            yesNoMsgBox.setInformativeText(QString("Re shuffle? "));
            yesNoMsgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
            yesNoMsgBox.setDefaultButton(QMessageBox::Yes);
            switch (yesNoMsgBox.exec()){
                case QMessageBox::Yes: {
                    Shuffle();
                    break;
                }
                case QMessageBox::No: {
                    break;
                }
            }
        }
}
void MainWindow::on_btn13_clicked()
{
    if(btn_14->text()== " ")
    {
        btn_14->setText(btn_13->text());
        btn_13->setText(" ");
        int swap = number_array[12];
        number_array[12] = number_array[13];
        number_array[13] = swap;
    }
    else if(btn_9->text()== " ")
    {
        btn_9->setText(btn_13->text());
        btn_13->setText(" ");
        int swap = number_array[12];
        number_array[12] = number_array[8];
        number_array[8] = swap;
    }
    if(CheckSolution()==16)
    {

            QMessageBox yesNoMsgBox;
            yesNoMsgBox.setWindowTitle("15 Puzzle");
            yesNoMsgBox.setText("Puzzle Solved");
            yesNoMsgBox.setInformativeText(QString("Re shuffle? "));
            yesNoMsgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
            yesNoMsgBox.setDefaultButton(QMessageBox::Yes);
            switch (yesNoMsgBox.exec()){
                case QMessageBox::Yes: {
                    Shuffle();
                    break;
                }
                case QMessageBox::No: {
                    break;
                }
            }
        }
}

void MainWindow::on_btn14_clicked()
{
    if(btn_15->text()== " ")
    {
        btn_15->setText(btn_14->text());
        btn_14->setText(" ");
        int swap = number_array[13];
        number_array[13] = number_array[14];
        number_array[14] = swap;
    }
    else if(btn_13->text()== " ")
    {
        btn_13->setText(btn_14->text());
        btn_14->setText(" ");
        int swap = number_array[13];
        number_array[13] = number_array[12];
        number_array[12] = swap;
    }
    else if(btn_10->text()== " ")
    {
        btn_10->setText(btn_14->text());
        btn_14->setText(" ");
        int swap = number_array[9];
        number_array[9] = number_array[13];
        number_array[13] = swap;
    }
    if(CheckSolution()==16)
    {

            QMessageBox yesNoMsgBox;
            yesNoMsgBox.setWindowTitle("15 Puzzle");
            yesNoMsgBox.setText("Puzzle Solved");
            yesNoMsgBox.setInformativeText(QString("Re shuffle? "));
            yesNoMsgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
            yesNoMsgBox.setDefaultButton(QMessageBox::Yes);
            switch (yesNoMsgBox.exec()){
                case QMessageBox::Yes: {
                    Shuffle();
                    break;
                }
                case QMessageBox::No: {
                    break;
                }
            }
        }
}
void MainWindow::on_btn15_clicked()
{
    if(btn_16->text()== " ")
    {
        btn_16->setText(btn_15->text());
        btn_15->setText(" ");
        int swap = number_array[15];
        number_array[15] = number_array[14];
        number_array[14] = swap;
    }
    else if(btn_14->text()== " ")
    {
        btn_14->setText(btn_15->text());
        btn_15->setText(" ");
        int swap = number_array[13];
        number_array[13] = number_array[14];
        number_array[14] = swap;
    }
    else if(btn_11->text()== " ")
    {
        btn_11->setText(btn_15->text());
        btn_15->setText(" ");
        int swap = number_array[10];
        number_array[10] = number_array[14];
        number_array[14] = swap;
    }
    if(CheckSolution()==16)
    {

            QMessageBox yesNoMsgBox;
            yesNoMsgBox.setWindowTitle("15 Puzzle");
            yesNoMsgBox.setText("Puzzle Solved");
            yesNoMsgBox.setInformativeText(QString("Re shuffle? "));
            yesNoMsgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
            yesNoMsgBox.setDefaultButton(QMessageBox::Yes);
            switch (yesNoMsgBox.exec()){
                case QMessageBox::Yes: {
                    Shuffle();
                    break;
                }
                case QMessageBox::No: {
                    break;
                }
            }
        }
}

void MainWindow::on_btn16_clicked()
{
    if(btn_15->text()== " ")
    {
        btn_15->setText(btn_16->text());
        btn_16->setText(" ");
        int swap = number_array[14];
        number_array[14] = number_array[15];
        number_array[15] = swap;
    }
    else if(btn_12->text()== " ")
    {
        btn_12->setText(btn_16->text());
        btn_16->setText(" ");
        int swap = number_array[11];
        number_array[11] = number_array[15];
        number_array[15] = swap;
    }
    if(CheckSolution()==16)
    {

            QMessageBox yesNoMsgBox;
            yesNoMsgBox.setWindowTitle("15 Puzzle");
            yesNoMsgBox.setText("Puzzle Solved");
            yesNoMsgBox.setInformativeText(QString("Re shuffle? "));
            yesNoMsgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
            yesNoMsgBox.setDefaultButton(QMessageBox::Yes);
            switch (yesNoMsgBox.exec()){
                case QMessageBox::Yes: {
                    Shuffle();
                    break;
                }
                case QMessageBox::No: {
                    break;
                }
            }
        }
}

void MainWindow::Shuffle()
{
    number_array.clear();
    for (int idx = 0; idx < 15; idx++)
    {
        number_array.push_back(idx + 1);
    }
    QTime time = QTime::currentTime();
    std::srand ( unsigned ( time.msec() ) );
    std::random_shuffle(number_array.begin(),number_array.end());
    QString s = QString::number(number_array[0]);
    btn_1->setText(s);
    s = QString::number(number_array[1]);
    btn_2->setText(s);
    s = QString::number(number_array[2]);
    btn_3->setText(s);
    s = QString::number(number_array[3]);
    btn_4->setText(s);
    s = QString::number(number_array[4]);
    btn_5->setText(s);
    s = QString::number(number_array[5]);
    btn_6->setText(s);
    s = QString::number(number_array[6]);
    btn_7->setText(s);
    s = QString::number(number_array[7]);
    btn_8->setText(s);
    s = QString::number(number_array[8]);
    btn_9->setText(s);
    s = QString::number(number_array[9]);
    btn_10->setText(s);
    s = QString::number(number_array[10]);
    btn_11->setText(s);
    s = QString::number(number_array[11]);
    btn_12->setText(s);
    s = QString::number(number_array[12]);
    btn_13->setText(s);
    s = QString::number(number_array[13]);
    btn_14->setText(s);
    s = QString::number(number_array[14]);
    btn_15->setText(s);
    while(!CheckSolvable())
    {
        Shuffle();
    }
    number_array.push_back(16);
}
void MainWindow::on_reset_triggered()
{
    number_array.clear();
    for (int idx = 0; idx < 15; idx++)
    {
        number_array.push_back(idx + 1);
    }
    QString s = QString::number(number_array[0]);
    btn_1->setText(s);
    s = QString::number(number_array[1]);
    btn_2->setText(s);
    s = QString::number(number_array[2]);
    btn_3->setText(s);
    s = QString::number(number_array[3]);
    btn_4->setText(s);
    s = QString::number(number_array[4]);
    btn_5->setText(s);
    s = QString::number(number_array[5]);
    btn_6->setText(s);
    s = QString::number(number_array[6]);
    btn_7->setText(s);
    s = QString::number(number_array[7]);
    btn_8->setText(s);
    s = QString::number(number_array[8]);
    btn_9->setText(s);
    s = QString::number(number_array[9]);
    btn_10->setText(s);
    s = QString::number(number_array[10]);
    btn_11->setText(s);
    s = QString::number(number_array[11]);
    btn_12->setText(s);
    s = QString::number(number_array[12]);
    btn_13->setText(s);
    s = QString::number(number_array[13]);
    btn_14->setText(s);
    s = QString::number(number_array[14]);
    btn_15->setText(s);
    btn_16->setText(" ");
}

bool MainWindow::CheckSolvable()
{
    //number_array.clear();
    int count = 0;
    for(int i =0; i < 15; i++)
    {
        for(int j =i; j < 15; j++)
            if(number_array[i] > number_array[j] )
            {
                count++;
            }
    }

    if(count%2==1)
    {
        return false;
    }
    return true;
}
int MainWindow::CheckSolution()
{
    int count = 0;
    for(int i =0; i < 15; i++)
    {
        if(number_array[i] == i + 1)
        {
            count++;
        }
    }
    return count;

}
MainWindow::~MainWindow()
{
    ui = NULL;
    delete ui;
    number_array.clear();
    btn_1 = NULL;
    btn_2 = NULL;
    btn_3 = NULL;
    btn_4 = NULL;
    btn_5 = NULL;
    btn_6 = NULL;
    btn_7 = NULL;
    btn_8 = NULL;
    btn_9 = NULL;
    btn_10 = NULL;
    btn_11 = NULL;
    btn_12 = NULL;
    btn_13 = NULL;
    btn_14 = NULL;
    btn_15 = NULL;
    btn_16 = NULL;

    delete btn_1;
    delete btn_2;
    delete btn_3;
    delete btn_4;
    delete btn_5;
    delete btn_6;
    delete btn_7;
    delete btn_8;
    delete btn_9;
    delete btn_10;
    delete btn_11;
    delete btn_12;
    delete btn_13;
    delete btn_14;
    delete btn_15;
    delete btn_16;
}
