#ifndef MODELESSWINDOW_H
#define MODELESSWINDOW_H

#include <QDialog>

namespace Ui {
class ModelessWindow;
}

class ModelessWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ModelessWindow(QWidget *parent = 0);
    ~ModelessWindow();

private:
    Ui::ModelessWindow *ui;
};

#endif // MODELESSWINDOW_H
