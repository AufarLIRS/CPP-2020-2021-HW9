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

void MainWindow::on_MakePizzaButton_clicked()
{
  Pizza::Pizza::MakePizza maker;
  if (ui->ThinCrustRadioButton->isChecked())
    maker.SetDoughType(DoughType(0));
  else if (ui->TraditionalCrustRadioButton->isChecked())
    maker.SetDoughType(DoughType(1));

  if (ui->PepperoniRadioButton->isChecked())
    maker.SetPizzaType(PizzaType(0));
  else if (ui->MargaritaRadioButton->isChecked())
    maker.SetPizzaType(PizzaType(1));
  else if (ui->FourCheeseRadioButton->isChecked())
    maker.SetPizzaType(PizzaType(2));
  else if (ui->SeaPizzaRadioButton->isChecked())
    maker.SetPizzaType(PizzaType(3));

  if (ui->OlivesYesRadioButton->isChecked())
    maker.SetOlives(Olives(0));
  else if (ui->OlivesNoRadioButton->isChecked())
    maker.SetOlives(Olives(1));
  else
    maker.SetOlives(Olives(1));

  if (ui->PepperoniYesRadioButton->isChecked())
    maker.SetPepperoni(Pepperoni(0));
  else if (ui->PepperoniNoRadioButton->isChecked())
    maker.SetPepperoni(Pepperoni(1));
  else
    maker.SetPepperoni(Pepperoni(1));

  if (ui->DoubleCheeseYesRadioButton->isChecked())
    maker.SetDoubleCheese(DoubleCheese(0));
  else if (ui->DoubleCheeseNoRadioButton->isChecked())
    maker.SetDoubleCheese(DoubleCheese(1));
  else
    maker.SetDoubleCheese(DoubleCheese(1));

  if (ui->PineapplesYesRadioButton->isChecked())
    maker.SetPineapples(Pineapples(0));
  else if (ui->PineapplesNoRadioButton->isChecked())
    maker.SetPineapples(Pineapples(1));
  else
    maker.SetPineapples(Pineapples(1));

  auto pizza = maker.make();
  ui->textEdit->setText(pizza.GetResult());
}
