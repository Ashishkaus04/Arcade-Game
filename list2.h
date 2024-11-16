#ifndef LIST2_H
#define LIST2_H

#include <QDialog>

namespace Ui {
class LIST2;
}

class LIST2 : public QDialog
{
    Q_OBJECT

public:
    explicit LIST2(QWidget *parent = nullptr);
    ~LIST2();

private slots:
    void on_MINE_clicked();

    void on_QUIZ_clicked();

    void on_TIC_clicked();

    void on_ROCK_clicked();

    void on_HAN_clicked();

    void on_ROW_clicked();

    void on_SEA_clicked();

    void on_EXIT_clicked();

private:
    Ui::LIST2 *ui;
};

#endif // LIST2_H
