#ifndef PIZZA_H
#define PIZZA_H

#include <iostream>

enum Dough { DOUGH_THIN, DOUGH_TRADITIONAL };
enum Type { TYPE_PEPPERONI, TYPE_MARGARET, TYPE_FOUR_CHEESES, TYPE_MARINE };
enum Bool { NO, YES };

class Pizza
{
    Dough dough_;
    Type type_;
    Bool olives_;
    Bool pepperoni_;
    Bool double_cheese_;
    Bool pineapples_;
public:
    Pizza(Dough dough, Type type, Bool olives, Bool pepperoni, Bool double_cheese, Bool pineapples);
    std::string to_string();
};

class PizzaBuilder
{
    Dough dough_;
    Type type_;
    Bool olives_;
    Bool pepperoni_;
    Bool double_cheese_;
    Bool pineapples_;
public:
    void setDough(Dough dough);
    void setType(Type type);
    void setOlives(Bool olives);
    void setPepperoni(Bool pepperoni);
    void setDoubleCheese(Bool double_cheese);
    void setPineapples(Bool pineapples);
    Pizza build();
};


#endif // PIZZA_H
