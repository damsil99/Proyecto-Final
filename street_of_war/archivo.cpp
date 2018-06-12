#include "archivo.h"
#include "ui_archivo.h"

archivo::archivo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::archivo)
{
    ui->setupUi(this);
}

archivo::~archivo()
{
    delete ui;
}
