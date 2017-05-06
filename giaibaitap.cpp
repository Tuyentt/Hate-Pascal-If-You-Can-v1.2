#include "giaibaitap.h"
#include "ui_giaibaitap.h"
#include <Qfile>
#include <QTextStream>
#include <QMessageBox>

GiaiBaiTap::GiaiBaiTap(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GiaiBaiTap)
{

    ui->setupUi(this);
    ui->textBrowser->setHidden(true);
    ui->Back->setHidden(true);
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

GiaiBaiTap::~GiaiBaiTap()
{
    delete ui;
}


void GiaiBaiTap::on_pushButton_clicked()
{
  ui->Back->show();
  ui->textBrowser->show();
  QFile file("data\\p3\\gbt\\b1.ltds");
  if(!file.open(QIODevice::ReadOnly))
      QMessageBox::information(0,"info",file.errorString());
  QTextStream in(&file);
  ui->textBrowser->setText(in.readAll());
}

void GiaiBaiTap::on_Back_clicked()
{
 ui->textBrowser->setHidden(true);
 ui->Back->setHidden(true);
}

void GiaiBaiTap::on_pushButton_2_clicked()
{
    ui->Back->show();
    ui->textBrowser->show();
    QFile file("data\\p3\\gbt\\b2.ltds");
    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"info",file.errorString());
    QTextStream in(&file);
    ui->textBrowser->setText(in.readAll());
}

void GiaiBaiTap::on_pushButton_3_clicked()
{
    ui->Back->show();
    ui->textBrowser->show();
    QFile file("data\\p3\\gbt\\b3.ltds");
    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"info",file.errorString());
    QTextStream in(&file);
    ui->textBrowser->setText(in.readAll());
}

void GiaiBaiTap::on_pushButton_4_clicked()
{
    ui->Back->show();
    ui->textBrowser->show();
    QFile file("data\\p3\\gbt\\b4.ltds");
    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"info",file.errorString());
    QTextStream in(&file);
    ui->textBrowser->setText(in.readAll());
}

void GiaiBaiTap::on_pushButton_5_clicked()
{
    ui->Back->show();
    ui->textBrowser->show();
    QFile file("data\\p3\\gbt\\b5.ltds");
    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"info",file.errorString());
    QTextStream in(&file);
    ui->textBrowser->setText(in.readAll());
}

void GiaiBaiTap::on_pushButton_6_clicked()
{
    ui->Back->show();
    ui->textBrowser->show();
    QFile file("data\\p3\\gbt\\b6.ltds");
    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"info",file.errorString());
    QTextStream in(&file);
    ui->textBrowser->setText(in.readAll());
}

void GiaiBaiTap::on_pushButton_7_clicked()
{
    ui->Back->show();
    ui->textBrowser->show();
    QFile file("data\\p3\\gbt\\b7.ltds");
    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"info",file.errorString());
    QTextStream in(&file);
    ui->textBrowser->setText(in.readAll());
}

void GiaiBaiTap::on_pushButton_8_clicked()
{
    ui->Back->show();
    ui->textBrowser->show();
    QFile file("data\\p3\\gbt\\b8.ltds");
    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"info",file.errorString());
    QTextStream in(&file);
    ui->textBrowser->setText(in.readAll());
}
