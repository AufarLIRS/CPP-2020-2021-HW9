#include "pizza.h"
#include <QString>


pizza::pizza(dough testo, typeOfPizza pizzaPrivate, addOlivki olivki, addPeperonni peperonniPrivate, addDoubleChesse chesse, addPineapple pineapple)
{
  this->testo = testo;
    this->pizzaPrivate = pizzaPrivate;
    this->olivki = olivki;
    this->peperonniPrivate = peperonniPrivate;
    this->chesse = chesse;
    this->pineapple = pineapple;

}
QString pizza::getTesto() {
    switch(testo) {
        case 0:
        return "thin";
        case 1:
        return "traditional";
        default:
        return "";
    }
}
QString pizza::getPizzaPrivate() {
    switch(pizzaPrivate) {
        case 0:
        return "margarita";
        case 1:
        return "peperonni";
        case 2:
        return "sea";
        case 3:
        return "fourChesse";
        default:
        return "";
    }
}
QString pizza::getOlivki() {
    switch(olivki) {
        case 0:
        return "yesOlivki";
        case 1:
        return "noOlivki";
        default:
        return "";
    }
}
QString pizza::getChesse() {
    switch(chesse) {
        case 0:
        return "yesChesse";
        case 1:
        return "noChesse";
        default:
        return "";
    }
}
QString pizza::getPeperonniPrivate() {
    switch(peperonniPrivate) {
        case 0:
        return "yesPeperonni";
        case 1:
        return "noPeperonni";
        default:
        return "";
    }
}
QString pizza::getPineapple() {
    switch(pineapple) {
        case 0:
        return "yesPineapple";
        case 1:
        return "noPineapple";
        default:
        return "";
    }
}
