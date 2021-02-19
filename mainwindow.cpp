#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include "pizzabuilder.h"
#include "pizza.h"

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  ui->ViewOfDoughGroup->setId(ui->thinDough_RadioButton, (int)ViewOfDough::Thin);
  ui->ViewOfDoughGroup->setId(ui->traditionalDough_RadioButton, (int)ViewOfDough::Traditional);

  ui->ViewOfPizzaGroup->setId(ui->PepperonniPizza_RadioButton, (int)TypeOfPizza::Pepperoni);
  ui->ViewOfPizzaGroup->setId(ui->MargaritaPizza_RadioButton, (int)TypeOfPizza::Margarita);
  ui->ViewOfPizzaGroup->setId(ui->FourCheezPizza_RadioButton, (int)TypeOfPizza::FourCheez);
  ui->ViewOfPizzaGroup->setId(ui->SeaPizza_RadioButton, (int)TypeOfPizza::Sea);
}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::on_makePizza_Button_clicked()
{
  PizzaBuilder builder;
  Pizza pizza = builder.setDough(ViewOfDough(ui->ViewOfDoughGroup->checkedId()))
                    ->setView(TypeOfPizza(ui->ViewOfPizzaGroup->checkedId()))
                    ->setIsDoubleCheez(ui->yes_DoubleCheez_RadioButton->isChecked())
                    ->setIsPepperoni(ui->yes_Pepperonni_RadioButton->isChecked())
                    ->setIsWithOlives(ui->yes_Olives_RadioButton->isChecked())
                    ->setIsWithPinapple(ui->yes_Pinapple_RadioButton->isChecked())
                    ->Build();
  ui->outputText->insertPlainText("Пицца, которую вы приготовили: " + pizza.GetPizzaInformationText());
}
