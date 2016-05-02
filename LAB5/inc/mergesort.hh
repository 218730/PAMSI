#ifndef _MERGESORT_HH
#define _MERGESORT_HH

#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include "../inc/lista.hh"
#include "../inc/wartosc.hh"

class IMergeSort{
public:
	virtual void Split(int poczatek, int srodek, int koniec) = 0;
	virtual void ListToArray(Lista* lista) = 0;
	virtual void Sort(int poczatek, int koniec) = 0;
	};

class MergeSort : public IMergeSort{
private:
	int *tab;
	int *tymtab;
	int rozmiar;
	
public:
	virtual void Split(int poczatek, int srodek, int koniec);
	virtual void ListToArray(Lista* lista);
	virtual void Sort(int poczatek, int koniec);
	void WypiszTab();
//	int ZwrocRozmiar();
	};
	
#endif