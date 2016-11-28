#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "treeclass.h"
#include "depositchild.h"

#include <QTableWidget>
#include <QStandardItem>

#pragma once
namespace Ui {
  class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:

 //static BST<DepositClass> bst;
 //существовует только одна копия этого члена,
 //сколько бы объектов этого класса ни создавалось.
 //Статический член используется совместно
 //все­ми объектами данного класса. Все статические данные
 //инициализируются нулями при создании первого объекта,
 //и другая инициализация не предусмотрена.
void fillTheRow(DepositChild &bst);


  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();


public slots:
  void on_AddButton_clicked();


public:
  Ui::MainWindow *ui;

private slots:
  void on_deleteButton_clicked();
};
#endif //MAINWINDOW_H
