#include <iostream>
#include <QString>
//#include "characteristicsofpizza.h"
#ifndef PIZZA_H
#define PIZZA_H

enum class ViewOfDough
{
  Thin = 0,
  Traditional = 1
};
enum class TypeOfPizza
{
  Pepperoni = 0,
  Margarita = 1,
  FourCheez = 2,
  Sea = 3
};
class Pizza
{
  ViewOfDough Dough;
  TypeOfPizza Type;
  bool IsWithOlives;
  bool IsWithPinapple;
  bool IsDoubleCheez;
  bool IsPepperoni;

public:
  Pizza(ViewOfDough dough, TypeOfPizza view, bool isWithOlive, bool isWithPinapple, bool isDoubleCheez,
        bool isPepperoni);
  QString GetPizzaInformationText();
};
#endif  // PIZZA_H
