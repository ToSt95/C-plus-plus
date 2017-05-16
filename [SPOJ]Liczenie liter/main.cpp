#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <map>

using namespace std;

int main()
{
    int n;
    string tekst;

    cin >> n;
    cin.clear();
    cin.ignore();

    map < char, int > litery;

    for(int i = 65;i<=90;i++)
    {
        litery[i] = 0;
    }

    for(int i = 97;i<=122;i++)
    {
        litery[i] = 0;
    }

    for(int g = 0; g<n; g++)
    {
        getline(cin,tekst);
        for(int i = 0; i<tekst.length();i++)
    {
      char x = tekst[i];

      if(x != ' ')
      {
          litery.at(x) += 1;
      }
    }

    for(map< char, int >::reverse_iterator it = litery.rbegin(); it != litery.rend();it++)
    {
        if(it->second != 0)
        cout << it->first << " " << it->second << endl;
    }

    for(int i = 65;i<=90;i++)
    {
        litery[i] = 0;
    }

    for(int i = 97;i<=122;i++)
    {
        litery[i] = 0;
    }

    }





    return 0;
}
