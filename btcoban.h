#ifndef BTCOBAN_H
#define BTCOBAN_H

#include <QDialog>

namespace Ui {
class BTCoBan;
}

class BTCoBan : public QDialog
{
    Q_OBJECT

public:
    explicit BTCoBan(QWidget *parent = 0);
    ~BTCoBan();

private slots:
    void on_B1_clicked();

    void on_B2_clicked();

    void on_B3_clicked();

    void on_B4_clicked();

    void on_B5_clicked();

    void on_B6_clicked();

    void on_B7_clicked();

    void on_B8_clicked();

    void on_B9_clicked();

    void on_B10_clicked();

    void on_B11_clicked();

    void on_B12_clicked();

    void on_B13_clicked();

    void on_B14_clicked();

    void on_Back_clicked();

private:
    Ui::BTCoBan *ui;
};

#endif // BTCOBAN_H
