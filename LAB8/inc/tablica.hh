#ifndef _TABLICA_HH
#define _TABLICA_HH

#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <ctime>

using namespace std;

class Itablica{
public:
	virtual void dopisz() = 0;
	virtual void wyswietlanie() = 0;
	virtual void wielkosc() = 0;
	virtual ~Itablica(){};
	};

class tablica : public Itablica{
private:
		int k; //Liczba kolumn tablicy
		int *tab; //Tablica dynamiczna
		int liczbaEl; //Liczba elementów tablicy
		unsigned int rozmiar;

 
public:    
       tablica(); //Konstruktor
       ~tablica(); //Dekonstruktor
       virtual void wyswietlanie(); //Metoda wyświetlająca tablicę
       virtual void dopisz(); //Metoda powiększająca i dopisująca element do tablicy
       virtual void wielkosc(); //Metoda wypisująca informacje na temat tablicy
	   virtual void ustawliczbetestow(unsigned int t);
};

#endif