#ifndef PIZZA_H
#define PIZZA_H
#include <QString>
enum dough {thin, traditional};
enum typeOfPizza {peperonni, margarita, fourChesse, sea};
enum addOlivki {yesOlivki, noOlivki};
enum addPeperonni {yesPeperonni, noPeperonni};
enum addDoubleChesse {yesChesse, noChesse};
enum addPineapple {yesPineapple, noPineapple};
class pizza
{
public:
pizza(dough testo, typeOfPizza pizza, addOlivki olivki, addPeperonni peperonni, addDoubleChesse chesse, addPineapple pineapple);
QString getTesto();
QString getPizzaPrivate();
QString getOlivki();
QString getChesse();
QString getPeperonniPrivate();
QString getPineapple();

private:
dough testo;
typeOfPizza pizzaPrivate;
addOlivki olivki;
addDoubleChesse chesse;
addPeperonni peperonniPrivate;
addPineapple pineapple;

};

#endif // PIZZA_H
