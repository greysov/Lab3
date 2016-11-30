#include "dialogwindow.h"
#include "ui_dialogwindow.h"
#include "treeclass.h"
#include "depositclass.h"
#include <QMessageBox>
#include "mainwindow.h"
#include "depositchild.h"
#include <QFile>

DepositChild *newObj;

DialogWindow::DialogWindow(QWidget *parent): QDialog(parent), ui(new Ui::DialogWindow)
{
  ui->setupUi(this);
  newObj = new DepositChild;

  connect(ui->bankEdit, SIGNAL(textChanged(QString)), this, SLOT(on_bankEdit_editingFinished()));
  connect(ui->cityEdit, SIGNAL(textChanged(QString)), this, SLOT(on_cityEdit_editingFinished()));
  connect(ui->NameLine, SIGNAL(textChanged(QString)), this, SLOT(on_NameLine_editingFinished()));
  connect(ui->DepthLine, SIGNAL(textChanged(QString)), this, SLOT(on_DepthLine_editingFinished()));
  connect(ui->RateSpinBox, SIGNAL(valueChanged(double)), this, SLOT(on_NameLine_editingFinished()));
  connect(ui->DayDateTimeEdit, SIGNAL(dateChanged(QDate)), this, SLOT(on_DayDateTimeEdit_editingFinished()));
  connect(ui->PeriodSpinBox, SIGNAL(valueChanged(QString)), this, SLOT(on_PeriodSpinBox_editingFinished()));
  connect(ui->TypeComboBox, SIGNAL(highlighted(QString)), this, SLOT(on_TypeComboBox_highlighted(QString)));

}

void DialogWindow::on_AddButton_clicked()
{
  static BST<DepositChild> bst;
  bst.add(*newObj); // работает
  clog<<newObj->get_bank()<<"  "<<newObj->get_city();
 // QMessageBox::information(this, "Nodes", QString::number(bst.nodesCount()));

  string S = newObj->get_bank()+","
           + newObj->get_city()+","
           + newObj->get_name()+","
           + (QString::number(newObj->get_dep())).toStdString()+","
           + (QString::number(newObj->get_rate())).toStdString()+","
           + newObj->get_date()+","
           + newObj->get_period()+","
           + newObj->get_type()+'\n';


  QFile file("C:\\data.txt");     //спросить что происходит почему файл не создается без полного пути
  file.write(S.c_str());

  main_w->fillTheRow(*newObj);
  newObj->cleanObj();

  this->close();

}

DialogWindow::~DialogWindow()
{
  delete ui;
}

void DialogWindow::on_NameLine_editingFinished()
{
   QString str = ui->NameLine->text();
   newObj->set_name(str.toStdString());
}

void DialogWindow::on_DepthLine_editingFinished()
{
    QString str = ui->DepthLine->text();
    newObj->set_dep(str.toInt());
}

void DialogWindow::on_RateSpinBox_editingFinished()
{
    double r = ui->RateSpinBox->value();
    newObj->set_rate(r);
}

void DialogWindow::on_DayDateTimeEdit_editingFinished()
{
  newObj->set_date(ui->DayDateTimeEdit->text().toStdString());
}

void DialogWindow::on_PeriodSpinBox_editingFinished()
{
    newObj->set_period(ui->PeriodSpinBox->text().toStdString());
}

void DialogWindow::on_TypeComboBox_highlighted(const QString &arg1)
{
  newObj->set_type(arg1.toStdString());
}
void DialogWindow::on_bankEdit_editingFinished()
{
    newObj->set_bank(ui->bankEdit->text().toStdString());
}

void DialogWindow::on_cityEdit_editingFinished()
{
    newObj->set_city(ui->cityEdit->text().toStdString());
}
