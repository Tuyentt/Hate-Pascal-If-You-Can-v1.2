#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <lythuyet.h>
#include <thuvien.h>
#include <baitap.h>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_BaiTap_clicked();

    void on_ThuVien_clicked();

    void on_HomePage_clicked();

    void on_Blog_clicked();

private:
    Ui::MainWindow *ui;
    LyThuyet *lythuyet;
    ThuVien *thuvien;
    BaiTap *baitap;
};

#endif // MAINWINDOW_H
