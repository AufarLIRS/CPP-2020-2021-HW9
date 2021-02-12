#include "pizzabuilder.h"

PizzaBuilder::PizzaBuilder()
{
}

void PizzaBuilder::setDough(Pizza_dough dough)
{
  this->dough = dough;
};
void PizzaBuilder::setType(Pizza_type type)
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

std::string PizzaBuilder::Pizza_composition()
{
  std::string type = "Пепперони";
  if (this->type == Pizza_type::Margarita)
  {
    type = "Маргарита";
  };
  if (this->type == Pizza_type::Sea)
  {
    type = "Морская";
  };
  if (this->type == Pizza_type::FourCheeses)
  {
    type = "Четыре сыра";
  };
  std::string dough = "Тонкое тесто";
  if (this->dough == Pizza_dough::traditional)
  {
    dough = "Традиционное тесто";
  };
  std::string olives = "";
  if (this->olives == Add::Yes)
  {
    olives = "оливки";
  }
  std::string pepperoni = "";
  if (this->pepperoni == Add::Yes)
  {
    pepperoni = "пепперони";
  }
  std::string dbCheese = "";
  if (this->double_cheese == Add::Yes)
  {
    dbCheese = "двойной сыр";
  }
  std::string pineapple = "";
  if (this->pineapple == Add::Yes)
  {
    pineapple = "ананас";
  }
  std::string composition = "Пицца " + type + '\n' + dough + '\n';
  if (olives != "" || pepperoni != "" || dbCheese != "" || pineapple != "")
  {
    composition += "+" + olives;
  }
  else
    return composition;
  if (olives != "" && (pepperoni != "" || dbCheese != "" || pineapple != ""))
  {
    composition += ", ";
  }
  composition += pepperoni;
  if (pepperoni != "" && (dbCheese != "" || pineapple != ""))
  {
    composition += ", ";
  }
  composition += dbCheese;
  if (dbCheese != "" && (pineapple != ""))
  {
    composition += ", ";
  }
  composition += pineapple;
  return composition;
}
