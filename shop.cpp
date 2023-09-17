
#include "shop.h"
#include "klient.h"
#include "ui_shop.h"


shop::shop(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::shop)
{
    ui->setupUi(this);
    Klient k;
    k.odczytKlientow();

}

shop::~shop()
{
    delete ui;
}


