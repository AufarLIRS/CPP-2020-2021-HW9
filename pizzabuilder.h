#ifndef PIZZABUILDER_H
#define PIZZABUILDER_H
#include <pizza.h>

class PizzaBuilder
{
  Pizza_dough dough;
  Pizza_type type;
  Add olives;
  Add pepperoni;
  Add double_cheese;
  Add pineapple;

public:
  PizzaBuilder();
  void setDough(Pizza_dough dough);
  void setType(Pizza_type type);
  void addOlives(Add olives);
  void addPepperoni(Add pepperoni);
  void addDoubleCheese(Add double_cheese);
  void addPineapple(Add pineapple);
  Pizza build();
  std::string Pizza_composition();
};

#endif  // PIZZABUILDER_H
