#include <iostream>
#include <vector>

using namespace std;

class Fan
{
private:

    int sizeM;     //rozmiar macierzy
    int direction; //kierunek wiatraka
    char **matrix; //wska�nik na tablice dwuwymiarow�

    void setSize(int sizeM) //setter sprawdzaj�cy kierunek wiatraka i ustawiaj�cy rozmiar macierzy
    {
        if(sizeM <= 0)
        {
            this->sizeM = sizeM * -1;
            direction = -1;
        }
        else
        {
            this->sizeM = sizeM;
            direction = 1;
        }
    }
    void fill_matrix() // fumlcka wupe�niaj�ca macierz * i . ze wzgl�du na kierynek wiatraka i rozmiar macierzy
    {
        int k,w,p = 0; //zmienne pomocnicze
        int stars = 0; //liczba *
        int n = sizeM,m; //zmienna pomocnicza
        m = n;

        if(direction>0)
        {
            for(int i=1; i<=n; i++) // p�tla wype�niaj�ca macierz symbolami od zewn�trz do wewn�trz
            {
                matrix[i-1][p] = '*'; //rysowanie * w naro�niku
                stars = 0;

                for(w = i; w<=2*n-i - 1; w++) //lewa kolumna
                {
                    if(stars < m-1)
                    {
                        matrix[w][p] = '*';
                        stars++;
                    }
                    else
                    {
                        matrix[w][p] = '.';
                    }
                }
                stars = 0;
                matrix[2*n-i][i-1] = '*'; //rysowanie * w naro�niku

                for(k = i; k<2*n-i; k++) //dolny wiersz
                {
                    if(stars < m-1)
                    {
                        matrix[2*n-i][k] = '*';
                        stars++;
                    }
                    else
                    {
                        matrix[2*n-i][k] = '.';
                    }
                }

                matrix[2*n-i][2*n-i] = '*'; //rysowanie * w naro�niku
                stars = 0;

                for(w = 2*n-i-1; w>=i; w--) //prawa kolumna
                {
                    if(stars < m-1)
                    {
                        matrix[w][2*n-i] = '*';
                        stars++;
                    }
                    else
                    {
                        matrix[w][2*n-i] = '.';
                    }
                }

                matrix[p][2*n-i] = '*'; //rysowanie * w naro�niku
                stars = 0;

                for(k = 2*n-i-1; k>=i; k--) //g�rny wiersz po tej p�tli wyst�puje przeskok do "wewn�trznej macierzy"
                {
                    if(stars < m-1)
                    {
                        matrix[p][k] = '*';
                        stars++;
                    }
                    else
                    {
                        matrix[p][k] = '.';
                    }
                }
                p++;
                m--;
            }
        }
        else
        {
            for(int i=1; i<=n; i++)
            {
                matrix[i-1][p] = '*'; //rysowanie * w naro�niku
                stars = 0;

                for(k = i; k<2*n-i; k++)
                {
                    if(stars < m-1)
                    {
                        matrix[p][k] = '*';
                        stars++;
                    }
                    else
                    {
                        matrix[p][k] = '.';
                    }
                }
                stars = 0;
                matrix[2*n-i][i-1] = '*'; //rysowanie * w naro�niku

                for(w = i; w<2*n-i; w++)
                {
                    if(stars < m-1)
                    {
                        matrix[w][2*n-i] = '*';
                        stars++;
                    }
                    else
                    {
                        matrix[w][2*n-i] = '.';
                    }
                }

                matrix[2*n-i][2*n-i] = '*'; //rysowanie * w naro�niku
                stars = 0;

                for(k = 2*n-i-1; k>=i; k--)
                {
                    if(stars < m-1)
                    {
                        matrix[2*n-i][k] = '*';
                        stars++;
                    }
                    else
                    {
                        matrix[2*n-i][k] = '.';
                    }
                }

                matrix[p][2*n-i] = '*'; //rysowanie * w naro�niku
                stars = 0;

                for(w = 2*n-i-1; w>=i; w--)
                {
                    if(stars < m-1)
                    {
                        matrix[w][p] = '*';
                        stars++;
                    }
                    else
                    {
                        matrix[w][p] = '.';
                    }
                }

                p++;
                m--;
            }
        }
    }
public:
    Fan(int n) //konstruktor parametrowy ustawiaj�cy rozmiar,kierunek, inicializuj�cy tablice dwuwymiarow�
    {
        setSize(n);

        matrix = new char *[2*sizeM];

        for(int i = 0; i<2*sizeM; i++)
        {
            matrix[i] = new char[2*sizeM];
        }
    }
    ~Fan() //destruktor zwalniaj�cy pami��
    {
        for(int i = 0; i<2*sizeM; i++)
        {
            delete [] matrix[2*sizeM];
        }

        delete [] *matrix;
    }
    void print_matrix() //funkcja wy�wietlaj�ca macierz
    {
        this -> fill_matrix();

        for(int i = 0; i<2*sizeM; i++)
        {
            for(int j = 0; j<2*sizeM; j++)
            {
                cout << matrix[i][j];
            }
            cout << endl;
        }
    }
};

int main()
{
    Fan w(-5);  //tworzenie obiektu z parametrem na podstawie kt�rego okre�lany jest kierunek oraz rozmiar macierzy
    w.print_matrix(); //wy�wietlanie macierzy

    return 0;
}
