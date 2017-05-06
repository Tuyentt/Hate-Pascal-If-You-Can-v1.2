#ifndef BAITAP_H
#define BAITAP_H

#include <QDialog>
#include <btcoban.h>
#include <btnangcao.h>

namespace Ui {
class BaiTap;
}

class BaiTap : public QDialog
{
    Q_OBJECT

public:
    explicit BaiTap(QWidget *parent = 0);
    ~BaiTap();

private slots:
    void on_COBAN_clicked();

    void on_NANGCAO_clicked();

    void on_pushButton_clicked();

private:
    Ui::BaiTap *ui;
    BTCoBan *btcoban;
    BTNangCao *btnangcao;
};

#endif // BAITAP_H
