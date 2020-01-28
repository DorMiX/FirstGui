#ifndef DLG3_H
#define DLG3_H

#include <QDialog>

namespace Ui {
class dlg3;
}

class dlg3 : public QDialog
{
    Q_OBJECT

public:
    explicit dlg3(QWidget *parent = nullptr);
    ~dlg3();

private:
    Ui::dlg3 *ui;
};

#endif // DLG3_H
