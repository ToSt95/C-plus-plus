


#include <iostream>
#include <cmath>


using namespace std;



//funkcja odwracaj¹ca liczbê
int reverse_numb(int n)
{

    int LiczbaCyfr = floor( log10(n)+1);
    int k = 0;
    for( int i=0; i<LiczbaCyfr; i++)
    {
             k+=pow(10.0, LiczbaCyfr - 1 - i )*(n%10);
             n=n/10;
    }
    return k;

}
//sprawdzanie czy liczba jest palindromem
bool check_palindrom(int a)
{
    int temp = reverse_numb(a);

    if(a==temp)
        return true;
    else
        return false;
}

//funkcja która szuka nastêpnego palindroma
void find_palindrom(int a)
{
    int licznik = 0;
    while(check_palindrom(a)== false)
    {
        a = a + reverse_numb(a);
        licznik++;
    }

    cout << a <<" " <<licznik << endl;
}

int main()
{

    int i = 0;
    int n;
    int liczba;

    cin >> n;

    while(i<n)
    {
        cin >> liczba;
        find_palindrom(liczba);
        i++;
    }


    return 0;
}
