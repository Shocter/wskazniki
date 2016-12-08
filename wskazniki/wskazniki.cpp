// wskazniki.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int size;
	cout << "podaj rozmiar tablicy" << endl;
	cin >> size;
	int *tab = new int[size];

	cout << "Wpisz dane do tablicy" << endl;
	for (int i = 0; i < size; i++)
		cin >> tab[i];

	cout << "Twoja tablica to" << endl;
	for (int i = 0; i < size; i++)
		cout << tab[i] << endl;

	delete[] tab;
	system("pause");
    return 0;
}

