#ifndef LYTHUYET_H
#define LYTHUYET_H

#include <QDialog>


namespace Ui {
class LyThuyet;
}

class LyThuyet : public QDialog
{
    Q_OBJECT

public:
    explicit LyThuyet(QWidget *parent = 0);
    ~LyThuyet();

private slots:
    void on_Bai1_clicked();

    void on_Bai2_clicked();

    void on_Back_clicked();

    void on_Bai3_clicked();

    void on_Bai4_clicked();

    void on_Bai5_clicked();

    void on_Bai6_clicked();

    void on_Bai7_clicked();

    void on_Bai8_clicked();

    void on_Bai9_clicked();

    void on_Bai10_clicked();

    void on_Bai11_clicked();

    void on_Bai12_clicked();

    void on_Bai13_clicked();

    void on_Bai14_clicked();

    void on_Back_2_clicked();

private:
    Ui::LyThuyet *ui;

};

#endif // LYTHUYET_H
