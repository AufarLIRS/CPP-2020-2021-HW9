#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QButtonGroup>

QT_BEGIN_NAMESPACE
namespace Ui
{
class MainWindow;
}

namespace PizzaEnumsBox
{
enum Dough
{
  thin_dough,
  tradition_dough
};

enum TypeOfPizza
{
  pepperoni_pizza,
  margarita_pizza,
  fourCheese_pizza,
  sea_pizza
};

enum Olives
{
  yes_olives,
  no_olives
};

enum Pepperoni
{
  yes_pepperoni,
  no_pepperoni
};

enum DoubleCheese
{
  yes_doubleCheese,
  no_doubleCheese
};

enum Ananases
{
  yes_ananases,
  no_ananases
};
}  // namespace PizzaEnumsBox

QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  MainWindow(QWidget* parent = nullptr);
  ~MainWindow();

private slots:
  void on_makePizzaButton_clicked();

private:
  Ui::MainWindow* ui;
  QButtonGroup dough_radio_btn_group;
  QButtonGroup pizza_type_radio_btn_group;
  QButtonGroup olives_radio_btn_group;
  QButtonGroup pepperoni_radio_btn_group;
  QButtonGroup double_cheese_radio_btn_group;
  QButtonGroup ananases_radio_btn_group;
};
#endif  // MAINWINDOW_H
