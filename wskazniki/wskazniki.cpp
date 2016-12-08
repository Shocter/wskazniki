// wskazniki.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

struct baza
{
	string nazwa;
	string dostepnosc;
};

int main()
{
	int size;
	cout << "podaj ile ksiazek chcesz dodac do bazy" << endl;
	cin >> size;
	baza *ksiazka = new baza[size];

	for (int i = 0; i < size; i++)
	{
		cout << "Podaj nazwe ksiazki ktora chcesz dodac." << endl;
		cin >> ksiazka[i].nazwa;
		cout << "Czy ksiazka jest dostepna do wypozyczenia?" << endl;
		cin >> ksiazka[i].dostepnosc;
	}

	cout << "Wypisuje ksiazki ktore zostaly dodane do bazy" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "Nazwa ksiazki" << endl;
		cout << ksiazka[i].nazwa << endl << endl;;
		cout << "Dostepnosc ksiazki" << endl;
		cout << ksiazka[i].dostepnosc << endl << endl << endl;
	}

	delete[] ksiazka;


	system("pause");
    return 0;
}

