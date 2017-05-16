#include <iostream>
#include <math.h>
//
using namespace std;

bool spr_psl(long long int x)
{
    //sprawdzanie d³ugoœci PESELU
    if((int)(log10(x)+1) != 11)
    return false;


    int wynik_sumy = 0;

    //petla g³ówna, sprawdzam poprawnoœæ przez mno¿enie kolejnych cyfr przez 1/3/7/9 i sumowaniu
    for(int i = 1; i<=11 ; i++)
    {
        switch(i)
        {
        case 1:

            wynik_sumy += x/pow(10,10);



            break;
        case 2:
            wynik_sumy += (int)(x/pow(10,9))%10 *3;

            break;
        case 3:
             wynik_sumy += (int)(x/pow(10,8))%10 *7;



            break;
        case 4:
             wynik_sumy += (int)(x/pow(10,7)) %10*9;

            break;

        case 5:
             wynik_sumy += (int)(x/pow(10,6))%10;

            break;

        case 6:
             wynik_sumy += (int)(x/pow(10,5))%10*3;


            break;

        case 7:
             wynik_sumy += (int)(x/pow(10,4))%10*7;


            break;

        case 8:
             wynik_sumy += (int)(x/pow(10,3))%10*9;


            break;

        case 9:
             wynik_sumy += (int)(x/pow(10,2))%10;


            break;

        case 10:


             wynik_sumy += (int)((x/10)%10)*3;


            break;

        case 11:
            wynik_sumy += x % 10;


            break;



        default:
            return 'false';
            break;

        }


    }

        if(wynik_sumy > 0 && wynik_sumy % 10 == 0 )
        {
            return 'true';
        }
        else
        {
            return 'false';
        }




}

int main()
{
    long long int x;
    int n;
    cout << "Podaj liczbe sprawdzanych PESEL: ";
    cin >> n;

    for(int i = 0;i<n;i++)
    {
        cout << "Podaj nr PESEL: ";
        cin >> x;
        if(spr_psl(x))
        cout << "POPRAWNY" << endl;
        else
        cout << "BLEDNY" << endl;

    }

    return 0;
}
