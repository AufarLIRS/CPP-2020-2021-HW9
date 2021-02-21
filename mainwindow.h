#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QButtonGroup>

QT_BEGIN_NAMESPACE
namespace Ui
{
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  MainWindow(QWidget* parent = nullptr);
  ~MainWindow();

private slots:

  void on_pushButton_clicked();

private:
  Ui::MainWindow* ui;
  QButtonGroup dough_btn_group;
  QButtonGroup type_btn_group;
  QButtonGroup oliv_btn_group;
  QButtonGroup pepe_btn_group;
  QButtonGroup dbche_btn_group;
  QButtonGroup pine_btn_group;
};
#endif  // MAINWINDOW_H
