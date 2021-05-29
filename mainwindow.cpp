#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QString>
#include "pizza.h"

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
  ui->setupUi(this);
}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::on_make_pizza_clicked()
{
  Pizza::PizzaBuilder pizzaBuilder;

  // selection dough
  if (ui->dough_group->checkedButton() == ui->traditional) {
    pizzaBuilder.setDough(Dough::TRADITIONAL);
  }
  // selection pizzas' type
  if (ui->type_group->checkedButton() == ui->four_cheeses) {
    pizzaBuilder.setPizzaType(TypeOfPizza::FOUR_CHEESES);
  } else if (ui->type_group->checkedButton() == ui->margaret) {
    pizzaBuilder.setPizzaType(TypeOfPizza::MORGARET);
  } else if (ui->type_group->checkedButton() == ui->marine) {
    pizzaBuilder.setPizzaType(TypeOfPizza::MARINE);
  }
  // selection additional ingredients
  if (ui->pepperoni_group->checkedButton() == ui->pepperoni_yes) {
    pizzaBuilder.setPepperoni(HasPepperoni::YES);
  }
  if (ui->double_cheese_group->checkedButton() == ui->double_yes) {
    pizzaBuilder.setDoubleCheese(HasDoubleCheese::YES);
  }
  if (ui->olives_group->checkedButton() == ui->olives_yes) {
    pizzaBuilder.setOlives(HasOlives::YES);
  }
  if (ui->pineapples_group->checkedButton() == ui->pineapples_yes) {
    pizzaBuilder.setPineAppeles(HasPineApples::YES);
  }

  // build pizza
  Pizza pizza = pizzaBuilder.build();
  ui->textEdit->setText(QString::fromUtf8(pizza.to_string().c_str()));
}

