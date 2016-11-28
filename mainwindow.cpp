#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialogwindow.h"

#include <QHBoxLayout>
#include <QTableWidget>
#include <QDialog>

#include <QStandardItem>
#include <QStandardItemModel>


MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);

  QHBoxLayout *layout = new QHBoxLayout;

  layout->addWidget(ui->tableWidget);

  this->setFixedHeight(450);
  this->setFixedWidth(855);  //655

  ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
  //ui->tableWidget->setSelectionBehavior(QAbstractItemView::SingleSelection);
  ui->tableWidget->setFixedHeight(430);
  ui->tableWidget->setFixedWidth(828);

  ui->tableWidget->setColumnCount(8);
  ui->tableWidget->setRowCount(0);
  ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);


}


MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::on_AddButton_clicked()
{
  DialogWindow *dwin = new DialogWindow;
  dwin->main_w = this;
  dwin->exec();
  delete dwin;
}



void MainWindow::fillTheRow(DepositChild& B)
{
  //static int i_row = 0;
  const int i_row = ui->tableWidget->rowCount();
  ui->tableWidget->setRowCount(i_row + 1);

  QString b = B.get_bank().c_str();
  QString c = B.get_city().c_str();
  QString n = B.get_name().c_str();
  QString d = QString::number(B.get_dep());
  QString r = QString::number(B.get_rate());
  QString din = B.get_date().c_str();
  QString p = B.get_period().c_str();
  QString t = B.get_type().c_str();


  QTableWidgetItem *item_b = new QTableWidgetItem(b);
  ui->tableWidget->setItem(i_row, 0, item_b);

  QTableWidgetItem *item_c = new QTableWidgetItem(c);
  ui->tableWidget->setItem(i_row, 1, item_c);

  QTableWidgetItem *item_n = new QTableWidgetItem(n);
  ui->tableWidget->setItem(i_row, 2, item_n);

  QTableWidgetItem *item_d = new QTableWidgetItem(d);
  ui->tableWidget->setItem(i_row, 3, item_d);

  QTableWidgetItem *item_r = new QTableWidgetItem(r);
  ui->tableWidget->setItem(i_row, 4, item_r);

  QTableWidgetItem *item_din = new QTableWidgetItem(din);
  ui->tableWidget->setItem(i_row, 5, item_din);

  QTableWidgetItem *item_p = new QTableWidgetItem(p);
  ui->tableWidget->setItem(i_row, 6, item_p);

  QTableWidgetItem *item_t = new QTableWidgetItem(t);
  ui->tableWidget->setItem(i_row, 7, item_t);

}

void MainWindow::on_deleteButton_clicked()
{
 // QTableWidget::removeRow(ui->tableWidget->currentRow());
  int x = ui->tableWidget->currentRow();
  clog<<"SELECTED ROW "<<x;
  ui->tableWidget->removeRow(x);
}
















