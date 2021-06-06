#ifndef PIZZA_H
#define PIZZA_H
#include <QDebug>

enum class TypeOfDough
{
    ThinDough = 0,
    TraditionalDough = 1
};

enum class TypeOfPizza
{
    Pepperoni_Pizza = 0,
    Margarita_Pizza = 1,
    FourCheese_Pizza = 2,
    Sea_Pizza = 3
};

enum class Olives
{
    Yes = 0,
    No = 1
};

enum class Pepperoni
{
    Yes = 0,
    No = 1
};

enum class Pineapples
{
    Yes = 0,
    No = 1
};

enum class DoubleCheese
{
    Yes = 0,
    No = 1
};

struct Pizza
{
    class Builder
    {
        TypeOfDough _doughtype;
        TypeOfPizza _pizzatype;
        Olives _olives;
        Pepperoni _pepperoni;
        DoubleCheese _doublecheese;
        Pineapples _pineapples;

    public:
        Builder& SetTypeOfDough(TypeOfDough doughtype);

        Builder& SetTypeOfPizza(TypeOfPizza pizzatype);

        Builder& SetOlives(Olives olives);

        Builder& SetPepperoni(Pepperoni pepperoni);

        Builder& SetDoubleCheese(DoubleCheese cheese);

        Builder& SetPineapples(Pineapples pineapples);

        Pizza build();
};

public:
    QString GetResult();

private:
    TypeOfDough _doughtype;
    TypeOfPizza _pizzatype;
    Olives _olives;
    Pepperoni _pepperoni;
    DoubleCheese _doublecheese;
    Pineapples _pineapples;
    Pizza(TypeOfDough doughtype, TypeOfPizza pizzatype, Olives olives, Pepperoni pepperoni, DoubleCheese cheese, Pineapples pineapples);
};

#endif  // PIZZA_H
