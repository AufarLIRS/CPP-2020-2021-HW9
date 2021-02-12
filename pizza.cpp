#include "pizza.h"

Pizza::Pizza(Dough dough, Type type, Bool olives, Bool pepperoni, Bool double_cheese, Bool pineapples)
{
  this->dough_ = dough;
  this->type_ = type;
  this->olives_ = olives;
  this->pepperoni_ = pepperoni;
  this->double_cheese_ = double_cheese;
  this->pineapples_ = pineapples;
}
std::string Pizza::to_string()
{
  std::string dough = "тонкое тесто";
  if (this->dough_ != DOUGH_THIN)
  {
    dough = "традиционное тесто";
  }
  std::string type = "пепперони";
  if (this->type_ == TYPE_MARGARET)
  {
    type = "маргарита";
  }
  else if (this->type_ == TYPE_FOUR_CHEESES)
  {
    type = "четыре сыра";
  }
  else if (this->type_ == TYPE_MARINE)
  {
    type = "морская";
  }
  std::string olives = "оливок: нет";
  if (this->olives_ == YES)
  {
    olives = "оливок: да";
  }
  std::string pepperoni = "пепперони: нет";
  if (this->pepperoni_ == YES)
  {
    pepperoni = "пепперони: да";
  }
  std::string double_cheese = "двойной сыр: нет";
  if (this->double_cheese_ == YES)
  {
    double_cheese = "двойной сыр: да";
  }
  std::string pineapples = "ананасы: нет";
  if (this->pineapples_ == YES)
  {
    pineapples = "ананасы: да";
  }
  return "Pizza:\n" + dough + '\n' + type + '\n' + olives + '\n' + pepperoni + '\n' + double_cheese + '\n' + pineapples;
}

void PizzaBuilder::setDough(Dough dough)
{
  this->dough_ = dough;
}
void PizzaBuilder::setType(Type type)
{
  this->type_ = type;
}
void PizzaBuilder::setOlives(Bool olives)
{
  this->olives_ = olives;
}
void PizzaBuilder::setPepperoni(Bool pepperoni)
{
  this->pepperoni_ = pepperoni;
}
void PizzaBuilder::setDoubleCheese(Bool double_cheese)
{
  this->double_cheese_ = double_cheese;
}
void PizzaBuilder::setPineapples(Bool pineapples)
{
  this->pineapples_ = pineapples;
}
Pizza PizzaBuilder::build()
{
  return Pizza(dough_, type_, olives_, pepperoni_, double_cheese_, pineapples_);
}
