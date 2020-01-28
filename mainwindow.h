#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dlg3.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButtonAdd_clicked();

   void on_btnOpen3_clicked();

    void on_btnOpen2_clicked();

private:
    Ui::MainWindow *ui;
    dlg3 *dialog3;
};

#endif // MAINWINDOW_H
