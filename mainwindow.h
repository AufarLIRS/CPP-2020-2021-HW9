#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
  void on_thin_dough_clicked();

  void on_tradition_dough_clicked();

  void on_pepperoni_pizza_clicked();

  void on_margarita_pizza_clicked();

  void on_fourCheese_pizza_clicked();

  void on_sea_pizza_clicked();

  void on_yes_olives_clicked();

  void on_no_olives_clicked();

  void on_yes_pepperoni_clicked();

  void on_no_pepperoni_clicked();

  void on_yes_ananases_clicked();

  void on_no_ananases_clicked();

  void on_makePizzaButton_clicked();

  void on_yes_doubleCheese_clicked();

  void on_no_doubleCheese_clicked();

private:
  Ui::MainWindow* ui;
};
#endif  // MAINWINDOW_H
