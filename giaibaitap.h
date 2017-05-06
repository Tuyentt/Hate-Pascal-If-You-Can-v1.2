#ifndef GIAIBAITAP_H
#define GIAIBAITAP_H

#include <QDialog>

namespace Ui {
class GiaiBaiTap;
}

class GiaiBaiTap : public QDialog
{
    Q_OBJECT

public:
    explicit GiaiBaiTap(QWidget *parent = 0);
    ~GiaiBaiTap();

private slots:
    void on_pushButton_clicked();

    void on_Back_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

private:
    Ui::GiaiBaiTap *ui;
};

#endif // GIAIBAITAP_H
