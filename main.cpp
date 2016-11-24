#include "mainwindow.h"
#include <QApplication>
#include <fstream>

int main(int argc, char *argv[])
{
//  std::clog << "kok";
//  std::cerr << "err";
//  std::cout << "err2";
//  ofstream ofile;
//  ofile.open("/Users/alinacodzy/Documents/5OOP_C++/gui1/Table2/DATA1.txt", ios_base::out);
//  ofile<<1;
//  return 0;


  QApplication a(argc, argv);
  MainWindow *w = new MainWindow;
  w->setWindowTitle("Deposite Manager");
  w->show();

  return a.exec();
}
