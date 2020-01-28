#include "dlg3.h"
#include "ui_dlg3.h"

dlg3::dlg3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dlg3)
{
    ui->setupUi(this);
}

dlg3::~dlg3()
{
    delete ui;
}
