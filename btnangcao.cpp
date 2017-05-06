#include "btnangcao.h"
#include "ui_btnangcao.h"
#include <QPixmap>
#include <QTextStream>
#include <QFile>
#include <QMessageBox>
#include <QDesktopServices>
#include <QUrl>

BTNangCao::BTNangCao(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BTNangCao)
{
    ui->setupUi(this);
    ui->back->setHidden(true);
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

BTNangCao::~BTNangCao()
{
    delete ui;
}

void BTNangCao::on_b1_clicked()
{
    ui->textBrowser->show();
         QFile file("data\\p2\\nc\\b1.ltds");
         if(!file.open(QIODevice::ReadOnly))
             QMessageBox::information(0,"info",file.errorString());
         QTextStream in(&file);
         ui->textBrowser->setText(in.readAll());
         ui->back->show();
}

void BTNangCao::on_b10_clicked()
{
    ui->textBrowser->show();
         QFile file("data\\p2\\nc\\b10.ltds");
         if(!file.open(QIODevice::ReadOnly))
             QMessageBox::information(0,"info",file.errorString());
         QTextStream in(&file);
         ui->textBrowser->setText(in.readAll());
         ui->back->show();
}

void BTNangCao::on_b11_clicked()
{
    ui->textBrowser->show();
         QFile file("data\\p2\\nc\\b11.ltds");
         if(!file.open(QIODevice::ReadOnly))
             QMessageBox::information(0,"info",file.errorString());
         QTextStream in(&file);
         ui->textBrowser->setText(in.readAll());
         ui->back->show();
}

void BTNangCao::on_b2_clicked()
{
    ui->textBrowser->show();
         QFile file("data\\p2\\nc\\b2.ltds");
         if(!file.open(QIODevice::ReadOnly))
             QMessageBox::information(0,"info",file.errorString());
         QTextStream in(&file);
         ui->textBrowser->setText(in.readAll());
         ui->back->show();
}

void BTNangCao::on_b3_clicked()
{
    ui->textBrowser->show();
         QFile file("data\\p2\\nc\\b3.ltds");
         if(!file.open(QIODevice::ReadOnly))
             QMessageBox::information(0,"info",file.errorString());
         QTextStream in(&file);
         ui->textBrowser->setText(in.readAll());
         ui->back->show();
}

void BTNangCao::on_b4_clicked()
{
    ui->textBrowser->show();
         QFile file("data\\p2\\nc\\b4.ltds");
         if(!file.open(QIODevice::ReadOnly))
             QMessageBox::information(0,"info",file.errorString());
         QTextStream in(&file);
         ui->textBrowser->setText(in.readAll());
         ui->back->show();
}

void BTNangCao::on_b5_clicked()
{
    ui->textBrowser->show();
         QFile file("data\\p2\\nc\\b5.ltds");
         if(!file.open(QIODevice::ReadOnly))
             QMessageBox::information(0,"info",file.errorString());
         QTextStream in(&file);
         ui->textBrowser->setText(in.readAll());
         ui->back->show();
}

void BTNangCao::on_b6_clicked()
{
    ui->textBrowser->show();
         QFile file("data\\p2\\nc\\b6.ltds");
         if(!file.open(QIODevice::ReadOnly))
             QMessageBox::information(0,"info",file.errorString());
         QTextStream in(&file);
         ui->textBrowser->setText(in.readAll());
         ui->back->show();
}

void BTNangCao::on_b7_clicked()
{
    ui->textBrowser->show();
         QFile file("data\\p2\\nc\\b7.ltds");
         if(!file.open(QIODevice::ReadOnly))
             QMessageBox::information(0,"info",file.errorString());
         QTextStream in(&file);
         ui->textBrowser->setText(in.readAll());
         ui->back->show();
}

void BTNangCao::on_b8_clicked()
{
    ui->textBrowser->show();
         QFile file("data\\p2\\nc\\b8.ltds");
         if(!file.open(QIODevice::ReadOnly))
             QMessageBox::information(0,"info",file.errorString());
         QTextStream in(&file);
         ui->textBrowser->setText(in.readAll());
         ui->back->show();
}

void BTNangCao::on_b9_clicked()
{
    ui->textBrowser->show();
         QFile file("data\\p2\\nc\\b9.ltds");
         if(!file.open(QIODevice::ReadOnly))
             QMessageBox::information(0,"info",file.errorString());
         QTextStream in(&file);
         ui->textBrowser->setText(in.readAll());
         ui->back->show();
}

void BTNangCao::on_back_clicked()
{
    ui->back->setHidden(true);
    ui->textBrowser->setHidden(true);
}

void BTNangCao::on_nc_link_clicked()
{
    QString link="https://hatepascalifyoucan.blogspot.com/search/label/pascal-nang-cao";
    QDesktopServices::openUrl(QUrl(link));
}
