#include <iostream>
#include <string>
#include <vector>
#include <algorithm> 
#include <cstdlib>
#include <ctime>

using namespace std;

//wyswietlanie tytulu
void playIntro()
{
	cout << "Witaj w grze WISIELEC\n\n" << endl;
}
//losowanie hasla
string randWord()
{
	srand(time(NULL));
	string tab[7] = { "tablica","zeszyt","dziennik","linijka","piwo","plecak","gumka" };
	string word = tab[rand()%6];
	return word;
}
//Wyswietlanie pozostalych prob, placeholderu hasla oraz kategorii
void uInterface(int lives, string placeholder, vector<char> letters)
{	
	cout << "KATEGORIA: PRZEDMIOTY SZKOLNE" << endl;
	cout << "Twoje pozostale proby: " << lives << endl;	
	cout << "Podane litery do tej pory: ";
	for_each(letters.begin(), letters.end(), [](char a) -> void {cout << a << " "; });
	cout << "\nHaslo: ";
	for (int i = 0; i < placeholder.length(); i++) cout << placeholder[i] << " ";
	cout << endl;
}
//glowna funkcja gry
void playGame()
{
	//inicjalizacja danych
	vector<char> letters;	
	string word = randWord();
	string placeholder = "";
	string strzal;
	int lives = 5;
	for (int i = 0; i < word.length(); i++) placeholder += "_";

	//pêtla g³ówna gry
	bool wygrana = 0;
	
	
	do
	{
		system("cls");
		playIntro();
		bool trafienie = 0;
		if (placeholder == word) { system("cls"); cout << "Wygrales! Gratulacje odgadles haslo i pozostalo ci " << lives << " prob!" << endl; break; }
		uInterface(lives,placeholder,letters);
		cin >> strzal;
		cin.clear();

		if (find(letters.begin(), letters.end(), strzal[0]) == letters.end()) letters.push_back(strzal[0]);

		for (int i = 0; i < word.length(); i++)
		{
			if (strzal[0] == word[i])
			{
				placeholder[i] = word[i];
				trafienie = 1;
			}		
		}

		if (!trafienie) lives--;
		if (lives == 0) { system("cls"); cout << "Przegrales! Haslo to: " << word << "! Koniec gry." << endl; break; }
	} 
	while (lives != 0 && !wygrana);	
}
int main()
{
	
	bool nastepna_runda = false;
	char odp;

	do
	{
		playGame();
		cout << "Czy chcesz zagrac jeszcze raz? [T/N] ";
		cin >> odp;
		if (odp == 't' || odp == 'T')
		{
			nastepna_runda = true;
		}

		

	} 
	while (nastepna_runda);
	

	return 0;
}