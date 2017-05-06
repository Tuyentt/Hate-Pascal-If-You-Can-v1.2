#include "lythuyet.h"
#include "ui_lythuyet.h"
#include <Qfile>
#include <QTextStream>
#include <QMessageBox>
LyThuyet::LyThuyet(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LyThuyet)
{
    ui->setupUi(this);
    ui->textBrowser->setHidden(true);
    // Set Background
      QPixmap bkgnd("data\\background_p1.png");
       bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
       QPalette palette;
       palette.setBrush(QPalette::Background, bkgnd);
       this->setPalette(palette);
       //Set Title
     this->setWindowTitle("Phần 1: Lý Thuyết");
       // Set Back
      ui->Back->setHidden(true);
      //Disabled Resize
    setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);
}

LyThuyet::~LyThuyet()
{
    delete ui;
}

void LyThuyet::on_Bai1_clicked()
{    ui->textBrowser->show();
     QFile file("data\\p1\\b1.ltds");
     if(!file.open(QIODevice::ReadOnly))
         QMessageBox::information(0,"info",file.errorString());
     QTextStream in(&file);
     ui->textBrowser->setText(in.readAll());
     ui->Back->show();
}

void LyThuyet::on_Bai2_clicked()
{
            ui->textBrowser->show();
            QFile file("data\\p1\\b2.ltds");
            if(!file.open(QIODevice::ReadOnly))
                QMessageBox::information(0,"info",file.errorString());
            QTextStream in(&file);
            ui->textBrowser->setText(in.readAll());
            ui->Back->show();
}

void LyThuyet::on_Back_clicked()
{

    ui->textBrowser->setHidden(true);
    ui->Back->setHidden(true);
}

void LyThuyet::on_Bai3_clicked()
{
    ui->textBrowser->show();
    QFile file("data\\p1\\b3.ltds");
    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"info",file.errorString());
    QTextStream in(&file);
    ui->textBrowser->setText(in.readAll());
    ui->Back->show();
}

void LyThuyet::on_Bai4_clicked()
{
    ui->textBrowser->show();
    QFile file("data\\p1\\b4.ltds");
    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"info",file.errorString());
    QTextStream in(&file);
    ui->textBrowser->setText(in.readAll());
    ui->Back->show();
}

void LyThuyet::on_Bai5_clicked()
{
    ui->textBrowser->show();
    QFile file("data\\p1\\b5.ltds");
    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"info",file.errorString());
    QTextStream in(&file);
    ui->textBrowser->setText(in.readAll());
    ui->Back->show();
}

void LyThuyet::on_Bai6_clicked()
{
    ui->textBrowser->show();
    QFile file("data\\p1\\b6.ltds");
    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"info",file.errorString());
    QTextStream in(&file);
    ui->textBrowser->setText(in.readAll());
    ui->Back->show();
}

void LyThuyet::on_Bai7_clicked()
{
    ui->textBrowser->show();
    QFile file("data\\p1\\b7.ltds");
    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"info",file.errorString());
    QTextStream in(&file);
    ui->textBrowser->setText(in.readAll());
    ui->Back->show();
}

void LyThuyet::on_Bai8_clicked()
{
    ui->textBrowser->show();
    QFile file("data\\p1\\b8.ltds");
    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"info",file.errorString());
    QTextStream in(&file);
    ui->textBrowser->setText(in.readAll());
    ui->Back->show();
}

void LyThuyet::on_Bai9_clicked()
{
    ui->textBrowser->show();
    QFile file("data\\p1\\b9.ltds");
    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"info",file.errorString());
    QTextStream in(&file);
    ui->textBrowser->setText(in.readAll());
    ui->Back->show();
}

void LyThuyet::on_Bai10_clicked()
{
    ui->textBrowser->show();
    QFile file("data\\p1\\b10.ltds");
    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"info",file.errorString());
    QTextStream in(&file);
    ui->textBrowser->setText(in.readAll());
    ui->Back->show();
}

void LyThuyet::on_Bai11_clicked()
{
    ui->textBrowser->show();
    QFile file("data\\p1\\b11.ltds");
    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"info",file.errorString());
    QTextStream in(&file);
    ui->textBrowser->setText(in.readAll());
    ui->Back->show();
}

void LyThuyet::on_Bai12_clicked()
{
    ui->textBrowser->show();
    QFile file("data\\p1\\b12.ltds");
    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"info",file.errorString());
    QTextStream in(&file);
    ui->textBrowser->setText(in.readAll());
    ui->Back->show();
}

void LyThuyet::on_Bai13_clicked()
{
    ui->textBrowser->show();
    QFile file("data\\p1\\b13.ltds");
    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"info",file.errorString());
    QTextStream in(&file);
    ui->textBrowser->setText(in.readAll());
    ui->Back->show();
}

void LyThuyet::on_Bai14_clicked()
{
    ui->textBrowser->show();
    QFile file("data\\p1\\b14.ltds");
    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"info",file.errorString());
    QTextStream in(&file);
    ui->textBrowser->setText(in.readAll());
    ui->Back->show();
}

void LyThuyet::on_Back_2_clicked()
{

}
