#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

#include "PizzaMaker.h"

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
  ui->setupUi(this);

    ui->doughButtonGroup->setId(ui->thin_dough_radioButton, 0);
    ui->doughButtonGroup->setId(ui->traditional_dough_radioButton, 1);

    ui->pizzaTypeButtonGroup->setId(ui->Pepperoni_radioButton, 0);
    ui->pizzaTypeButtonGroup->setId(ui->marguerite_radioButton, 1);
    ui->pizzaTypeButtonGroup->setId(ui->four_cheeses_radioButton, 2);
    ui->pizzaTypeButtonGroup->setId(ui->Sea_radioButton, 3);

    ui->oliveButtonGroup->setId(ui->olive_no_radioButton, 0);
    ui->oliveButtonGroup->setId(ui->olive_yes_radioButton, 1);

    ui->doubleCheeseButtonGroup->setId(ui->double_cheese_no_radioButton, 0);
    ui->doubleCheeseButtonGroup->setId(ui->double_cheese_yes_radioButton, 1);

    ui->pineappleButtonGroup->setId(ui->pineapple_no_radioButton, 0);
    ui->pineappleButtonGroup->setId(ui->pineapple_yes_radioButton, 1);
}

MainWindow::~MainWindow()
{
  delete ui;
}



void MainWindow::on_make_pushButton_clicked()
{
    ui->output_textEdit->clear();

    PizzaMaker::Builder pizzaMaker = PizzaMaker::Builder();

    pizzaMaker.setDoughType(DoughType(ui->doughButtonGroup->checkedId()));
    pizzaMaker.setPizzaType(PizzaType(ui->pizzaTypeButtonGroup->checkedId()));
    pizzaMaker.setOlive(Olive(ui->oliveButtonGroup->checkedId()));
    pizzaMaker.setPepperoni(Pepperoni(ui->pineappleButtonGroup->checkedId()));
    pizzaMaker.setDoubleCheese(DoubleCheese(ui->doubleCheeseButtonGroup->checkedId()));
    pizzaMaker.setPineapples(Pineapple(ui->pineappleButtonGroup->checkedId()));

    PizzaMaker pizza = pizzaMaker.build();
    ui->output_textEdit->setText(pizza.getResult());

}
