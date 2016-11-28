#include "mainwindow.h"
#include <QApplication>
#include <fstream>

int main(int argc, char *argv[])
{

  QApplication a(argc, argv);
  MainWindow *w = new MainWindow;
  w->setWindowTitle("Deposite Manager");
  w->show();

  return a.exec();
}
