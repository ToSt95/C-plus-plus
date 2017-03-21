#ifndef FLOTA_H
#define FLOTA_H

#include "Statek.h"
#include "Defiant.h"
#include "Vorcha.h"

class Flota
{
    int liczba_statkow;
    Statek *tab;


public:
    Flota(int l,Statek *t);
    Flota();
    ~Flota();
    void bitwa(Flota &f);
    int get_liczba_statkow();
};

#endif
