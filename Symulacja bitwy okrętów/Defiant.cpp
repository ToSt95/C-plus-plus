#include "Defiant.h"


Defiant::Defiant(string n)
:Statek(n,4,4,100)
{

}
Defiant::Defiant()
{

}

double Defiant::sila_ognia()
{
  return 1.2* get_liczba_dzialek() + 1.8* get_liczba_wyrzutni();
}
