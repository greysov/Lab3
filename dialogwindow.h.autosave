#ifndef DIALOGWINDOW_H
#define DIALOGWINDOW_H

#include <QDialog>
#include <depositclass.h>
#include "mainwindow.h"
#pragma once

namespace Ui {
  class DialogWindow;
}

class DialogWindow : public QDialog
{
  Q_OBJECT

private slots:

  void on_TypeComboBox_highlighted(const QString &arg1);
  void on_NameLine_editingFinished();
  void on_DepthLine_editingFinished();
  void on_RateSpinBox_editingFinished();
  void on_DayDateTimeEdit_editingFinished();
  void on_PeriodSpinBox_editingFinished();
  void on_AddButton_clicked();
  void on_bankEdit_editingFinished();
  void on_cityEdit_editingFinished();


public:
  explicit DialogWindow(QWidget *parent = 0);
  ~DialogWindow();
  MainWindow *main_w;

private:
  Ui::DialogWindow *ui;

};

#endif // DIALOGWINDOW_H
