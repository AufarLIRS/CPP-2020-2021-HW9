#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include "pizza.h"

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  ui->buttonGroup->setId(ui->radioButton, 0);
  ui->buttonGroup->setId(ui->radioButton_2, 1);
  ui->buttonGroup_2->setId(ui->radioButton_3, 0);
  ui->buttonGroup_2->setId(ui->radioButton_4, 1);
  ui->buttonGroup_2->setId(ui->radioButton_5, 2);
  ui->buttonGroup_2->setId(ui->radioButton_6, 3);
  ui->buttonGroup_3->setId(ui->radioButton_7, 0);
  ui->buttonGroup_3->setId(ui->radioButton_8, 1);
  ui->buttonGroup_4->setId(ui->radioButton_9, 0);
  ui->buttonGroup_4->setId(ui->radioButton_10, 1);
  ui->buttonGroup_6->setId(ui->radioButton_11, 0);
  ui->buttonGroup_6->setId(ui->radioButton_12, 1);
  ui->buttonGroup_5->setId(ui->radioButton_13, 0);
  ui->buttonGroup_5->setId(ui->radioButton_14, 1);
}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::on_pushButton_clicked()
{
  ui->textEdit->clear();

  auto builder = Pizza::Builder();
  builder.SetPineapples(Pineapples(ui->buttonGroup_5->checkedId()));
  builder.SetOlives(Olives(ui->buttonGroup_3->checkedId()));
  builder.SetTypeOfDough(TypeOfDough(ui->buttonGroup->checkedId()));
  builder.SetTypeOfPizza(TypeOfPizza(ui->buttonGroup_2->checkedId()));
  builder.SetPepperoni(Pepperoni(ui->buttonGroup_4->checkedId()));
  builder.SetDoubleCheese(DoubleCheese(ui->buttonGroup_6->checkedId()));

  auto pizza = builder.build();
  ui->textEdit->setText(pizza.GetResult());
}

