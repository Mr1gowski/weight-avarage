#include <iostream>
#include "Nag³ówek.h"
#include <string>
using namespace std;

void Przedmioty::przedmioty()
{
	cout << "ile masz przedmiotow?: ";
	int ile;
	cin >> ile;
	string *nazwa;
	nazwa = new string[ile];
	
	
	
	for (int i = 1; i <= ile; i++)
	{
		cout << "padaj " << i  << "przedmiot: ";
		cin >> nazwa[i];
	}
}



void Oceny::oceny()
{
	
	cout << "podaj ile masz ocen z " ;
}