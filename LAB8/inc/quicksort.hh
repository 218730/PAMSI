#ifndef _QUICKSORT_HH
#define _QUICKSORT_HH

#include <iostream>
#include <stdio.h>
#include <cstdlib>

#include "../inc/lista.hh"

class IQuickSort{
	virtual void ListToArray(Lista* lista) = 0;
	virtual void Quicksort(int a[], int poczatek, int koniec) = 0;
	};

class QuickSort : public IQuickSort{
private:
	int* tab;
	int* tymtab;
	int rozmiar;
	
public:
	virtual void ListToArray(Lista* lista);
	virtual void Quicksort(int a[], int poczatek, int koniec);
	void WypiszTab();
	};
#endif