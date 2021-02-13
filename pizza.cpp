#include "pizza.h"

enum class ViewOfDough
{
  Thin = 0,
  Traditional = 1
};
enum class ViewOfPizza
{
  Pepperoni = 0,
  Margarita = 1,
  FourCheez = 2,
  Sea = 3
};
Pizza::Pizza(ViewOfDough dough, ViewOfPizza view, bool isWithOlive, bool isWithPinapple, bool isDoubleCheez,
             bool isPepperoni)
{
  this->Dough = dough;
  this->View = view;
  this->IsWithOlives = isWithOlive;
  this->IsWithPinapple = isWithPinapple;
  this->IsDoubleCheez = isDoubleCheez;
  this->IsPepperoni = isPepperoni;
};

QString Pizza::GetPizzaInformationText()
{
  QString text;
  switch (this->View)
  {
    case ViewOfPizza::Pepperoni: {
      text += "\"Пепперони\" \n";
      break;
    }
    case ViewOfPizza::FourCheez: {
      text += "\"Четыре сыра\" \n ";
      break;
    }
    case ViewOfPizza::Margarita: {
      text += "\"Маргарита\" \n";
      break;
    }
    case ViewOfPizza::Sea: {
      text += "\"Морская\" \n";
      break;
    }
  }
  switch (this->Dough)
  {
    case ViewOfDough::Thin: {
      text += "с тонким тестом\n";
      break;
    }
    case ViewOfDough::Traditional: {
      text += "с традиционным тестом\n";
      break;
    }
  }
  if (this->IsDoubleCheez)
  {
    text += "с двойным сыром\n";
  }
  else
  {
    text += "без двойного сыра\n";
  }

  if (this->IsPepperoni)
  {
    text += "с салями \"Пепперони\"\n";
  }
  else
  {
    text += "без салями \"Пепперони\"\n";
  }

  if (this->IsWithOlives)
  {
    text += "с оливками\n";
  }
  else
  {
    text += "без оливок\n";
  }
  if (this->IsWithPinapple)
  {
    text += "с ананасами\n";
  }
  else
  {
    text += "без ананасов\n";
  }
  return text;
}
