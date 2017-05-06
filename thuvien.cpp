#include "thuvien.h"
#include "ui_thuvien.h"
#include <Qfile>
#include <QTextStream>
#include <QMessageBox>
#include <QDesktopServices>
#include <QUrl>
#include <QStatusBar>

ThuVien::ThuVien(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ThuVien)
{
    ui->setupUi(this);
    ui->pushButton->setHidden(true);
    ui->textBrowser->setHidden(true);
    // Set Background
      QPixmap bkgnd("data\\background_p3.png");
       bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
       QPalette palette;
       palette.setBrush(QPalette::Background, bkgnd);
       this->setPalette(palette);
       //Set Title
     this->setWindowTitle("Phần 3: Thư Viện");
       //Disabled Resize
     setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);


}

ThuVien::~ThuVien()
{
    delete ui;
}


void ThuVien::on_GBT_pushButton_clicked()
{
    //hide();
    gbt = new GiaiBaiTap(this);
    gbt->show();
}

void ThuVien::on_Errors_pushButton_clicked()
{
    ui->textBrowser->show();
        QFile file("data\\p3\\errors.ltds");
        if(!file.open(QIODevice::ReadOnly))
            QMessageBox::information(0,"info",file.errorString());
        QTextStream in(&file);
        ui->textBrowser->setText(in.readAll());
        ui->pushButton->show();
}

void ThuVien::on_pushButton_clicked()
{
    ui->textBrowser->setHidden("true");
    ui->pushButton->setHidden(true);
}

void ThuVien::on_NhomTG_pushButton_clicked()
{
    ui->textBrowser->show();
        QFile file("data\\p3\\info.ltds");
        if(!file.open(QIODevice::ReadOnly))
            QMessageBox::information(0,"info",file.errorString());
        QTextStream in(&file);
        ui->textBrowser->setText(in.readAll());
        ui->pushButton->show();
}

void ThuVien::on_HamThuongGap_clicked()
{

}

void ThuVien::on_ham_clicked()
{
    ui->textBrowser->show();
        QFile file("data\\p3\\ham.ltds");
        if(!file.open(QIODevice::ReadOnly))
            QMessageBox::information(0,"info",file.errorString());
        QTextStream in(&file);
        ui->textBrowser->setText(in.readAll());
        ui->pushButton->show();
}

void ThuVien::on_DeThiHSG_pushButton_clicked()
{
    QString link_dethi="https://hatepascalifyoucan.blogspot.com/search/label/de-thi";
    QDesktopServices::openUrl(QUrl(link_dethi));
}

void ThuVien::on_pushButton_2_clicked()
{
    QString link_ebook="https://hatepascalifyoucan.blogspot.com/search/label/ebook";
    QDesktopServices::openUrl(QUrl(link_ebook));
}
