#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <time.h>
#include "Statek.h"

Statek::Statek(string n, int liczba_d, int liczba_w, double p)
:nazwa(n), liczba_dzialek(liczba_d), liczba_wyrzutni(liczba_w), pancerz(p)
{

}
Statek::Statek()
{

}
string Statek::get_nazwa()
{
    return nazwa;
}
int Statek::get_liczba_dzialek()
{
    return liczba_dzialek;
}

int Statek::get_liczba_wyrzutni()
{
    return liczba_wyrzutni;
}
double Statek::get_pancerz()
{
    return pancerz;
}

void Statek::wyswietl()
{
    cout << "Nazwa statku: "<< nazwa << endl;
    cout << "Sila ognia: "<< sila_ognia() << endl;
    cout << "Pancerz: "<< pancerz << endl;
    cout << "-----------------------------"<< endl;

}

 bool Statek::walka(Statek &s)
 {
     srand (time(NULL));

     this->pancerz -= s.sila_ognia() *1;

     if(this->pancerz <= 0)
     {
         return true;
     }

     else
     {
         return false;
     }
 }

 double Statek::sila_ognia()
 {
       return 1* get_liczba_dzialek() + 2* get_liczba_wyrzutni();

 }



