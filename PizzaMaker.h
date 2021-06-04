#ifndef PIZZAMAKER_H
#define PIZZAMAKER_H

#include <QString>

enum class DoughType
{
    ThinDough,
    TraditionalDough
};

enum class PizzaType
{
    PepperoniPizza,
    MargaritaPizza,
    FourCheesePizza,
    SeaPizza
};

enum class Olive
{
    No,
    Yes
};

enum class Pepperoni
{
    No,
    Yes
};

enum class Pineapple
{
    No,
    Yes
};

enum class DoubleCheese
{
    No,
    Yes
};


struct PizzaMaker
{
    class Builder
    {
        DoughType _doughType;
        PizzaType _pizzaType;
        Olive _olive;
        Pepperoni _pepperoni;
        DoubleCheese _doubleCheese;
        Pineapple _pineapple;

    public:
        Builder& setDoughType(DoughType doughtype);
        Builder& setPizzaType(PizzaType pizzatype);
        Builder& setOlive(Olive olive);
        Builder& setPepperoni(Pepperoni pepperoni);
        Builder& setDoubleCheese(DoubleCheese cheese);
        Builder& setPineapples(Pineapple pineapple);

        PizzaMaker build();
    };

public:
    QString getResult();

private:

    DoughType _doughtype;
    PizzaType _pizzatype;
    Olive _olive;
    Pepperoni _pepperoni;
    DoubleCheese _doublecheese;
    Pineapple _pineapple;

    PizzaMaker(DoughType doughtype,
               PizzaType pizzatype,
               Olive olives,
               Pepperoni pepperoni,
               DoubleCheese cheese,
               Pineapple pineapple);
};



#endif // PIZZAMAKER_H
