#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "seconddialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonAdd_clicked()
{
    QString txtA = ui->ledtA->text();
    QString txtB = ui->ledtB->text();
    double numA = txtA.toDouble();
    double numB = txtB.toDouble();
    double numRes = numA + numB;
    ui->lblResult->setText(QString::number(numRes));
}

void MainWindow::on_btnOpen3_clicked()
{
//    hide();
    dialog3 = new dlg3(this);
    dialog3->show();
}

void MainWindow::on_btnOpen2_clicked()
{
    SecondDialog secDlg;
    secDlg.setModal(true);
    secDlg.exec();
}
