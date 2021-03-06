#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "modalwindow.h"
#include "modelesswindow.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT // to use the signal-slot mechanism

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_pushModal_clicked();
    void on_pushModeless_clicked();
    void on_actionExit_triggered();

private:
    Ui::MainWindow *ui;
    virtual void closeEvent(QCloseEvent *event);
};

#endif // MAINWINDOW_H
