#include "baitap.h"
#include "ui_baitap.h"
#include <QDesktopServices>
#include <QUrl>
BaiTap::BaiTap(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BaiTap)
{
    ui->setupUi(this);



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

BaiTap::~BaiTap()
{
    delete ui;
}

void BaiTap::on_COBAN_clicked()
{
    btcoban = new BTCoBan(this);
    btcoban->show();
}

void BaiTap::on_NANGCAO_clicked()
{
    btnangcao=new BTNangCao(this);
    btnangcao->show();
}

void BaiTap::on_pushButton_clicked()
{
    QString link="http://hatepascalifyoucan.blogspot.com/";
    QDesktopServices::openUrl(QUrl(link));

}
