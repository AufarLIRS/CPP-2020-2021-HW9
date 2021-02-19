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
  Thin,
  Tradition
};

enum TypeOfPizza
{
  Pepperoni_pizza,
  Margarita,
  FourCheese,
  Sea
};

enum Olives
{
  Yes_olives,
  No_olives
};

enum Pepperoni
{
  Yes_pepperoni,
  No_pepperoni
};

enum DoubleCheese
{
  Yes_doubleCheese,
  No_doubleCheese
};

enum Ananases
{
  Yes_ananases,
  No_ananases
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
