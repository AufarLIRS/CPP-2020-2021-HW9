#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

enum Dough
{
  thin_dough,
  tradition_dough
};

enum TypeOfPizza
{
  pepperoni_pizza,
  margarita_pizza,
  fourCheese_pizza,
  sea_pizza
};

enum Olives
{
  yes_olives,
  no_olives,
  not_defined_olives
};

enum Pepperoni
{
  yes_pepperoni,
  no_pepperoni,
  not_defined_pepperoni
};

enum DoubleCheese
{
  yes_doubleCheese,
  no_doubleCheese,
  not_defined_doubleCheese
};

enum Ananases
{
  yes_ananases,
  no_ananases,
  not_defined_ananases
};

class Pizza
{
  Dough dough;
  TypeOfPizza typeOfPizza;
  Olives olives;
  Pepperoni pepperoni;
  DoubleCheese doubleCheese;
  Ananases ananases;

public:
  explicit Pizza(Dough dough, TypeOfPizza typeOfPizza, Olives olives, Pepperoni pepperoni, DoubleCheese doubleCheese,
                 Ananases ananases)
  {
    this->dough = dough;
    this->typeOfPizza = typeOfPizza;
    this->olives = olives;
    this->pepperoni = pepperoni;
    this->doubleCheese = doubleCheese;
    this->ananases = ananases;
  };
  Pizza(){};

  QString buildMessage()
  {
    QString resultMessage;
    resultMessage = "Ваша пиццца:\n";

    switch (dough)
    {
      case thin_dough: {
        resultMessage += "С тонким тестом\n";
      }
      break;
      case tradition_dough: {
        resultMessage += "С традиционным тестом\n";
      }
      break;
    }

    switch (typeOfPizza)
    {
      case pepperoni_pizza: {
        resultMessage += "Пицца \"Пепперони\"\n";
      }
      break;
      case margarita_pizza: {
        resultMessage += "Пицца \"Маргарита\"\n";
      }
      break;
      case fourCheese_pizza: {
        resultMessage += "Пицца \"Четыре сыра\"\n";
      }
      break;
      case sea_pizza: {
        resultMessage += "Пицца \"Морская\"\n";
      }
      break;
    }

    switch (olives)
    {
      case yes_olives: {
        resultMessage += "С оливками\n";
      }
      break;
      case no_olives: {
        resultMessage += "Без оливок\n";
      }
      break;
    }

    switch (pepperoni)
    {
      case yes_pepperoni: {
        resultMessage += "С пепперони\n";
      }
      break;
      case no_pepperoni: {
        resultMessage += "Без пепперони\n";
      }
      break;
    }

    switch (doubleCheese)
    {
      case yes_doubleCheese: {
        resultMessage += "С двойным сыром\n";
      }
      break;
      case no_doubleCheese: {
        resultMessage += "Без двойного сыра\n";
      }
      break;
    }

    switch (ananases)
    {
      case yes_ananases: {
        resultMessage += "С ананасами";
      }
      break;
      case no_ananases: {
        resultMessage += "Без ананасов";
      }
      break;
    }

    return resultMessage;
  }
};

class PizzaBuilder
{
  Dough dough = thin_dough;
  TypeOfPizza typeOfPizza = pepperoni_pizza;
  Olives olives = not_defined_olives;
  Pepperoni pepperoni = not_defined_pepperoni;
  DoubleCheese doubleCheese = not_defined_doubleCheese;
  Ananases ananases = not_defined_ananases;

public:
  PizzaBuilder(){};
  void setDough(Dough dough)
  {
    this->dough = dough;
  };
  void setTypeOfPizza(TypeOfPizza typeOfPizza)
  {
    this->typeOfPizza = typeOfPizza;
  };
  void setOlives(Olives olives)
  {
    this->olives = olives;
  };
  void setPepperoni(Pepperoni pepperoni)
  {
    this->pepperoni = pepperoni;
  };
  void setDoubleCheese(DoubleCheese doubleCheese)
  {
    this->doubleCheese = doubleCheese;
  };
  void setAnanases(Ananases ananases)
  {
    this->ananases = ananases;
  };
  Pizza build()
  {
    return Pizza(dough, typeOfPizza, olives, pepperoni, doubleCheese, ananases);
  };
};

PizzaBuilder pizzaBuilder;
Pizza pizzaResult;

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
  ui->setupUi(this);
}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::on_thin_dough_clicked()
{
  pizzaBuilder.setDough(thin_dough);
}

void MainWindow::on_tradition_dough_clicked()
{
  pizzaBuilder.setDough(tradition_dough);
}

void MainWindow::on_pepperoni_pizza_clicked()
{
  pizzaBuilder.setTypeOfPizza(pepperoni_pizza);
}

void MainWindow::on_margarita_pizza_clicked()
{
  pizzaBuilder.setTypeOfPizza(margarita_pizza);
}

void MainWindow::on_fourCheese_pizza_clicked()
{
  pizzaBuilder.setTypeOfPizza(fourCheese_pizza);
}

void MainWindow::on_sea_pizza_clicked()
{
  pizzaBuilder.setTypeOfPizza(sea_pizza);
}

void MainWindow::on_yes_olives_clicked()
{
  pizzaBuilder.setOlives(yes_olives);
}

void MainWindow::on_no_olives_clicked()
{
  pizzaBuilder.setOlives(no_olives);
}

void MainWindow::on_yes_pepperoni_clicked()
{
  pizzaBuilder.setPepperoni(yes_pepperoni);
}

void MainWindow::on_no_pepperoni_clicked()
{
  pizzaBuilder.setPepperoni(no_pepperoni);
}

void MainWindow::on_yes_doubleCheese_clicked()
{
  pizzaBuilder.setDoubleCheese(yes_doubleCheese);
}

void MainWindow::on_no_doubleCheese_clicked()
{
  pizzaBuilder.setDoubleCheese(no_doubleCheese);
}

void MainWindow::on_yes_ananases_clicked()
{
  pizzaBuilder.setAnanases(yes_ananases);
}

void MainWindow::on_no_ananases_clicked()
{
  pizzaBuilder.setAnanases(no_ananases);
}

void MainWindow::on_makePizzaButton_clicked()
{
  pizzaResult = pizzaBuilder.build();
  ui->resultText->setText(pizzaResult.buildMessage());
}
