#include "pizza.h"
//#include "characteristicsofpizza.h"
#ifndef PIZZABUILDER_H
#define PIZZABUILDER_H

class PizzaBuilder
{
  ViewOfDough Dough;
  TypeOfPizza Type;
  bool IsWithOlives;
  bool IsWithPinapple;
  bool IsDoubleCheez;
  bool IsPepperoni;

public:
  PizzaBuilder();
  PizzaBuilder* setDough(ViewOfDough view);
  PizzaBuilder* setView(TypeOfPizza view);
  PizzaBuilder* setIsWithOlives(bool isNeed);
  PizzaBuilder* setIsWithPinapple(bool isNeed);
  PizzaBuilder* setIsDoubleCheez(bool isNeed);
  PizzaBuilder* setIsPepperoni(bool isNeed);
  Pizza Build();
};

#endif  // PIZZABUILDER_H
