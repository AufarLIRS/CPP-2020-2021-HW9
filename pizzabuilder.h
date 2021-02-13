#include "pizza.h"
#ifndef PIZZABUILDER_H
#define PIZZABUILDER_H

class PizzaBuilder
{
  ViewOfDough Dough;
  ViewOfPizza View;
  bool IsWithOlives;
  bool IsWithPinapple;
  bool IsDoubleCheez;
  bool IsPepperoni;

public:
  PizzaBuilder();
  PizzaBuilder* setDough(ViewOfDough view);
  PizzaBuilder* setView(ViewOfPizza view);
  PizzaBuilder* setIsWithOlives(bool isNeed);
  PizzaBuilder* setIsWithPinapple(bool isNeed);
  PizzaBuilder* setIsDoubleCheez(bool isNeed);
  PizzaBuilder* setIsPepperoni(bool isNeed);
  Pizza Build();
};

#endif  // PIZZABUILDER_H
