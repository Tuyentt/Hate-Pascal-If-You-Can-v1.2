#include "btcoban.h"
#include "ui_btcoban.h"
#include <QTextStream>
#include <QFile>
#include <QMessageBox>
BTCoBan::BTCoBan(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BTCoBan)
{
    ui->setupUi(this);
    ui->Back->setHidden(true);
    ui->textBrowser->setHidden(true);
    // Set Background
      QPixmap bkgnd("data\\background_p2.png");
       bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
       QPalette palette;
       palette.setBrush(QPalette::Background, bkgnd);
       this->setPalette(palette);
       //Set Title
     this->setWindowTitle("Phần 2: Bài Tập");
       //Disabled Resize
     setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);
}

BTCoBan::~BTCoBan()
{
    delete ui;
}

void BTCoBan::on_B1_clicked()
{
    ui->textBrowser->show();
         QFile file("data\\p2\\cb\\b1.ltds");
         if(!file.open(QIODevice::ReadOnly))
             QMessageBox::information(0,"info",file.errorString());
         QTextStream in(&file);
         ui->textBrowser->setText(in.readAll());
         ui->Back->show();
}

void BTCoBan::on_B2_clicked()
{
    ui->textBrowser->show();
         QFile file("data\\p2\\cb\\b2.ltds");
         if(!file.open(QIODevice::ReadOnly))
             QMessageBox::information(0,"info",file.errorString());
         QTextStream in(&file);
         ui->textBrowser->setText(in.readAll());
         ui->Back->show();
}

void BTCoBan::on_B3_clicked()
{
    ui->textBrowser->show();
         QFile file("data\\p2\\cb\\b3.ltds");
         if(!file.open(QIODevice::ReadOnly))
             QMessageBox::information(0,"info",file.errorString());
         QTextStream in(&file);
         ui->textBrowser->setText(in.readAll());
         ui->Back->show();
}

void BTCoBan::on_B4_clicked()
{
    ui->textBrowser->show();
         QFile file("data\\p2\\cb\\b4.ltds");
         if(!file.open(QIODevice::ReadOnly))
             QMessageBox::information(0,"info",file.errorString());
         QTextStream in(&file);
         ui->textBrowser->setText(in.readAll());
         ui->Back->show();
}

void BTCoBan::on_B5_clicked()
{
    ui->textBrowser->show();
         QFile file("data\\p2\\cb\\b5.ltds");
         if(!file.open(QIODevice::ReadOnly))
             QMessageBox::information(0,"info",file.errorString());
         QTextStream in(&file);
         ui->textBrowser->setText(in.readAll());
         ui->Back->show();
}

void BTCoBan::on_B6_clicked()
{
    ui->textBrowser->show();
         QFile file("data\\p2\\cb\\b6.ltds");
         if(!file.open(QIODevice::ReadOnly))
             QMessageBox::information(0,"info",file.errorString());
         QTextStream in(&file);
         ui->textBrowser->setText(in.readAll());
         ui->Back->show();
}

void BTCoBan::on_B7_clicked()
{
    ui->textBrowser->show();
         QFile file("data\\p2\\cb\\b7.ltds");
         if(!file.open(QIODevice::ReadOnly))
             QMessageBox::information(0,"info",file.errorString());
         QTextStream in(&file);
         ui->textBrowser->setText(in.readAll());
         ui->Back->show();
}

void BTCoBan::on_B8_clicked()
{
    ui->textBrowser->show();
         QFile file("data\\p2\\cb\\b8.ltds");
         if(!file.open(QIODevice::ReadOnly))
             QMessageBox::information(0,"info",file.errorString());
         QTextStream in(&file);
         ui->textBrowser->setText(in.readAll());
         ui->Back->show();
}

void BTCoBan::on_B9_clicked()
{
    ui->textBrowser->show();
         QFile file("data\\p2\\cb\\b9.ltds");
         if(!file.open(QIODevice::ReadOnly))
             QMessageBox::information(0,"info",file.errorString());
         QTextStream in(&file);
         ui->textBrowser->setText(in.readAll());
         ui->Back->show();
}

void BTCoBan::on_B10_clicked()
{
    ui->textBrowser->show();
         QFile file("data\\p2\\cb\\b10.ltds");
         if(!file.open(QIODevice::ReadOnly))
             QMessageBox::information(0,"info",file.errorString());
         QTextStream in(&file);
         ui->textBrowser->setText(in.readAll());
         ui->Back->show();
}

void BTCoBan::on_B11_clicked()
{
    ui->textBrowser->show();
         QFile file("data\\p2\\cb\\b11.ltds");
         if(!file.open(QIODevice::ReadOnly))
             QMessageBox::information(0,"info",file.errorString());
         QTextStream in(&file);
         ui->textBrowser->setText(in.readAll());
         ui->Back->show();
}

void BTCoBan::on_B12_clicked()
{
    ui->textBrowser->show();
         QFile file("data\\p2\\cb\\b12.ltds");
         if(!file.open(QIODevice::ReadOnly))
             QMessageBox::information(0,"info",file.errorString());
         QTextStream in(&file);
         ui->textBrowser->setText(in.readAll());
         ui->Back->show();
}

void BTCoBan::on_B13_clicked()
{
    ui->textBrowser->show();
         QFile file("data\\p2\\cb\\b13.ltds");
         if(!file.open(QIODevice::ReadOnly))
             QMessageBox::information(0,"info",file.errorString());
         QTextStream in(&file);
         ui->textBrowser->setText(in.readAll());
         ui->Back->show();
}

void BTCoBan::on_B14_clicked()
{
    ui->textBrowser->show();
         QFile file("data\\p2\\cb\\b14.ltds");
         if(!file.open(QIODevice::ReadOnly))
             QMessageBox::information(0,"info",file.errorString());
         QTextStream in(&file);
         ui->textBrowser->setText(in.readAll());
         ui->Back->show();
}

void BTCoBan::on_Back_clicked()
{
    ui->textBrowser->setHidden(true);
    ui->Back->setHidden(true);
}
