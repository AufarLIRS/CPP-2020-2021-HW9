#ifndef PIZZA_H
#define PIZZA_H

#include <iostream>

namespace Pizza_Characteristics
{

  enum class Dough
  {
    DOUGH_THIN,
    DOUGH_TRADITIONAL
  };
  enum class Type
  {
    TYPE_PEPPERONI,
    TYPE_MARGARET,
    TYPE_FOUR_CHEESES,
    TYPE_MARINE
  };
  enum class Bool
  {
    NO,
    YES
  };

}

class Pizza
{
  Pizza_Characteristics::Dough dough_;
  Pizza_Characteristics::Type type_;
  Pizza_Characteristics::Bool olives_;
  Pizza_Characteristics::Bool pepperoni_;
  Pizza_Characteristics::Bool double_cheese_;
  Pizza_Characteristics::Bool pineapples_;

public:
  Pizza(Pizza_Characteristics::Dough dough, Pizza_Characteristics::Type type, Pizza_Characteristics::Bool olives, Pizza_Characteristics::Bool pepperoni, Pizza_Characteristics::Bool double_cheese, Pizza_Characteristics::Bool pineapples);
  std::string to_string();
};

class PizzaBuilder
{
  Pizza_Characteristics::Dough dough_;
  Pizza_Characteristics::Type type_;
  Pizza_Characteristics::Bool olives_;
  Pizza_Characteristics::Bool pepperoni_;
  Pizza_Characteristics::Bool double_cheese_;
  Pizza_Characteristics::Bool pineapples_;

public:
  void setDough(Pizza_Characteristics::Dough dough);
  void setType(Pizza_Characteristics::Type type);
  void setOlives(Pizza_Characteristics::Bool olives);
  void setPepperoni(Pizza_Characteristics::Bool pepperoni);
  void setDoubleCheese(Pizza_Characteristics::Bool double_cheese);
  void setPineapples(Pizza_Characteristics::Bool pineapples);
  Pizza build();
};

#endif  // PIZZA_H
