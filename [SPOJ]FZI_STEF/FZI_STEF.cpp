#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int tries;                        //ilo�� miast
    vector <long long int> container; //kontener do wczytywania danych
    long long int max_temp, max_sum;
    long long int temp;               //zmienna tymczasowa u�yta do wczytywania element�w do kontenera

    cin >> tries;

    for(int l = 0; l<tries; l++)
    {
       cin >> temp;
       container.push_back(temp);
    }

    max_temp =  0; // zmiena tymczasowa potrzebna do zapisywania aktualnej sumy podzbioru ci�gu
    max_sum = 0; //zmienna przechowuj�ca najwi�kszy podzbi�r max_temp

    //implementacja algorytmu Kedane�a
    for(vector<long long int>::iterator it = container.begin(); it != container.end();it++)
    {
        max_temp = max(*it,max_temp + (*it));   //je�li aktualny element jest wi�kszy od sumy aktualnego elementu i sumy poprzednich to max_temp = aklutalny element - zaczynamy sprawdza� nowy podzbi�r

        max_sum = max(max_sum,max_temp); // je�eli max_temp jest najwi�kszy jaki by� do tej pory to max_sum = max_temp
    }

    if(max_sum <= 0) max_sum = 0; //je�li max_sum <= 0 ustawiamy wynik na 0 - brak mo�liwego zysku

    cout << max_sum << endl;

    return 0;
}
