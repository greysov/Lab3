#include "mainwindow.h"
#include <QApplication>
#include <fstream>
#include "treeclass.h"
#include "depositchild.h"

int main(int argc, char *argv[])
{

  QApplication a(argc, argv);
  MainWindow *w = new MainWindow;
  w->setWindowTitle("Deposite Manager");
  w->show();

  return a.exec();
}
