#ifndef PIZZA_H
#define PIZZA_H
#include <QApplication>
#include <iostream>
#include "Enums.cpp"

class Pizza
{
  Pizza_dough dough;
  Pizza_type type;
  Add olives;
  Add pepperoni;
  Add double_cheese;
  Add pineapple;

public:
  Pizza();
  explicit Pizza(Pizza_dough dough, Pizza_type type, Add olives, Add pepperoni, Add double_cheese, Add pineapple);
};

#endif  // PIZZA_H
