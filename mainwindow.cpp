#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

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
  std::string text = "Пожалуйста выберите все компоненты";
  if (ui->olives_group->checkedId() != -1 && ui->pepperoni_group->checkedId() != -1 &&
      ui->double_cheese_group->checkedId() != -1 && ui->pineapples_group->checkedId() != -1)
  {
    PizzaBuilder pizza_builder;

    if (ui->thin->isChecked())
    {
      pizza_builder.setDough(Pizza_Characteristics::Dough::THIN);
    }
    else
    {
      pizza_builder.setDough(Pizza_Characteristics::Dough::TRADITIONAL);
    }

    if (ui->pepperoni->isChecked())
    {
      pizza_builder.setType(Pizza_Characteristics::Type::PEPPERONI);
    }
    else if (ui->margaret->isChecked())
    {
      pizza_builder.setType(Pizza_Characteristics::Type::MARGARET);
    }
    else if (ui->four_cheeses->isChecked())
    {
      pizza_builder.setType(Pizza_Characteristics::Type::FOUR_CHEESES);
    }
    else
    {
      pizza_builder.setType(Pizza_Characteristics::Type::MARINE);
    }

    if (ui->olives_no->isChecked())
    {
      pizza_builder.setOlives(Pizza_Characteristics::Bool::NO);
    }
    else
    {
      pizza_builder.setOlives(Pizza_Characteristics::Bool::YES);
    }

    if (ui->pepperoni_no->isChecked())
    {
      pizza_builder.setPepperoni(Pizza_Characteristics::Bool::NO);
    }
    else
    {
      pizza_builder.setPepperoni(Pizza_Characteristics::Bool::YES);
    }

    if (ui->double_no->isChecked())
    {
      pizza_builder.setDoubleCheese(Pizza_Characteristics::Bool::NO);
    }
    else
    {
      pizza_builder.setDoubleCheese(Pizza_Characteristics::Bool::YES);
    }

    if (ui->pineapples_no->isChecked())
    {
      pizza_builder.setPineapples(Pizza_Characteristics::Bool::NO);
    }
    else
    {
      pizza_builder.setPineapples(Pizza_Characteristics::Bool::YES);
    }

    Pizza pizza = pizza_builder.build();
    text = pizza.to_string();
  }
  ui->textEdit->setText(QString::fromStdString(text));
}
