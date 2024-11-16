#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
#include<QPixmap>
#include<list2.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap qpix("C:/Users/DELL/OneDrive/Documents/game/images/RETRO ARCADE/1.jpg");   //adds the images to the window to a variable qpix
    ui->label_pic->setPixmap(qpix.scaled(800,700,Qt::KeepAspectRatio));     //assigns the image to the window to a scale
}

MainWindow::~MainWindow()
{
    delete ui;
}





void MainWindow::on_START_clicked()
{
    list2=new LIST2(this);
    list2->show();
}


void MainWindow::on_EXIT_clicked()
{
    close();
}

