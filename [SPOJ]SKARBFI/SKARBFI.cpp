#include <iostream>

using namespace std;

int main()
{
    int tries; //liczba przypadków 
    int direction; //kierunek 
    int steps; //liczba kroków
    int x = 0; 
    int y = 0; 
    int hints;
    int stepsX;
    int stepsY;

    cin >> tries;

    for(int j = 0; j<tries;j++)
    {
        cin >> hints;
        for(int i = 0;i<hints;i++)
        {
            cin >> direction;
            cin >> steps;
	    
	    //aktualizowanie aktualnej pozycji po przez zmienne x,y
            switch(direction)
            {
                case 0:
                    y+=steps;
                    break;
                case 1:
                    y-=steps;
                    break;
                case 2:
                    x-=steps;
                    break;
                case 3:
                    x+=steps;
                    break;
            }

        }

	    //rozpatrywanie ka¿dego przypadku i formatowanie wyœwietlanego wyniku niezbêdne do prawid³owego wyœwietlenia wyniku i zaliczenia zadania na SPOJ

            if(y == 0 && x == 0)
            {
                cout << "studnia" << endl;
            }
            else if(y > 0 && x > 0)
            {
                cout << "0 " << y << endl;
                cout << "3 " << x << endl;
            }
            else if(y > 0 && x < 0)
            {
                cout << "0 " << y << endl;
                cout << "2 " << x * -1 << endl;
            }
            else if(y < 0 && x > 0)
            {
               cout << "1 " << y * -1 << endl;
               cout << "3 " << x << endl;
            }
            else if(y < 0 && x < 0)
            {
               cout << "1 " << y * -1 << endl;
               cout << "2 " << x * -1 << endl;
            }
            else if(y == 0 && x > 0)
            {
               cout << "3 " << x << endl;
            }
            else if(y == 0 &&  x < 0)
            {
                cout << "2 " << x * -1 << endl;
            }
            else if(x == 0 && y < 0)
            {
                cout << "1 " << y * -1 << endl;

            }
            else if(x == 0 && y > 0)
            {
               cout << "0 " << y << endl;

            }

            x = 0;
            y = 0;
    }


    return 0;
}
