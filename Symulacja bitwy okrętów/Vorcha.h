#ifndef VORCHA_H
#define VORCHA_H

#include "Statek.h"

using namespace std;

class Vorcha :public Statek
{

public:

    Vorcha();
    Vorcha(string n);
    virtual double sila_ognia();


};

#endif
