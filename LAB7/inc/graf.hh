#ifndef _GRAF_HH
#define _GRAF_HH

#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include "../inc/lista.hh"
#include "../inc/stos.hh"
#include "../inc/kolejka.hh"

using namespace std;

class IGraf{
public:
	virtual void Dodaj_Wierzcholek(int v) = 0;
	virtual void Dodaj_Krawedzie(int x, int y) = 0;
	virtual void Sasiedzi(int x) = 0;
	virtual void Czy_Polaczone(int x, int y) = 0;
	};

class Graf : public IGraf{
private:
	int rozmiar, *wierzcholki;
	Lista* Lista_Sasiedztwa;
	
public:
	virtual void Dodaj_Wierzcholek(int v);
	virtual void Dodaj_Krawedzie(int x, int y);
	virtual void Sasiedzi(int x);
	virtual void Czy_Polaczone(int x, int y);
	void Wypisz();
	void Wypisz_Wierzcholek(int x);
	int Zwroc_Rozmiar();
	Graf();
	Lista* SasiedziI(int x);
	};

#endif