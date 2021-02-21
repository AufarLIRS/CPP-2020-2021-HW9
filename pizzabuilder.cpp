#include "pizzabuilder.h"

PizzaBuilder::PizzaBuilder(){};  //присвоил начальные значения в классе

void PizzaBuilder::setDough(Dough dough)
{
  this->dough = dough;
};

void PizzaBuilder::setType(Type type)
{
  this->type = type;
};

void PizzaBuilder::addOlives(Add olives)
{
  this->olives = olives;
};

void PizzaBuilder::addPepperoni(Add pepperoni)
{
  this->pepperoni = pepperoni;
};

void PizzaBuilder::addDoubleCheese(Add double_cheese)
{
  this->double_cheese = double_cheese;
};

void PizzaBuilder::addPineapple(Add pineapple)
{
  this->pineapple = pineapple;
};

Pizza PizzaBuilder::build()
{
  return Pizza(dough, type, olives, pepperoni, double_cheese, pineapple);
}

QString PizzaBuilder::Pizza_composition()
{
  QString composition = "Пицца";

  switch (this->type)
  {
    case (Type::PEPPERONI): {
      composition += " Пепперони \n";
      break;
    }
    case (Type::MARGARITA): {
      composition += " Маргарита  \n";
      break;
    }
    case (Type::SEA): {
      composition += " Морская  \n";
      break;
    }
    case (Type::FOURCHEESES): {
      composition += " Четыре сыра  \n";
      break;
    }
  }

  switch (this->dough)
  {
    case (Dough::THIN): {
      composition += "Тонкое тесто \n";
      break;
    }
    case (Dough::TRADITIONAL): {
      composition += " Традиционное тесто \n";
      break;
    }
  }

  switch (this->olives)
  {
    case (Add::YES): {
      composition += "+Оливки \n";
      break;
    }
    case (Add::NO): {
      composition += "";
      break;
    }
  }

  switch (this->pepperoni)
  {
    case (Add::YES): {
      composition += "+Пепперони  \n";
      break;
    }
    case (Add::NO): {
      composition += "";
      break;
    }
  }

  switch (this->pineapple)
  {
    case (Add::YES): {
      composition += "+Ананас \n";
      break;
    }
    case (Add::NO): {
      composition += "";
      break;
    }
  }

  switch (this->double_cheese)
  {
    case (Add::YES): {
      composition += "+Двойной сыр  \n";
      break;
    }
    case (Add::NO): {
      composition += "";
      break;
    }
  }

  return composition;
}
