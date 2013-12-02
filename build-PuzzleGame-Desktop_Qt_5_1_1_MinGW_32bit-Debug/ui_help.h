/********************************************************************************
** Form generated from reading UI file 'help.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELP_H
#define UI_HELP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Help
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;

    void setupUi(QDialog *Help)
    {
        if (Help->objectName().isEmpty())
            Help->setObjectName(QStringLiteral("Help"));
        Help->resize(400, 449);
        label = new QLabel(Help);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 121, 31));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QStringLiteral("MS Reference Sans Serif"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(Help);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 50, 371, 51));
        label_2->setFrameShape(QFrame::StyledPanel);
        label_2->setFrameShadow(QFrame::Plain);
        label_2->setWordWrap(true);
        label_3 = new QLabel(Help);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 100, 121, 31));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setFont(font);
        label_4 = new QLabel(Help);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 130, 371, 51));
        label_4->setFrameShape(QFrame::StyledPanel);
        label_4->setFrameShadow(QFrame::Plain);
        label_4->setWordWrap(true);
        label_5 = new QLabel(Help);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 180, 121, 31));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setFont(font);
        label_6 = new QLabel(Help);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 210, 371, 21));
        label_6->setFrameShape(QFrame::StyledPanel);
        label_6->setFrameShadow(QFrame::Plain);
        label_6->setWordWrap(true);
        label_7 = new QLabel(Help);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 230, 371, 31));
        label_7->setFrameShape(QFrame::StyledPanel);
        label_7->setFrameShadow(QFrame::Plain);
        label_7->setWordWrap(true);
        label_8 = new QLabel(Help);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 260, 371, 21));
        label_8->setFrameShape(QFrame::StyledPanel);
        label_8->setFrameShadow(QFrame::Plain);
        label_8->setWordWrap(true);
        label_9 = new QLabel(Help);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 280, 371, 21));
        label_9->setFrameShape(QFrame::StyledPanel);
        label_9->setFrameShadow(QFrame::Plain);
        label_9->setWordWrap(true);
        label_10 = new QLabel(Help);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(20, 310, 121, 31));
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);
        label_10->setFont(font);
        label_11 = new QLabel(Help);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(20, 360, 371, 31));
        label_11->setFrameShape(QFrame::StyledPanel);
        label_11->setFrameShadow(QFrame::Plain);
        label_11->setWordWrap(true);
        label_12 = new QLabel(Help);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(20, 390, 371, 21));
        label_12->setFrameShape(QFrame::StyledPanel);
        label_12->setFrameShadow(QFrame::Plain);
        label_12->setWordWrap(true);
        label_13 = new QLabel(Help);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(20, 340, 371, 21));
        label_13->setFrameShape(QFrame::StyledPanel);
        label_13->setFrameShadow(QFrame::Plain);
        label_13->setWordWrap(true);

        retranslateUi(Help);

        QMetaObject::connectSlotsByName(Help);
    } // setupUi

    void retranslateUi(QDialog *Help)
    {
        Help->setWindowTitle(QApplication::translate("Help", "Dialog", 0));
        label->setText(QApplication::translate("Help", "How to Play:", 0));
        label_2->setText(QApplication::translate("Help", "To solve the puzzle, click on the number that is next to the empty position which will move into the empty position. By \"next to\", the number can be above, below, to the left or to the right of the empty position.", 0));
        label_3->setText(QApplication::translate("Help", "Winning", 0));
        label_4->setText(QApplication::translate("Help", "In order to win the puzzle Place the numbers from 1-15. That first line contains numbers in order 1,2,3,4 next line contains 5,6,7,8 third line have 9,10,11,12 and last line should contain 13,14,15 and empty box in the end.", 0));
        label_5->setText(QApplication::translate("Help", "File Menu", 0));
        label_6->setText(QApplication::translate("Help", "File Menu contains 3 options.", 0));
        label_7->setText(QApplication::translate("Help", "Shuffle: This option rearrange the numbers in the grid into some random but solvable order.", 0));
        label_8->setText(QApplication::translate("Help", "Reset: This option solve the puzzle and show the solution.", 0));
        label_9->setText(QApplication::translate("Help", "Quit: This option quits the program.", 0));
        label_10->setText(QApplication::translate("Help", "Help Menu", 0));
        label_11->setText(QApplication::translate("Help", "Contents: This options show the general help how to play the game and how to use the program.", 0));
        label_12->setText(QApplication::translate("Help", "About: This option shows the purpose of program. ", 0));
        label_13->setText(QApplication::translate("Help", "Help Menu contains 2 options.", 0));
    } // retranslateUi

};

namespace Ui {
    class Help: public Ui_Help {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELP_H
