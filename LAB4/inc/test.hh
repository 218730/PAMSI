#ifndef _TESTTAB_HH
#define _TESTTAB_HH

#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <string>
#include <algorithm>
#include "../inc/tablica.hh"
#include "../inc/stoper.hh"
#include "../inc/lista.hh"
#include "../inc/kolejka.hh"
#include "../inc/stos.hh"
#include "../inc/mergesort.hh"
#include "../inc/quicksort.hh"

class ITest{
public:
	virtual void Przygotuj() = 0;
	virtual void Wykonaj() = 0;
};

class Test : public ITest {
private:
	tablica dyn_tab;
	
	Lista lista;
	Stos stos;
	Kolejka kolejka;
	
	MergeSort mergesort;
	QuickSort quicksort;
	
	Stoper S;
	
public:
	virtual void Przygotuj();
	virtual void Wykonaj();
	string RandomString();
	};


#endif