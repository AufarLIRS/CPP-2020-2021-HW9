#include <iostream>
#include <QString>
#ifndef PIZZA_H
#define PIZZA_H

enum class ViewOfDough
{
  Thin = 0,
  Traditional = 1
};
enum class ViewOfPizza
{
  Pepperoni = 0,
  Margarita = 1,
  FourCheez = 2,
  Sea = 3
};

class Pizza
{
  ViewOfDough Dough;
  ViewOfPizza View;
  bool IsWithOlives;
  bool IsWithPinapple;
  bool IsDoubleCheez;
  bool IsPepperoni;

public:
   Pizza(ViewOfDough dough, ViewOfPizza view, bool isWithOlive, bool isWithPinapple, bool isDoubleCheez,
        bool isPepperoni);
   QString GetPizzaInformationText();
   //friend std::ostream& operator<< (std::ostream &out, const Pizza &pizza);
};
#endif  // PIZZA_H
