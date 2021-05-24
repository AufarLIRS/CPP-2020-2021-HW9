#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include "pizza.h"

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
  ui->setupUi(this);

  ui->DoughButtonGroup->setId(ui->ThinDough_radioButton, 0);
  ui->DoughButtonGroup->setId(ui->TraditionalDough_radioButton, 1);

  ui->PizzaButtonGroup->setId(ui->Pepperoni_radioButton, 0);
  ui->PizzaButtonGroup->setId(ui->Margarita_radioButton, 1);
  ui->PizzaButtonGroup->setId(ui->FourOfCheese_radioButton, 2);
  ui->PizzaButtonGroup->setId(ui->Sea_radioButton, 3);

  ui->OlivesButtonGroup->setId(ui->Yes_Olives_radioButton, 0);
  ui->OlivesButtonGroup->setId(ui->No_Olives_radioButton, 1);

  ui->PepperoniButtonGroup->setId(ui->Yes_Pepperoni_radioButton, 0);
  ui->PepperoniButtonGroup->setId(ui->No_Pepperoni_radioButton, 1);

  ui->CheeseButtonGroup->setId(ui->Yes_DoubleCheese_radioButton, 0);
  ui->CheeseButtonGroup->setId(ui->No_DoubleCheese_radioButton, 1);

  ui->PineapplesButtonGroup->setId(ui->Yes_Pineapple_radioButton, 0);
  ui->PineapplesButtonGroup->setId(ui->No_Pineapple_radioButton, 1);
}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::on_PizzaPushButton_clicked()
{
  ui->textEdit->clear();

  auto builder = Pizza::Builder();
  builder.SetPineapples(Pineapples(ui->PineapplesButtonGroup->checkedId()));
  builder.SetOlives(Olives(ui->OlivesButtonGroup->checkedId()));
  builder.SetTypeOfDough(TypeOfDough(ui->DoughButtonGroup->checkedId()));
  builder.SetTypeOfPizza(TypeOfPizza(ui->PizzaButtonGroup->checkedId()));
  builder.SetPepperoni(Pepperoni(ui->PepperoniButtonGroup->checkedId()));
  builder.SetDoubleCheese(DoubleCheese(ui->CheeseButtonGroup->checkedId()));

  auto pizza = builder.build();
  ui->textEdit->setText(pizza.GetResult());
}
