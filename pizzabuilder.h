#ifndef PIZZABUILDER_H
#define PIZZABUILDER_H
#include <pizza.h>
#include <QString>

class PizzaBuilder
{
  Dough dough = Dough::THIN;
  Type type = Type::PEPPERONI;
  Add olives = Add::NO;
  Add pepperoni = Add::NO;
  Add double_cheese = Add::NO;
  Add pineapple = Add::NO;

public:
  PizzaBuilder();
  void setDough(Dough dough);
  void setType(Type type);
  void addOlives(Add olives);
  void addPepperoni(Add pepperoni);
  void addDoubleCheese(Add double_cheese);
  void addPineapple(Add pineapple);
  Pizza build();
  QString Pizza_composition();
};

#endif  // PIZZABUILDER_H
