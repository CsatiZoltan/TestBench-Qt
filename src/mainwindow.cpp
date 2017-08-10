#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QCloseEvent>


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


void MainWindow::on_pushModal_clicked()
{
    ModalWindow* mw = new ModalWindow(this);
    mw->setModal(true);
    mw->show();
}


void MainWindow::on_pushModeless_clicked()
{
    ModelessWindow* mlw = new ModelessWindow(this);
    mlw->setModal(false); // anyway, modeless is by default
    mlw->show();
}


void MainWindow::on_actionExit_triggered()
{
    // No need to connect a signal to a slot thanks to the automatic connections:
    // http://doc.qt.io/qt-5/designer-using-a-ui-file.html#automatic-connections
    this->close();
}


// Emitted when the "close" method of QMainWindow (and therefore QWindget) is called or
// when the close (X) button of the window is clicked on
void MainWindow::closeEvent(QCloseEvent *event)
{
    QMessageBox closeDialog;
    closeDialog.setIcon(QMessageBox::Warning);
    closeDialog.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    closeDialog.setDefaultButton(QMessageBox::Yes);
    closeDialog.setEscapeButton(QMessageBox::No);
    closeDialog.setText("<b>Main text</b>");
    closeDialog.setInformativeText("Informative text");
    closeDialog.setDetailedText("Some details...");
    int answer = closeDialog.exec();
    if (answer == QMessageBox::Yes)
        event->accept();
    else
        event->ignore();
}
