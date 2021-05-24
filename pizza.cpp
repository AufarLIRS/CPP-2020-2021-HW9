#include "pizza.h"

Pizza::Pizza(TypeOfDough doughtype, TypeOfPizza pizzatype, Olives olives, Pepperoni pepperoni,
             DoubleCheese doublecheese, Pineapples pineapples)
{
  _doughtype = doughtype;
  _pepperoni = pepperoni;
  _doublecheese = doublecheese;
  _pineapples = pineapples;
  _olives = olives;
  _pizzatype = pizzatype;
}

Pizza::Builder& Pizza::Builder::SetTypeOfDough(TypeOfDough doughtype)
{
  _doughtype = doughtype;
  return *this;
}

Pizza::Builder& Pizza::Builder::SetPepperoni(Pepperoni pepperoni)
{
  _pepperoni = pepperoni;
  return *this;
}

Pizza::Builder& Pizza::Builder::SetDoubleCheese(DoubleCheese doublecheese)
{
  _doublecheese = doublecheese;
  return *this;
}

Pizza::Builder& Pizza::Builder::SetPineapples(Pineapples pineapples)
{
  _pineapples = pineapples;
  return *this;
}

Pizza::Builder& Pizza::Builder::SetTypeOfPizza(TypeOfPizza pizzatype)
{
  _pizzatype = pizzatype;
  return *this;
}

Pizza::Builder& Pizza::Builder::SetOlives(Olives olives)
{
  _olives = olives;
  return *this;
}

Pizza Pizza::Builder::build()
{
  return Pizza(_doughtype, _pizzatype, _olives, _pepperoni, _doublecheese, _pineapples);
}

QString Pizza::GetResult()
{
  QString StringBuilder;

  // Выбор теста для пиццы
  switch (_doughtype)
  {
    case TypeOfDough::ThinDough:
      StringBuilder.append("Пицца на тонком тесте\n");
      break;
    case TypeOfDough::TraditionalDough:
      StringBuilder.append("Пицца на традиционном тесте\n");
      break;
  }

  // Выбор типа пиццы
  switch (_pizzatype)
  {
    case TypeOfPizza::Pepperoni_Pizza:
      StringBuilder.append("Вид пиццы: Пепперони\n");
      break;
    case TypeOfPizza::Margarita_Pizza:
      StringBuilder.append("Вид пиццы: Маргарита\n");
      break;
    case TypeOfPizza::FourCheese_Pizza:
      StringBuilder.append("Вид пиццы: Четыре сыра\n");
      break;
    case TypeOfPizza::Sea_Pizza:
      StringBuilder.append("Вид пиццы: Морская\n");
      break;
  }

  // Дополнительные параметры пиццы
  if (_olives == Olives::Yes)
  {
    StringBuilder.append("Вместе с оливками\n");
  }

  if (_pepperoni == Pepperoni::Yes)
  {
    StringBuilder.append("Вместе с пепперони\n");
  }

  if (_doublecheese == DoubleCheese::Yes)
  {
    StringBuilder.append("Вместе с двойным сыром\n");
  }

  if (_pineapples == Pineapples::Yes)
  {
    StringBuilder.append("Вместе с ананасами\n");
  }

  return StringBuilder;
}
