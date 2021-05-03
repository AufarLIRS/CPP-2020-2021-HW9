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

void MainWindow::on_pushButton_clicked()
{
    dough testo = static_cast<dough>(ui->radioButton->isChecked() == 1 ? 0 : 1);
    int typeOfPizza1 = 0;
    if (ui->radioButton_3->isChecked()) {
        typeOfPizza1 = 0;
    }
    else if (ui->radioButton_4->isChecked()) {
        typeOfPizza1 = 1;
    }
    else if (ui->radioButton_5->isChecked()) {
        typeOfPizza1 = 2;
    }
    else
        typeOfPizza1 = 3;
    typeOfPizza pizzaPrivate = static_cast<typeOfPizza>(typeOfPizza1);
    addOlivki olivki = static_cast<addOlivki>(ui->radioButton_7->isChecked() == 1 ? 0 : 1);
    addDoubleChesse chesse = static_cast<addDoubleChesse>(ui->radioButton_9->isChecked() == 1 ? 0 : 1);
    addPeperonni peperonni = static_cast<addPeperonni>(ui->radioButton_11->isChecked() == 1 ? 0 : 1);
    addPineapple pineapple = static_cast<addPineapple>(ui->radioButton_13->isChecked() == 1 ? 0 : 1);


    pizza* newPizza = new pizza(testo, pizzaPrivate, olivki, peperonni, chesse, pineapple);
    qDebug() << "dough: " << newPizza->getTesto() << "typeOfPizza: " << newPizza->getPizzaPrivate() <<
                "olivki: " << newPizza->getOlivki() << "chesse: " << newPizza->getChesse() << "peperonni: " << newPizza->getPeperonniPrivate()
             << "pineapple: " <<newPizza->getPineapple();
}

