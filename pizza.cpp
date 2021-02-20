#include "pizza.h"
Pizza::Pizza(DoughType doughtype, PizzaType pizzatype, Olives olives, Pepperoni pepperoni, Pineapples pineapples,
             DoubleCheese doublecheese)
{
  doughtype_ = doughtype;
  pizzatype_ = pizzatype;
  olives_ = olives;
  pepperoni_ = pepperoni;
  pineapples_ = pineapples;
  doublecheese_ = doublecheese;
}
Pizza::MakePizza& Pizza::MakePizza::SetDoughType(DoughType doughtype)
{
  doughtype_ = doughtype;
  return *this;
}
Pizza::MakePizza& Pizza::MakePizza::SetPizzaType(PizzaType pizzatype)
{
  pizzatype_ = pizzatype;
  return *this;
}
Pizza::MakePizza& Pizza::MakePizza::SetPepperoni(Pepperoni pepperoni)
{
  pepperoni_ = pepperoni;
  return *this;
}
Pizza::MakePizza& Pizza::MakePizza::SetOlives(Olives olives)
{
  olives_ = olives;
  return *this;
}
Pizza::MakePizza& Pizza::MakePizza::SetDoubleCheese(DoubleCheese doublecheese)
{
  doublecheese_ = doublecheese;
  return *this;
}
Pizza::MakePizza& Pizza::MakePizza::SetPineapples(Pineapples pineapples)
{
  pineapples_ = pineapples;
  return *this;
}
Pizza Pizza::MakePizza::make()
{
  return Pizza(doughtype_, pizzatype_, olives_, pepperoni_, pineapples_, doublecheese_);
}
QString Pizza::GetResult()
{
  QString pizzastr;
  switch (doughtype_)
  {
    case DoughType::ThinCrust:
      pizzastr.append("Тонкое тесто\n");
      break;
    case DoughType::TraditionalCrust:
      pizzastr.append("Традиционное тесто\n");
      break;
    default:
      pizzastr.append("Без теста:)\n");
      break;
  }
  switch (pizzatype_)
  {
    case PizzaType::Pepperoni:
      pizzastr.append("Пепперони\n");
      break;
    case PizzaType::Margarita:
      pizzastr.append("Маргарита\n");
      break;
    case PizzaType::FourCheese:
      pizzastr.append("Четыре сыра\n");
      break;
    case PizzaType::SeaPizza:
      pizzastr.append("Морская пицца\n");
      break;
    default:
      pizzastr.append("Без пиццы:)\n");
      break;
  }
  switch (olives_)
  {
    case Olives::Yes:
      pizzastr.append("с оливками\n");
      break;
    case Olives::No:
      break;
  }
  switch (pepperoni_)
  {
    case Pepperoni::Yes:
      pizzastr.append("с пепперони\n");
      break;
    case Pepperoni::No:
      break;
  }
  switch (doublecheese_)
  {
    case DoubleCheese::Yes:
      pizzastr.append("с двойным сыром\n");
      break;
    case DoubleCheese::No:
      break;
    default:
      break;
  }
  switch (pineapples_)
  {
    case Pineapples::Yes:
      pizzastr.append("с ананасами\n");
      break;
    case Pineapples::No:
      break;
    default:
      break;
  }
  return pizzastr;
}
