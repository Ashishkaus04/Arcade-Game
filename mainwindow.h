#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<list2.h>
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_exit_clicked();

    void on_start_clicked();

    void on_START_clicked();

    void on_EXIT_clicked();

private:
    Ui::MainWindow *ui;
    LIST2 *list2;
};
#endif // MAINWINDOW_H
