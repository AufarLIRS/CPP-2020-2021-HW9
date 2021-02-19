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
      case PizzaEnumsBox::Thin: {
        resultMessage += "С тонким тестом\n";
        break;
      }

      case PizzaEnumsBox::Tradition: {
        resultMessage += "С традиционным тестом\n";
        break;
      }
    }

    switch (typeOfPizza)
    {
      case PizzaEnumsBox::Pepperoni_pizza: {
        resultMessage += "Пицца \"Пепперони\"\n";
        break;
      }

      case PizzaEnumsBox::Margarita: {
        resultMessage += "Пицца \"Маргарита\"\n";
        break;
      }

      case PizzaEnumsBox::FourCheese: {
        resultMessage += "Пицца \"Четыре сыра\"\n";
        break;
      }

      case PizzaEnumsBox::Sea: {
        resultMessage += "Пицца \"Морская\"\n";
        break;
      }
    }

    switch (olives)
    {
      case PizzaEnumsBox::Yes_olives: {
        resultMessage += "С оливками\n";
        break;
      }

      case PizzaEnumsBox::No_olives: {
        resultMessage += "Без оливок\n";
        break;
      }
    }

    switch (pepperoni)
    {
      case PizzaEnumsBox::Yes_pepperoni: {
        resultMessage += "С пепперони\n";
        break;
      }

      case PizzaEnumsBox::No_pepperoni: {
        resultMessage += "Без пепперони\n";
        break;
      }
    }

    switch (doubleCheese)
    {
      case PizzaEnumsBox::Yes_doubleCheese: {
        resultMessage += "С двойным сыром\n";
        break;
      }

      case PizzaEnumsBox::No_doubleCheese: {
        resultMessage += "Без двойного сыра\n";
        break;
      }
    }

    switch (ananases)
    {
      case PizzaEnumsBox::Yes_ananases: {
        resultMessage += "С ананасами";
        break;
      }

      case PizzaEnumsBox::No_ananases: {
        resultMessage += "Без ананасов";
        break;
      }
    }

    return resultMessage;
  }
};

class PizzaBuilder
{
  PizzaEnumsBox::Dough dough = PizzaEnumsBox::Thin;
  PizzaEnumsBox::TypeOfPizza typeOfPizza = PizzaEnumsBox::Pepperoni_pizza;
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

  dough_radio_btn_group.addButton(ui->thin_dough, PizzaEnumsBox::Dough::Thin);
  dough_radio_btn_group.addButton(ui->tradition_dough, PizzaEnumsBox::Tradition);

  pizza_type_radio_btn_group.addButton(ui->pepperoni_pizza, PizzaEnumsBox::Pepperoni_pizza);
  pizza_type_radio_btn_group.addButton(ui->margarita_pizza, PizzaEnumsBox::Margarita);
  pizza_type_radio_btn_group.addButton(ui->fourCheese_pizza, PizzaEnumsBox::FourCheese);
  pizza_type_radio_btn_group.addButton(ui->sea_pizza, PizzaEnumsBox::Sea);

  olives_radio_btn_group.addButton(ui->yes_olives, PizzaEnumsBox::Yes_olives);
  olives_radio_btn_group.addButton(ui->no_olives, PizzaEnumsBox::No_olives);

  pepperoni_radio_btn_group.addButton(ui->yes_pepperoni, PizzaEnumsBox::Yes_pepperoni);
  pepperoni_radio_btn_group.addButton(ui->no_pepperoni, PizzaEnumsBox::No_pepperoni);

  double_cheese_radio_btn_group.addButton(ui->yes_doubleCheese, PizzaEnumsBox::Yes_doubleCheese);
  double_cheese_radio_btn_group.addButton(ui->no_doubleCheese, PizzaEnumsBox::No_doubleCheese);

  ananases_radio_btn_group.addButton(ui->yes_ananases, PizzaEnumsBox::Yes_ananases);
  ananases_radio_btn_group.addButton(ui->no_ananases, PizzaEnumsBox::No_ananases);
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
