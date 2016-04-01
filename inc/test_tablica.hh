#ifndef _TESTTAB_HH
#define _TESTTAB_HH

#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include "../inc/tablica.hh"
#include "../inc/runIT.hh"

class testowa_tablica : public Irunnable {
private:
	tablica dyn_tab;
	Stoper S;
	int liczba_testow;
	
public:
	virtual void przygotuj();
	virtual void wykonaj();
	};


#endif