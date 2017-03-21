#include "Vorcha.h"

Vorcha::Vorcha()
{

}
Vorcha::Vorcha(string n)
:Statek(n,5,4,70)
{

}

double Vorcha::sila_ognia()
{
  return 1* get_liczba_dzialek() + 2.2* get_liczba_wyrzutni();
}
