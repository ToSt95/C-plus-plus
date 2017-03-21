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


    Defiant* tab2 = new Defiant[4];

    tab2[0] = *d1;
    tab2[1] = *d2;
    tab2[2] = *d3;
    tab2[3] = *d4;




    Vorcha *v1= new Vorcha("v1");
    Vorcha *v2= new Vorcha("v2");
    Vorcha *v3= new Vorcha("v3");
    Vorcha *v4= new Vorcha("v4");

    Vorcha* tab = new  Vorcha[4];
    tab[0] = *v1;
    tab[1] = *v2;
    tab[2] = *v3;
    tab[3] = *v4;



    Flota f1(4,tab2);
    Flota f2(4,tab);

    f1.bitwa(f2);



  delete d1;
  delete d2;
  delete d3;
  delete d4;
  delete [] tab;

  delete v1;
  delete v2;
  delete v3;
  delete v4;
  delete [] tab2;






    return 0;
}
