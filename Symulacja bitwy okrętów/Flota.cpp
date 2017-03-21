#include "Flota.h"
#include "Statek.h"
#include "windows.h"

Flota::Flota()
{

}

Flota::Flota(int l,Statek *t)
:liczba_statkow(l),tab(t)
{

}



Flota::~Flota()
{
    delete tab;
}

void Flota::bitwa(Flota &f)
{
    int j = 0;
    int i = 0;

    while(i != liczba_statkow && j != f.liczba_statkow)
    {
       while (tab[i].walka(f.tab[j]) == false && f.tab[j].walka(tab[i]) == false)
    {
        tab[i].wyswietl();
        Sleep(1000);
        f.tab[j].wyswietl();
        Sleep(1000);
    }

    if(tab[i].get_pancerz() <=0)
    {
        cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxx"<< endl;
        cout << "Statek " << tab[i].get_nazwa() << " pokonany"<< endl;
        cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxx"<< endl<< endl<< endl;
        Sleep(2000);
        i++;


    }
    else if (f.tab[j].get_pancerz() <=0)
    {
      cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxx"<< endl;
      cout << "Statek " << f.tab[j].get_nazwa() << " pokonany"<< endl;
      cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxx"<< endl<< endl<< endl;
      Sleep(2000);
      j++;
    }

    }

    if(tab[liczba_statkow-1].get_pancerz() >0)
    {
        cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxx"<< endl;
        cout << "Wygrywa flota " << tab[0].get_nazwa() << endl;
        cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxx"<< endl;
    }
    else
    {
       cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxx"<< endl;
       cout << "Wygrywa flota " << f.tab[0].get_nazwa() << endl;
       cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxx"<< endl;

    }

}



int Flota::get_liczba_statkow()
{
    return liczba_statkow;
}
