#include "pizza.h"
//#include "characteristicsofpizza.h"
Pizza::Pizza(ViewOfDough dough, TypeOfPizza typeOfPizza, bool isWithOlive, bool isWithPinapple, bool isDoubleCheez,
             bool isPepperoni)
{
  this->Dough = dough;
  this->Type = typeOfPizza;
  this->IsWithOlives = isWithOlive;
  this->IsWithPinapple = isWithPinapple;
  this->IsDoubleCheez = isDoubleCheez;
  this->IsPepperoni = isPepperoni;
};

QString Pizza::GetPizzaInformationText()
{
  QString text;
  switch (this->Type)
  {
    case TypeOfPizza::Pepperoni: {
      text += "\"Пепперони\" \n";
      break;
    }
    case TypeOfPizza::FourCheez: {
      text += "\"Четыре сыра\" \n ";
      break;
    }
    case TypeOfPizza::Margarita: {
      text += "\"Маргарита\" \n";
      break;
    }
    case TypeOfPizza::Sea: {
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
