#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <Qfile>
#include <QTextStream>
#include <QMessageBox>
#include <QPixmap>
#include <QDesktopServices>
#include <QUrl>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Set Background
      QPixmap bkgnd("data\\background.png");
       bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
       QPalette palette;
       palette.setBrush(QPalette::Background, bkgnd);
       this->setPalette(palette);
       //Set Title
     this->setWindowTitle("Hate Pascal If You Can");
       //Disabled Resize
     setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    //hide();
    lythuyet = new LyThuyet(this);
    lythuyet->show();
}

void MainWindow::on_BaiTap_clicked()
{
    //hide();
    baitap = new BaiTap(this);
    baitap->show();
}

void MainWindow::on_ThuVien_clicked()
{
    thuvien = new ThuVien(this);
    thuvien->show();
}

void MainWindow::on_HomePage_clicked()
{
    QString link="http://hatepascalifucan.byethost3.com/";
    QDesktopServices::openUrl(QUrl(link));
}

void MainWindow::on_Blog_clicked()
{
    QString link="https://hatepascalifyoucan.blogspot.com/";
        QDesktopServices::openUrl(QUrl(link));
}
