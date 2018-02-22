#include <iostream>
#include <string>
#include "srednia.h"
using namespace std;

//--------------------------------------------------------obliczanie sredniej wazonej jednego przedmiotu-------------------------------------------------------------------
double Srednia_wazona::wprowadzanie_ocen()
{
	cout << "ile ocen";
	int liczba_ocen=0, wagaocen=0;
	double *oceny1, suma=0, wynik, oceny, waga;
	oceny1 = new double[liczba_ocen];
	cin>>liczba_ocen;
		
	for (int i = 0; i < liczba_ocen; i++)
	{
		cout << "wprowadz ocene: ";
		cin>>oceny;
		cout << "wprowadz wage: ";
		cin >> waga;
		wagaocen += waga;
		suma += waga * oceny;
		cout << suma<<endl;
	}
	wynik = suma / wagaocen;
	cout << wynik;
	return wynik;
}



/*double Srednia_wazona::liczenie_sredniej()
{

}*/