#include "pizza.h"

Pizza::Pizza(Pizza_Characteristics::Dough dough, Pizza_Characteristics::Type type, Pizza_Characteristics::Bool olives,
             Pizza_Characteristics::Bool pepperoni, Pizza_Characteristics::Bool double_cheese,
             Pizza_Characteristics::Bool pineapples)
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
  if (this->dough_ != Pizza_Characteristics::Dough::DOUGH_THIN)
  {
    dough = "традиционное тесто";
  }
  std::string type = "пепперони";
  if (this->type_ == Pizza_Characteristics::Type::TYPE_MARGARET)
  {
    type = "маргарита";
  }
  else if (this->type_ == Pizza_Characteristics::Type::TYPE_FOUR_CHEESES)
  {
    type = "четыре сыра";
  }
  else if (this->type_ == Pizza_Characteristics::Type::TYPE_MARINE)
  {
    type = "морская";
  }
  std::string olives = "оливок: нет";
  if (this->olives_ == Pizza_Characteristics::Bool::YES)
  {
    olives = "оливок: да";
  }
  std::string pepperoni = "пепперони: нет";
  if (this->pepperoni_ == Pizza_Characteristics::Bool::YES)
  {
    pepperoni = "пепперони: да";
  }
  std::string double_cheese = "двойной сыр: нет";
  if (this->double_cheese_ == Pizza_Characteristics::Bool::YES)
  {
    double_cheese = "двойной сыр: да";
  }
  std::string pineapples = "ананасы: нет";
  if (this->pineapples_ == Pizza_Characteristics::Bool::YES)
  {
    pineapples = "ананасы: да";
  }
  return "Pizza:\n" + dough + '\n' + type + '\n' + olives + '\n' + pepperoni + '\n' + double_cheese + '\n' + pineapples;
}

void PizzaBuilder::setDough(Pizza_Characteristics::Dough dough)
{
  this->dough_ = dough;
}
void PizzaBuilder::setType(Pizza_Characteristics::Type type)
{
  this->type_ = type;
}
void PizzaBuilder::setOlives(Pizza_Characteristics::Bool olives)
{
  this->olives_ = olives;
}
void PizzaBuilder::setPepperoni(Pizza_Characteristics::Bool pepperoni)
{
  this->pepperoni_ = pepperoni;
}
void PizzaBuilder::setDoubleCheese(Pizza_Characteristics::Bool double_cheese)
{
  this->double_cheese_ = double_cheese;
}
void PizzaBuilder::setPineapples(Pizza_Characteristics::Bool pineapples)
{
  this->pineapples_ = pineapples;
}
Pizza PizzaBuilder::build()
{
  return Pizza(dough_, type_, olives_, pepperoni_, double_cheese_, pineapples_);
}
