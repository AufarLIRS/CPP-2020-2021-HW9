#include <iostream>
#include <QString>
#ifndef PIZZA_H
#define PIZZA_H
enum class ViewOfDough;
enum class ViewOfPizza;
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
  // friend std::ostream& operator<< (std::ostream &out, const Pizza &pizza);
};
#endif  // PIZZA_H
