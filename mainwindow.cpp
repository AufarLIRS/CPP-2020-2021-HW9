#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

class Pizza
{
  PizzaEnumsBox::Dough dough;
  PizzaEnumsBox::TypeOfPizza typeOfPizza;
  PizzaEnumsBox::Olives olives;
  PizzaEnumsBox::Pepperoni pepperoni;
  PizzaEnumsBox::DoubleCheese doubleCheese;
  PizzaEnumsBox::Ananases ananases;

public:
  explicit Pizza(PizzaEnumsBox::Dough dough, PizzaEnumsBox::TypeOfPizza typeOfPizza, PizzaEnumsBox::Olives olives,
                 PizzaEnumsBox::Pepperoni pepperoni, PizzaEnumsBox::DoubleCheese doubleCheese,
                 PizzaEnumsBox::Ananases ananases)
  {
    this->dough = dough;
    this->typeOfPizza = typeOfPizza;
    this->olives = olives;
    this->pepperoni = pepperoni;
    this->doubleCheese = doubleCheese;
    this->ananases = ananases;
  };

  QString buildMessage()
  {
    QString resultMessage;
    resultMessage = "Ваша пицца:\n";

    switch (dough)
    {
      case PizzaEnumsBox::thin_dough: {
        resultMessage += "С тонким тестом\n";
        break;
      }

      case PizzaEnumsBox::tradition_dough: {
        resultMessage += "С традиционным тестом\n";
        break;
      }
    }

    switch (typeOfPizza)
    {
      case PizzaEnumsBox::pepperoni_pizza: {
        resultMessage += "Пицца \"Пепперони\"\n";
        break;
      }

      case PizzaEnumsBox::margarita_pizza: {
        resultMessage += "Пицца \"Маргарита\"\n";
        break;
      }

      case PizzaEnumsBox::fourCheese_pizza: {
        resultMessage += "Пицца \"Четыре сыра\"\n";
        break;
      }

      case PizzaEnumsBox::sea_pizza: {
        resultMessage += "Пицца \"Морская\"\n";
        break;
      }
    }

    switch (olives)
    {
      case PizzaEnumsBox::yes_olives: {
        resultMessage += "С оливками\n";
        break;
      }

      case PizzaEnumsBox::no_olives: {
        resultMessage += "Без оливок\n";
        break;
      }
    }

    switch (pepperoni)
    {
      case PizzaEnumsBox::yes_pepperoni: {
        resultMessage += "С пепперони\n";
        break;
      }

      case PizzaEnumsBox::no_pepperoni: {
        resultMessage += "Без пепперони\n";
        break;
      }
    }

    switch (doubleCheese)
    {
      case PizzaEnumsBox::yes_doubleCheese: {
        resultMessage += "С двойным сыром\n";
        break;
      }

      case PizzaEnumsBox::no_doubleCheese: {
        resultMessage += "Без двойного сыра\n";
        break;
      }
    }

    switch (ananases)
    {
      case PizzaEnumsBox::yes_ananases: {
        resultMessage += "С ананасами";
        break;
      }

      case PizzaEnumsBox::no_ananases: {
        resultMessage += "Без ананасов";
        break;
      }
    }

    return resultMessage;
  }
};

class PizzaBuilder
{
  PizzaEnumsBox::Dough dough = PizzaEnumsBox::thin_dough;
  PizzaEnumsBox::TypeOfPizza typeOfPizza = PizzaEnumsBox::pepperoni_pizza;
  PizzaEnumsBox::Olives olives;
  PizzaEnumsBox::Pepperoni pepperoni;
  PizzaEnumsBox::DoubleCheese doubleCheese;
  PizzaEnumsBox::Ananases ananases;

public:
  void setDough(PizzaEnumsBox::Dough dough)
  {
    this->dough = dough;
  };
  void setTypeOfPizza(PizzaEnumsBox::TypeOfPizza typeOfPizza)
  {
    this->typeOfPizza = typeOfPizza;
  };
  void setOlives(PizzaEnumsBox::Olives olives)
  {
    this->olives = olives;
  };
  void setPepperoni(PizzaEnumsBox::Pepperoni pepperoni)
  {
    this->pepperoni = pepperoni;
  };
  void setDoubleCheese(PizzaEnumsBox::DoubleCheese doubleCheese)
  {
    this->doubleCheese = doubleCheese;
  };
  void setAnanases(PizzaEnumsBox::Ananases ananases)
  {
    this->ananases = ananases;
  };
  Pizza build()
  {
    return Pizza(dough, typeOfPizza, olives, pepperoni, doubleCheese, ananases);
  };
};

PizzaBuilder pizzaBuilder;

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
  ui->setupUi(this);

  dough_radio_btn_group.addButton(ui->thin_dough, PizzaEnumsBox::Dough::thin_dough);
  dough_radio_btn_group.addButton(ui->tradition_dough, PizzaEnumsBox::tradition_dough);

  pizza_type_radio_btn_group.addButton(ui->pepperoni_pizza, PizzaEnumsBox::pepperoni_pizza);
  pizza_type_radio_btn_group.addButton(ui->margarita_pizza, PizzaEnumsBox::margarita_pizza);
  pizza_type_radio_btn_group.addButton(ui->fourCheese_pizza, PizzaEnumsBox::fourCheese_pizza);
  pizza_type_radio_btn_group.addButton(ui->sea_pizza, PizzaEnumsBox::sea_pizza);

  olives_radio_btn_group.addButton(ui->yes_olives, PizzaEnumsBox::yes_olives);
  olives_radio_btn_group.addButton(ui->no_olives, PizzaEnumsBox::no_olives);

  pepperoni_radio_btn_group.addButton(ui->yes_pepperoni, PizzaEnumsBox::yes_pepperoni);
  pepperoni_radio_btn_group.addButton(ui->no_pepperoni, PizzaEnumsBox::no_pepperoni);

  double_cheese_radio_btn_group.addButton(ui->yes_doubleCheese, PizzaEnumsBox::yes_doubleCheese);
  double_cheese_radio_btn_group.addButton(ui->no_doubleCheese, PizzaEnumsBox::no_doubleCheese);

  ananases_radio_btn_group.addButton(ui->yes_ananases, PizzaEnumsBox::yes_ananases);
  ananases_radio_btn_group.addButton(ui->no_ananases, PizzaEnumsBox::no_ananases);
}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::on_makePizzaButton_clicked()
{
  pizzaBuilder.setDough(PizzaEnumsBox::Dough(dough_radio_btn_group.checkedId()));

  pizzaBuilder.setTypeOfPizza(PizzaEnumsBox::TypeOfPizza(pizza_type_radio_btn_group.checkedId()));

  pizzaBuilder.setOlives(PizzaEnumsBox::Olives(olives_radio_btn_group.checkedId()));

  pizzaBuilder.setPepperoni(PizzaEnumsBox::Pepperoni(pepperoni_radio_btn_group.checkedId()));

  pizzaBuilder.setDoubleCheese(PizzaEnumsBox::DoubleCheese(double_cheese_radio_btn_group.checkedId()));

  pizzaBuilder.setAnanases(PizzaEnumsBox::Ananases(ananases_radio_btn_group.checkedId()));

  ui->resultText->setText(pizzaBuilder.build().buildMessage());
}
