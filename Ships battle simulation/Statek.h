#include <iostream>
#include <cstring>

using namespace std;

class Statek

{
private:

    string nazwa;
    int liczba_dzialek;
    int liczba_wyrzutni;
    double pancerz;

public:

    Statek(string n, int liczba_d, int liczba_w, double p);
    string get_nazwa();
    int get_liczba_dzialek();
    int get_liczba_wyrzutni();
    bool walka(Statek &s);
    double get_pancerz();
    virtual double sila_ognia();
    void wyswietl();



};
