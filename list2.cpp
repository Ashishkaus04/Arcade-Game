#include "list2.h"
#include "ui_list2.h"
#include<QFileDialog>>
#include<QDesktopServices>>
#include<QUrl>
#include<mainwindow.h>
LIST2::LIST2(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::LIST2)
{
    ui->setupUi(this);
    QPixmap qpix("C:/Users/DELL/OneDrive/Documents/game/images/RETRO ARCADE/2.jpg");   //adds the images to the window to a variable qpix
    ui->label->setPixmap(qpix.scaled(800,700,Qt::KeepAspectRatio));     //assigns the image to the window to a scale
}

LIST2::~LIST2()
{
    delete ui;
}

void LIST2::on_MINE_clicked()
{
    QDesktopServices::openUrl(QUrl("C:/Users/DELL/OneDrive/Documents/game/games/minesweeper.exe"));
}


void LIST2::on_QUIZ_clicked()
{
    QDesktopServices::openUrl(QUrl("C:/Users/DELL/OneDrive/Documents/game/games/quiz.exe"));
}


void LIST2::on_TIC_clicked()
{
    QDesktopServices::openUrl(QUrl("C:/Users/DELL/OneDrive/Documents/game/games/tictactoe.exe"));
}


void LIST2::on_ROCK_clicked()
{
    QDesktopServices::openUrl(QUrl("C:/Users/DELL/OneDrive/Documents/game/games/rockpaperscissor.exe"));
}


void LIST2::on_HAN_clicked()
{
    QDesktopServices::openUrl(QUrl("C:/Users/DELL/OneDrive/Documents/game/games/hangman2.exe"));

}

void LIST2::on_ROW_clicked()
{
    QDesktopServices::openUrl(QUrl("C:/Users/DELL/OneDrive/Documents/game/games/carg.exe"));
}





void LIST2::on_EXIT_clicked()
{
    close();

}

