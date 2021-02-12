#include "pizza.h"

Pizza::Pizza(){

};

Pizza::Pizza(Pizza_dough dough, Pizza_type type, Add olives, Add pepperoni, Add double_cheese, Add pineapple)
{
  this->dough = dough;
  this->type = type;
  this->olives = olives;
  this->pepperoni = pepperoni;
  this->double_cheese = double_cheese;
  this->pineapple = pineapple;
};
