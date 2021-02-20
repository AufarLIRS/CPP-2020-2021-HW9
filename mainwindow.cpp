#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QButtonGroup>
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
  QButtonGroup* DoughBG = new QButtonGroup;
  QButtonGroup* PizzaTypeBG = new QButtonGroup;
  QButtonGroup* OlivesBG = new QButtonGroup;
  QButtonGroup* PepperoniBG = new QButtonGroup;
  QButtonGroup* DoubleCheeseBG = new QButtonGroup;
  QButtonGroup* PineappleBG = new QButtonGroup;

  DoughBG->addButton(ui->ThinCrustRadioButton, 0);
  DoughBG->addButton(ui->TraditionalCrustRadioButton, 1);

  PizzaTypeBG->addButton(ui->PepperoniRadioButton, 0);
  PizzaTypeBG->addButton(ui->MargaritaRadioButton, 1);
  PizzaTypeBG->addButton(ui->FourCheeseRadioButton, 2);
  PizzaTypeBG->addButton(ui->SeaPizzaRadioButton, 3);

  OlivesBG->addButton(ui->OlivesYesRadioButton, 0);
  OlivesBG->addButton(ui->OlivesNoRadioButton, 1);

  PepperoniBG->addButton(ui->PepperoniYesRadioButton, 0);
  PepperoniBG->addButton(ui->PepperoniNoRadioButton, 1);

  DoubleCheeseBG->addButton(ui->DoubleCheeseYesRadioButton, 0);
  DoubleCheeseBG->addButton(ui->DoubleCheeseNoRadioButton, 1);

  PineappleBG->addButton(ui->PineapplesYesRadioButton, 0);
  PineappleBG->addButton(ui->PineapplesNoRadioButton, 1);

  Pizza::Pizza::MakePizza maker;
  maker.SetDoughType(DoughType(DoughBG->checkedId()));
  maker.SetPizzaType(PizzaType(PizzaTypeBG->checkedId()));
  maker.SetOlives(Olives(OlivesBG->checkedId()));
  maker.SetPepperoni(Pepperoni(PepperoniBG->checkedId()));
  maker.SetDoubleCheese(DoubleCheese(DoubleCheeseBG->checkedId()));
  maker.SetPineapples(Pineapples(PineappleBG->checkedId()));

  auto pizza = maker.make();
  ui->textEdit->setText(pizza.GetResult());
}
