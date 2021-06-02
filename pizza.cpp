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


  switch (_doughtype)
  {
    case TypeOfDough::ThinDough:
      StringBuilder.append("thin\n");
      break;
    case TypeOfDough::TraditionalDough:
      StringBuilder.append("traditional\n");
      break;
  }

  switch (_pizzatype)
  {
    case TypeOfPizza::Pepperoni_Pizza:
      StringBuilder.append("pepperoni\n");
      break;
    case TypeOfPizza::Margarita_Pizza:
      StringBuilder.append("margarita\n");
      break;
    case TypeOfPizza::FourCheese_Pizza:
      StringBuilder.append("four cheese\n");
      break;
    case TypeOfPizza::Sea_Pizza:
      StringBuilder.append("sea\n");
      break;
  }
  if (_olives == Olives::Yes)
  {
    StringBuilder.append("Olive yes\n");
  }
  if (_olives == Olives::No)
  {
    StringBuilder.append("without olives\n");
  }

  if (_pepperoni == Pepperoni::Yes)
  {
    StringBuilder.append("pepperoni yes\n");
  }
  if (_pepperoni == Pepperoni::No)
  {
    StringBuilder.append("without pepperoni\n");
  }

  if (_doublecheese == DoubleCheese::Yes)
  {
    StringBuilder.append("double cheese yes\n");
  }
  if (_doublecheese == DoubleCheese::No)
  {
    StringBuilder.append("without double chhese\n");
  }

  if (_pineapples == Pineapples::Yes)
  {
    StringBuilder.append("pineapple yes\n");
  }
  if (_pineapples == Pineapples::No)
  {
    StringBuilder.append("without pineapple\n");
  }

  return StringBuilder;
}
