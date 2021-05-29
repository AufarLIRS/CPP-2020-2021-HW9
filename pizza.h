#ifndef PIZZA_H
#define PIZZA_H

#include <string>

namespace PizzaProperties {

enum class Dough
{
    THIN,
    TRADITIONAL
};

enum class TypeOfPizza {
    PEPPERONI,
    MORGARET,
    FOUR_CHEESES,
    MARINE
};

enum class HasOlives {
    YES,
    NO
};

enum class HasPepperoni {
  YES,
  NO
};

enum class HasDoubleCheese {
  YES,
  NO
};

enum class HasPineApples {
  YES,
  NO
};

} //namespace PizzaProperties

using namespace PizzaProperties;

class Pizza
{
private:
    Dough dough;
    TypeOfPizza pizzaType;
    HasOlives olives;
    HasPepperoni pepperoni;
    HasDoubleCheese doubleCheese;
    HasPineApples pineAppeles;

  public:
    class PizzaBuilder
    {
    private:
      Dough dough = Dough::THIN;
      TypeOfPizza pizzaType = TypeOfPizza::PEPPERONI;
      HasOlives olives = HasOlives::NO;
      HasPepperoni pepperoni = HasPepperoni::NO;
      HasDoubleCheese doubleCheese = HasDoubleCheese::NO;
      HasPineApples pineAppeles = HasPineApples::NO;
    public:
      Pizza build();

      Dough getDough() const;
      void setDough(Dough newDough);
      TypeOfPizza getPizzaType() const;
      void setPizzaType(TypeOfPizza newPizzaType);
      HasOlives getOlives() const;
      void setOlives(HasOlives newOlives);
      HasPepperoni getPepperoni() const;
      void setPepperoni(HasPepperoni newPepperoni);
      HasDoubleCheese getDoubleCheese() const;
      void setDoubleCheese(HasDoubleCheese newDoubleCheese);
      HasPineApples getPineAppeles() const;
      void setPineAppeles(HasPineApples newPineAppeles);
    }; // Pizza Builder Class

    std::string to_string();

  private:
    Pizza(PizzaBuilder pizzaBuilder);
}; // Pizza Class

#endif // PIZZA_H
