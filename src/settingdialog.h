/* -*- Mode:C++; c-file-style:"gnu"; indent-tabs-mode:nil -*- */
/*
 * Copyright (c) 2013, Regents of the University of California
 *                     Yingdi Yu
 *
 * BSD license, See the LICENSE file for more information
 *
 * Author: Yingdi Yu <yingdi@cs.ucla.edu>
 */

#ifndef SETTINGDIALOG_H
#define SETTINGDIALOG_H

#include <QDialog>

namespace Ui {
class SettingDialog;
}

class SettingDialog : public QDialog
{
  Q_OBJECT

public:
  explicit SettingDialog(QWidget *parent = 0);
  ~SettingDialog();

  void
  setIdentity(const std::string& identity);

signals:
  void
  identitySet(const QString& identity);

private slots:
  void
  onOkClicked();

private:
  Ui::SettingDialog *ui;
  std::string m_identity;
};

#endif // SETTINGDIALOG_H
