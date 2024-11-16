/********************************************************************************
** Form generated from reading UI file 'list2.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIST2_H
#define UI_LIST2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LIST2
{
public:
    QLabel *label;
    QPushButton *MINE;
    QPushButton *QUIZ;
    QPushButton *TIC;
    QPushButton *ROCK;
    QPushButton *HAN;
    QPushButton *ROW;
    QPushButton *EXIT;

    void setupUi(QDialog *LIST2)
    {
        if (LIST2->objectName().isEmpty())
            LIST2->setObjectName("LIST2");
        LIST2->resize(1177, 551);
        LIST2->setAutoFillBackground(true);
        label = new QLabel(LIST2);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 1171, 551));
        label->setAutoFillBackground(true);
        label->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/RETRO ARCADE/2.jpg")));
        label->setScaledContents(true);
        MINE = new QPushButton(LIST2);
        MINE->setObjectName("MINE");
        MINE->setGeometry(QRect(180, 230, 131, 31));
        MINE->setAutoFillBackground(true);
        MINE->setStyleSheet(QString::fromUtf8(""));
        QUIZ = new QPushButton(LIST2);
        QUIZ->setObjectName("QUIZ");
        QUIZ->setGeometry(QRect(180, 300, 141, 29));
        QUIZ->setAutoFillBackground(true);
        TIC = new QPushButton(LIST2);
        TIC->setObjectName("TIC");
        TIC->setGeometry(QRect(180, 360, 131, 29));
        TIC->setAutoFillBackground(true);
        ROCK = new QPushButton(LIST2);
        ROCK->setObjectName("ROCK");
        ROCK->setGeometry(QRect(180, 420, 161, 41));
        ROCK->setAutoFillBackground(true);
        HAN = new QPushButton(LIST2);
        HAN->setObjectName("HAN");
        HAN->setGeometry(QRect(420, 230, 111, 31));
        HAN->setAutoFillBackground(true);
        ROW = new QPushButton(LIST2);
        ROW->setObjectName("ROW");
        ROW->setGeometry(QRect(420, 290, 131, 31));
        ROW->setAutoFillBackground(true);
        EXIT = new QPushButton(LIST2);
        EXIT->setObjectName("EXIT");
        EXIT->setGeometry(QRect(420, 360, 83, 29));
        EXIT->setAutoFillBackground(true);

        retranslateUi(LIST2);

        QMetaObject::connectSlotsByName(LIST2);
    } // setupUi

    void retranslateUi(QDialog *LIST2)
    {
        LIST2->setWindowTitle(QCoreApplication::translate("LIST2", "Dialog", nullptr));
        label->setText(QString());
        MINE->setText(QCoreApplication::translate("LIST2", "MINESWEEPER", nullptr));
        QUIZ->setText(QCoreApplication::translate("LIST2", "QUIZ RIDDLES", nullptr));
        TIC->setText(QCoreApplication::translate("LIST2", "TIC TAC TOE", nullptr));
        ROCK->setText(QCoreApplication::translate("LIST2", "ROCK PAPER SCISSOR", nullptr));
        HAN->setText(QCoreApplication::translate("LIST2", "HANGMAN", nullptr));
        ROW->setText(QCoreApplication::translate("LIST2", "HIGHWAY FURY", nullptr));
        EXIT->setText(QCoreApplication::translate("LIST2", "EXIT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LIST2: public Ui_LIST2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIST2_H
