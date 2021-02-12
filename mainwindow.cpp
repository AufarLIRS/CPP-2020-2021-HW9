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
  if ((ui->olives_no->isChecked() || ui->olives_yes->isChecked()) &&
      (ui->pepperoni_no->isChecked() || ui->pepperoni_yes->isChecked()) &&
      (ui->double_no->isChecked() || ui->double_yes->isChecked()) &&
      (ui->pineapples_no->isChecked() || ui->pineapples_yes->isChecked()))
  {
    PizzaBuilder pizza_builder;

    if (ui->thin->isChecked())
    {
      pizza_builder.setDough(DOUGH_THIN);
    }
    else
    {
      pizza_builder.setDough(DOUGH_TRADITIONAL);
    }

    if (ui->pepperoni->isChecked())
    {
      pizza_builder.setType(TYPE_PEPPERONI);
    }
    else if (ui->margaret->isChecked())
    {
      pizza_builder.setType(TYPE_MARGARET);
    }
    else if (ui->four_cheeses->isChecked())
    {
      pizza_builder.setType(TYPE_FOUR_CHEESES);
    }
    else
    {
      pizza_builder.setType(TYPE_MARINE);
    }

    if (ui->olives_no->isChecked())
    {
      pizza_builder.setOlives(NO);
    }
    else
    {
      pizza_builder.setOlives(YES);
    }

    if (ui->pepperoni_no->isChecked())
    {
      pizza_builder.setPepperoni(NO);
    }
    else
    {
      pizza_builder.setPepperoni(YES);
    }

    if (ui->double_no->isChecked())
    {
      pizza_builder.setDoubleCheese(NO);
    }
    else
    {
      pizza_builder.setDoubleCheese(YES);
    }

    if (ui->pineapples_no->isChecked())
    {
      pizza_builder.setPineapples(NO);
    }
    else
    {
      pizza_builder.setPineapples(YES);
    }

    Pizza pizza = pizza_builder.build();
    text = pizza.to_string();
  }
  ui->textEdit->setText(QString::fromStdString(text));
}
