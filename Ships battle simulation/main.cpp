#include <iostream>
#include <iostream>
#include <windows.h>
#include "Statek.h"

using namespace std;

int main()
{
    Statek s1("s1",10,10,100);
    Statek s2("s2",10,10,100);

    while(s1.walka(s2) != true && s2.walka(s1) != true)
    {
        Sleep(2000);
        s1.wyswietl();
        Sleep(1000);
        s2.wyswietl();
        Sleep(1000);
    }
    return 0;
}
