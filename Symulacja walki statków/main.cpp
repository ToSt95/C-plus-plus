#include <iostream>
#include <iostream>
#include <windows.h>

#include "Defiant.h"
#include "Vorcha.h"
#include "Flota.h"

using namespace std;

int main()
{
    Defiant *d1 =  new Defiant("d1");
    Defiant *d2 =  new Defiant("d2");
    Defiant *d3 =  new Defiant("d3");
    Defiant *d4 =  new Defiant("d4");
    Statek* tab2 = new Statek[4];
    tab2[0] = *d1;
    tab2[1] = *d2;
    tab2[2] = *d3;
    tab2[3] = *d4;



    Vorcha *v1= new Vorcha("v1");
    Vorcha *v2= new Vorcha("v2");
    Vorcha *v3= new Vorcha("v3");
    Vorcha *v4= new Vorcha("v4");
    Statek* tab = new  Statek[4];
    tab[0] = *v1;
    tab[1] = *v2;
    tab[2] = *v3;
    tab[3] = *v4;



    Flota f1(4,tab);
    Flota f2(4,tab2);

    f1.bitwa(f2);











    return 0;
}
