#ifndef THUVIEN_H
#define THUVIEN_H

#include <QDialog>
#include <giaibaitap.h>
namespace Ui {
class ThuVien;
}

class ThuVien : public QDialog
{
    Q_OBJECT

public:
    explicit ThuVien(QWidget *parent = 0);
    ~ThuVien();

private slots:


    void on_GBT_pushButton_clicked();

    void on_Errors_pushButton_clicked();

    void on_pushButton_clicked();

    void on_NhomTG_pushButton_clicked();



    void on_HamThuongGap_clicked();

    void on_ham_clicked();

    void on_DeThiHSG_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::ThuVien *ui;
    GiaiBaiTap *gbt;
};

#endif // THUVIEN_H
