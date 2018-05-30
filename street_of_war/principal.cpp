#include "principal.h"
#include "ui_principal.h"

principal::principal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::principal)
{
    ui->setupUi(this);
    N = new ventana1();
}

principal::~principal()
{
    delete ui;
}

/*void principal::on_ind_clicked()
{
    N->show();
    close();
}*/

void principal::on_mult_clicked()
{
    N->show();

    close();
}

void principal::on_ind_clicked()
{

}
