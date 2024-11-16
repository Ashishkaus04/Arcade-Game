/********************************************************************************
** Form generated from reading UI file 'LIST.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIST_H
#define UI_LIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label;
    QPushButton *MINESWEEPER;
    QPushButton *QUIZ_RIDDLE;
    QPushButton *TIC_TAC_TOE;
    QPushButton *ROCKPAPERSCISSOR;
    QPushButton *HANGAMN;
    QPushButton *INAROW;
    QPushButton *SEA_BATTLE;
    QPushButton *EXIT;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(1169, 563);
        label = new QLabel(Dialog);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 1161, 561));
        label->setAutoFillBackground(true);
        label->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/RETRO ARCADE (2).jpg")));
        label->setScaledContents(true);
        MINESWEEPER = new QPushButton(Dialog);
        MINESWEEPER->setObjectName("MINESWEEPER");
        MINESWEEPER->setGeometry(QRect(180, 230, 121, 29));
        QUIZ_RIDDLE = new QPushButton(Dialog);
        QUIZ_RIDDLE->setObjectName("QUIZ_RIDDLE");
        QUIZ_RIDDLE->setGeometry(QRect(180, 300, 131, 29));
        TIC_TAC_TOE = new QPushButton(Dialog);
        TIC_TAC_TOE->setObjectName("TIC_TAC_TOE");
        TIC_TAC_TOE->setGeometry(QRect(180, 370, 121, 29));
        ROCKPAPERSCISSOR = new QPushButton(Dialog);
        ROCKPAPERSCISSOR->setObjectName("ROCKPAPERSCISSOR");
        ROCKPAPERSCISSOR->setGeometry(QRect(180, 430, 161, 41));
        HANGAMN = new QPushButton(Dialog);
        HANGAMN->setObjectName("HANGAMN");
        HANGAMN->setGeometry(QRect(420, 230, 101, 31));
        INAROW = new QPushButton(Dialog);
        INAROW->setObjectName("INAROW");
        INAROW->setGeometry(QRect(420, 300, 111, 31));
        SEA_BATTLE = new QPushButton(Dialog);
        SEA_BATTLE->setObjectName("SEA_BATTLE");
        SEA_BATTLE->setGeometry(QRect(420, 370, 111, 31));
        EXIT = new QPushButton(Dialog);
        EXIT->setObjectName("EXIT");
        EXIT->setGeometry(QRect(420, 430, 101, 31));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QString());
        MINESWEEPER->setText(QCoreApplication::translate("Dialog", "MINESWEEPER", nullptr));
        QUIZ_RIDDLE->setText(QCoreApplication::translate("Dialog", "QUIZ & RIDDLE", nullptr));
        TIC_TAC_TOE->setText(QCoreApplication::translate("Dialog", "TIC TAC TOE", nullptr));
        ROCKPAPERSCISSOR->setText(QCoreApplication::translate("Dialog", "ROCK PAPER SCISSOR", nullptr));
        HANGAMN->setText(QCoreApplication::translate("Dialog", "HANGMAN", nullptr));
        INAROW->setText(QCoreApplication::translate("Dialog", "4 IN A ROW", nullptr));
        SEA_BATTLE->setText(QCoreApplication::translate("Dialog", "SEA BATTLE", nullptr));
        EXIT->setText(QCoreApplication::translate("Dialog", "EXIT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIST_H
