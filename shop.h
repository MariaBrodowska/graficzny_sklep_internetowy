
#ifndef SHOP_H
#define SHOP_H

#include <QMainWindow>



QT_BEGIN_NAMESPACE
namespace Ui { class shop; }
QT_END_NAMESPACE

class shop : public QMainWindow

{
    Q_OBJECT

public:
    shop(QWidget *parent = nullptr);
    ~shop();

private:
    Ui::shop *ui;
};

#endif // SHOP_H
