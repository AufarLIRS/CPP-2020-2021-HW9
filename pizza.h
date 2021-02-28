#ifndef PIZZA_H
#define PIZZA_H
#include <QString>

enum class DoughType
{
    ThinCrust = 0,
    TraditionalCrust = 1
};

enum class PizzaType
{
    Pepperoni = 0,
    Margarita = 1,
    FourCheese = 2,
    SeaPizza = 3
};
enum class Olives
{
    No = 0,
    Yes = 1
};

enum class Pepperoni
{
    No = 0,
    Yes = 1
};

enum class DoubleCheese
{
    No = 0,
    Yes = 1
};

enum class Pineapple
{
    No = 0,
    Yes = 1
};

struct Pizza
{
    class PizzaMaker
    {
        DoughType doughtype_;
        PizzaType pizzatype_;
        Olives olives_;
        Pepperoni pepperoni_;
        Pineapple pineapple_;
        DoubleCheese doublecheese_;

    public:
        PizzaMaker& SetDoughType(DoughType doughtype);
        PizzaMaker& SetPizzaType(PizzaType pizatype);
        PizzaMaker& SetOlives(Olives olives);
        PizzaMaker& SetPepperoni(Pepperoni pepperoni);
        PizzaMaker& SetDoubleCheese(DoubleCheese doublecheese);
        PizzaMaker& SetPineapple(Pineapple pineapple);



        Pizza make();
    };
public:
    QString GetResult();

private:
    DoughType doughtype_;
    PizzaType pizzatype_;
    Olives olives_;
    Pepperoni pepperoni_;
    Pineapple pineapple_;
    DoubleCheese doublecheese_;
    Pizza(DoughType doughtype, PizzaType pizzatype, Olives olives, Pepperoni pepperoni, Pineapple pineapple, DoubleCheese doublecheese);

};

#endif // PIZZA_H
