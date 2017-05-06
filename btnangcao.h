#ifndef BTNANGCAO_H
#define BTNANGCAO_H

#include <QDialog>

namespace Ui {
class BTNangCao;
}

class BTNangCao : public QDialog
{
    Q_OBJECT

public:
    explicit BTNangCao(QWidget *parent = 0);
    ~BTNangCao();

private slots:
    void on_b1_clicked();

    void on_b10_clicked();

    void on_b11_clicked();

    void on_b2_clicked();

    void on_b3_clicked();

    void on_b4_clicked();

    void on_b5_clicked();

    void on_b6_clicked();

    void on_b7_clicked();

    void on_b8_clicked();

    void on_b9_clicked();

    void on_back_clicked();

    void on_nc_link_clicked();

private:
    Ui::BTNangCao *ui;
};

#endif // BTNANGCAO_H
