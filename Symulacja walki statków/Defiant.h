#ifndef DEFIANT_H
#define DEFIANT_H

#include "Statek.h"

using namespace std;

class Defiant :public Statek
{

public:
    Defiant(string n);
    Defiant();
    virtual double sila_ognia();

};

#endif
