#include "pizzabuilder.h"

PizzaBuilder::PizzaBuilder()
{
  this->Dough = ViewOfDough::Thin;
  this->Type = TypeOfPizza::Pepperoni;
  this->IsWithOlives = false;
  this->IsWithPinapple = false;
  this->IsDoubleCheez = false;
  this->IsPepperoni = false;
};
PizzaBuilder* PizzaBuilder::setDough(ViewOfDough view)
{
  this->Dough = view;
  return this;
};
PizzaBuilder* PizzaBuilder::setView(TypeOfPizza view)
{
  this->Type = view;
  return this;
};
PizzaBuilder* PizzaBuilder::setIsWithOlives(bool isNeed)
{
  this->IsWithOlives = isNeed;
  return this;
};
PizzaBuilder* PizzaBuilder::setIsWithPinapple(bool isNeed)
{
  this->IsWithPinapple = isNeed;
  return this;
};
PizzaBuilder* PizzaBuilder::setIsDoubleCheez(bool isNeed)
{
  this->IsDoubleCheez = isNeed;
  return this;
};
PizzaBuilder* PizzaBuilder::setIsPepperoni(bool isNeed)
{
  this->IsPepperoni = isNeed;
  return this;
};
Pizza PizzaBuilder::Build()
{
  return Pizza(this->Dough, this->Type, this->IsWithOlives, this->IsWithPinapple, this->IsDoubleCheez,
               this->IsPepperoni);
};
