#include <QApplication>
#include <../src/mainwindow.h>

int main(int argc, char *argv[])
{
    // There is precisely one QApplication object, no matter whether
    // the application has 0, 1, 2 or more windows at any given time.
    // It must be created before any other objects.
    QApplication a(argc, argv);
    // Initialize and show the main window
    MainWindow w;
    w.show();
    // Enter the main event loop and wait until exit() is called
    return a.exec();
}
