#include "pizza.h"

std::string Pizza::to_string()
{
  std::string outStr;
  std::string yes = "есть\n";
  std::string no = "нет\n";

  // dough
  outStr.append("тесто: ");
  if (this->dough == Dough::THIN)
  {
    outStr.append("тонкое\n");
  } else {
    outStr.append("традиционное\n");
  }
  //type of pizza
  outStr.append("вид пиццы: ");
  switch (this->pizzaType) {
    case TypeOfPizza::FOUR_CHEESES:
      outStr.append("четыре сыра\n");
      break;
    case TypeOfPizza::MARINE:
      outStr.append("морская\n");
      break;
    case TypeOfPizza::MORGARET:
      outStr.append("маргарита\n");
      break;
    case TypeOfPizza::PEPPERONI:
      outStr.append("пепперони\n");
      break;
    default:
      outStr.append("error\n");
      break;
  }
  // olives
  outStr.append("оливки: ");
  if (this->olives == HasOlives::YES) {
    outStr.append(yes);
  } else {
    outStr.append(no);
  }
  // pepperoni
  outStr.append("пепперони: ");
  if (this->pepperoni == HasPepperoni::YES) {
    outStr.append(yes);
  } else {
    outStr.append(no);
  }
  // double cheese
  outStr.append("двойной сыр: ");
  if (this->doubleCheese == HasDoubleCheese::YES) {
    outStr.append(yes);
  } else {
    outStr.append(no);
  }
  // pineapples
  outStr.append("ананасы: ");
  if (this->pineAppeles == HasPineApples::YES) {
    outStr.append(yes);
  } else {
    outStr.append(no);
  }
  return outStr;
}

Pizza::Pizza(PizzaBuilder builder)
{
  dough = builder.getDough();
  pizzaType = builder.getPizzaType();
  olives = builder.getOlives();
  pepperoni = builder.getPepperoni();
  doubleCheese = builder.getDoubleCheese();
  pineAppeles = builder.getPineAppeles();
}


Pizza Pizza::PizzaBuilder::build()
{
  return Pizza(*this);
}

Dough Pizza::PizzaBuilder::getDough() const
{
  return dough;
}

void Pizza::PizzaBuilder::setDough(Dough newDough)
{
  dough = newDough;
}

TypeOfPizza Pizza::PizzaBuilder::getPizzaType() const
{
  return pizzaType;
}

void Pizza::PizzaBuilder::setPizzaType(TypeOfPizza newPizzaType)
{
  pizzaType = newPizzaType;
}

HasOlives Pizza::PizzaBuilder::getOlives() const
{
  return olives;
}

void Pizza::PizzaBuilder::setOlives(HasOlives newOlives)
{
  olives = newOlives;
}

HasPepperoni Pizza::PizzaBuilder::getPepperoni() const
{
  return pepperoni;
}

void Pizza::PizzaBuilder::setPepperoni(HasPepperoni newPepperoni)
{
  pepperoni = newPepperoni;
}

HasDoubleCheese Pizza::PizzaBuilder::getDoubleCheese() const
{
  return doubleCheese;
}

void Pizza::PizzaBuilder::setDoubleCheese(HasDoubleCheese newDoubleCheese)
{
  doubleCheese = newDoubleCheese;
}

HasPineApples Pizza::PizzaBuilder::getPineAppeles() const
{
  return pineAppeles;
}

void Pizza::PizzaBuilder::setPineAppeles(HasPineApples newPineAppeles)
{
  pineAppeles = newPineAppeles;
}
