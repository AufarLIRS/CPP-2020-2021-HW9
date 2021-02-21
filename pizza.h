#ifndef PIZZA_H
#define PIZZA_H
#include <QApplication>
#include <iostream>

enum class Dough  //не ставил в отдельный namespace, тк как не дает изящно использовать в радиобаттонах
{
  THIN,
  TRADITIONAL
};

enum class Type
{
  PEPPERONI,
  MARGARITA,
  FOURCHEESES,
  SEA,
};
enum class Add
{
  YES,
  NO
};

class Pizza
{
  Dough dough;
  Type type;
  Add olives;
  Add pepperoni;
  Add double_cheese;
  Add pineapple;

public:
  Pizza()=delete;
  explicit Pizza(Dough dough, Type type, Add olives, Add pepperoni, Add double_cheese, Add pineapple);
};

#endif  // PIZZA_H
