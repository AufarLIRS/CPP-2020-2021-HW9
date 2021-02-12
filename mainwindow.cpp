#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include "pizzabuilder.h"

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  dough_btn_group.addButton(ui->radioButton, Pizza_dough::thin);
  dough_btn_group.addButton(ui->radioButton_2, Pizza_dough::traditional);

  type_btn_group.addButton(ui->radioButton_3, Pizza_type::Pepperoni);
  type_btn_group.addButton(ui->radioButton_4, Pizza_type::Margarita);
  type_btn_group.addButton(ui->radioButton_5, Pizza_type::FourCheeses);
  type_btn_group.addButton(ui->radioButton_6, Pizza_type::Sea);

  oliv_btn_group.addButton(ui->radioButton_7, Add::Yes);
  oliv_btn_group.addButton(ui->radioButton_8, Add::No);

  pepe_btn_group.addButton(ui->radioButton_9, Add::Yes);
  pepe_btn_group.addButton(ui->radioButton_10, Add::No);

  dbche_btn_group.addButton(ui->radioButton_11, Add::Yes);
  dbche_btn_group.addButton(ui->radioButton_12, Add::No);

  pine_btn_group.addButton(ui->radioButton_13, Add::Yes);
  pine_btn_group.addButton(ui->radioButton_14, Add::No);
}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::on_pushButton_clicked()
{
  PizzaBuilder pizza;
  pizza.setDough((Pizza_dough)dough_btn_group.checkedId());
  pizza.setType((Pizza_type)type_btn_group.checkedId());
  pizza.addOlives((Add)oliv_btn_group.checkedId());
  pizza.addPepperoni((Add)pepe_btn_group.checkedId());
  pizza.addDoubleCheese((Add)dbche_btn_group.checkedId());
  pizza.addPineapple((Add)pine_btn_group.checkedId());
  ui->textEdit->setText(QString::fromStdString(pizza.Pizza_composition()));
  pizza.build();
};
