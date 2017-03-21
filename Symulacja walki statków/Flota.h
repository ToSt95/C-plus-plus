#ifndef FLOTA_H
#define FLOTA_H

#include "Statek.h"

class Flota
{
    int liczba_statkow;
    Statek *tab;


public:
    Flota(int l,Statek *t);
    Flota();
    ~Flota();
    void bitwa(Flota &f);
    Statek get_tab();
    int get_liczba_statkow();
};

#endif
