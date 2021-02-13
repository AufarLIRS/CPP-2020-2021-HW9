#include "pizzabuilder.h"

PizzaBuilder* PizzaBuilder::setDough(ViewOfDough view)
{
    this->Dough = view;
    return this;
};
PizzaBuilder* PizzaBuilder::setView(ViewOfPizza view)
{
    this->View = view;
    return this;
};
PizzaBuilder* PizzaBuilder::setIsWithOlives(bool isNeed)
{
    this->IsWithOlives = isNeed;
    return this;
};
PizzaBuilder* PizzaBuilder::setIsWithPinapple(bool isNeed)
{
    this->IsWithPinapple = isNeed;
    return this;
};
PizzaBuilder* PizzaBuilder::setIsDoubleCheez(bool isNeed)
{
    this->IsDoubleCheez = isNeed;
    return this;
};
PizzaBuilder* PizzaBuilder::setIsPepperoni(bool isNeed)
{
    this->IsPepperoni = isNeed;
    return this;
};
Pizza PizzaBuilder::Build()
{
    return Pizza(this->Dough, this->View, this->IsWithOlives, this->IsWithPinapple, this->IsDoubleCheez, this->IsPepperoni);
};

PizzaBuilder::PizzaBuilder()
{
}
