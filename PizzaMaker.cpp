#include "PizzaMaker.h"

PizzaMaker::PizzaMaker(DoughType doughType,
                       PizzaType pizzaType,
                       Olive olive,
                       Pepperoni pepperoni,
                       DoubleCheese doubleCheese,
                       Pineapple pineapple)
{
    _doughtype = doughType;
    _pizzatype = pizzaType;
    _olive = olive;
    _pepperoni = pepperoni;
    _doublecheese = doubleCheese;
    _pineapple = pineapple;
}


PizzaMaker::Builder& PizzaMaker::Builder::setDoughType(DoughType doughType)
{
    _doughType = doughType;
    return *this;
}

PizzaMaker::Builder& PizzaMaker::Builder::setPizzaType(PizzaType pizzatype)
{
    _pizzaType = pizzatype;
    return *this;
}

PizzaMaker::Builder& PizzaMaker::Builder::setOlive(Olive olive)
{
    _olive = olive;
    return *this;
}

PizzaMaker::Builder& PizzaMaker::Builder::setPepperoni(Pepperoni pepperoni)
{
    _pepperoni = pepperoni;
    return *this;
}

PizzaMaker::Builder& PizzaMaker::Builder::setDoubleCheese(DoubleCheese doubleCheese)
{
    _doubleCheese = doubleCheese;
    return *this;
}

PizzaMaker::Builder& PizzaMaker::Builder::setPineapples(Pineapple pineapple)
{
    _pineapple = pineapple;
    return *this;
}

PizzaMaker PizzaMaker::Builder::build()
{
    return PizzaMaker(_doughType, _pizzaType, _olive, _pepperoni, _doubleCheese, _pineapple);
}


QString PizzaMaker::getResult()
{
    QString stringBuilder;

    switch (_doughtype)
    {
        case DoughType::ThinDough:
            stringBuilder.append("Dough type -> Thin Dough\n");
            break;
        case DoughType::TraditionalDough:
            stringBuilder.append("Dough type -> Traditional Dough\n");
            break;
    }

    switch (_pizzatype)
    {
      case PizzaType::PepperoniPizza:
        stringBuilder.append("Pizza Type -> Pepperoni\n");
        break;
      case PizzaType::MargaritaPizza:
        stringBuilder.append("Pizza Type -> Margarita\n");
        break;
      case PizzaType::FourCheesePizza:
        stringBuilder.append("Pizza Type -> Four Cheese\n");
        break;
      case PizzaType::SeaPizza:
        stringBuilder.append("Pizza Type -> Sea\n");
        break;
    }


    if (_olive == Olive::Yes)
    {
      stringBuilder.append("with olive\n");
    }

    if (_pepperoni == Pepperoni::Yes)
    {
      stringBuilder.append("with Pepperoni\n");
    }

    if (_doublecheese == DoubleCheese::Yes)
    {
      stringBuilder.append("with double cheese\n");
    }

    if (_pineapple == Pineapple::Yes)
    {
      stringBuilder.append("with pineapple\n");
    }

    return stringBuilder;

}
