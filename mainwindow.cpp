#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include "pizzabuilder.h"

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  dough_btn_group.addButton(ui->radioButton, (int)Dough::THIN);
  dough_btn_group.addButton(ui->radioButton_2, (int)Dough::TRADITIONAL);

  type_btn_group.addButton(ui->radioButton_3, (int)Type::PEPPERONI);
  type_btn_group.addButton(ui->radioButton_4, (int)Type::MARGARITA);
  type_btn_group.addButton(ui->radioButton_5, (int)Type::FOURCHEESES);
  type_btn_group.addButton(ui->radioButton_6, (int)Type::SEA);

  oliv_btn_group.addButton(ui->radioButton_7, (int)Add::YES);
  oliv_btn_group.addButton(ui->radioButton_8, (int)Add::NO);

  pepe_btn_group.addButton(ui->radioButton_9, (int)Add::YES);
  pepe_btn_group.addButton(ui->radioButton_10, (int)Add::NO);

  dbche_btn_group.addButton(ui->radioButton_11, (int)Add::YES);
  dbche_btn_group.addButton(ui->radioButton_12, (int)Add::NO);

  pine_btn_group.addButton(ui->radioButton_13, (int)Add::YES);
  pine_btn_group.addButton(ui->radioButton_14, (int)Add::NO);
}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::on_pushButton_clicked()
{
  PizzaBuilder pizza;
  pizza.setDough((Dough)dough_btn_group.checkedId());
  pizza.setType((Type)type_btn_group.checkedId());
  pizza.addOlives((Add)oliv_btn_group.checkedId());
  pizza.addPepperoni((Add)pepe_btn_group.checkedId());
  pizza.addDoubleCheese((Add)dbche_btn_group.checkedId());
  pizza.addPineapple((Add)pine_btn_group.checkedId());
  ui->textEdit->setText(pizza.Pizza_composition());
  pizza.build();
};
