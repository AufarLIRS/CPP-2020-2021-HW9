#ifndef PIZZA_H
#define PIZZA_
#include <QString>
enum class DoughType
{
  ThinCrust = 0,
  TraditionalCrust = 1
};
enum class PizzaType
{
  Pepperoni = 0,
  Margarita = 1,
  FourCheese = 2,
  SeaPizza = 3
};
enum class Olives
{
  Yes = 0,
  No = 1
};
enum class Pepperoni
{
  Yes = 0,
  No = 1
};
enum class Pineapples
{
  Yes = 0,
  No = 1
};
enum class DoubleCheese
{
  Yes = 0,
  No = 1
};

struct Pizza
{
  class MakePizza
  {
    DoughType doughtype_;
    PizzaType pizzatype_;
    Olives olives_;
    Pepperoni pepperoni_;
    Pineapples pineapples_;
    DoubleCheese doublecheese_;

  public:
    MakePizza& SetDoughType(DoughType doughtype);
    MakePizza& SetPizzaType(PizzaType pizzatype);
    MakePizza& SetOlives(Olives olives);
    MakePizza& SetPepperoni(Pepperoni pepperoni);
    MakePizza& SetPineapples(Pineapples pineapples);
    MakePizza& SetDoubleCheese(DoubleCheese doublecheese);

    Pizza make();
  };

public:
  QString GetResult();

private:
  DoughType doughtype_;
  PizzaType pizzatype_;
  Olives olives_;
  Pepperoni pepperoni_;
  Pineapples pineapples_;
  DoubleCheese doublecheese_;
  Pizza(DoughType doughtype, PizzaType pizzatype, Olives olives, Pepperoni pepperoni, Pineapples pinapples,
        DoubleCheese doublecheese);
};
#endif  // PIZZA_H
