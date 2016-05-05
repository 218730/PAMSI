#ifndef _DRZEWO_HH
#define _DRZEWO_HH

#include <iostream>
#include <stdio.h>
#include <cstdlib>

//#define BLACK false
//#define RED true

class IDrzewo{
public:
	virtual void Dodaj(int x) = 0;
	virtual void Znajdz(int z) = 0;

	};

struct WezelDrzewa{
	WezelDrzewa* rodzic;
	WezelDrzewa* prawy;
	WezelDrzewa* lewy;
	char kolor;
	int klucz;
	
	};
	
class Drzewo : public IDrzewo{
private:
	WezelDrzewa* korzen;
	WezelDrzewa koniec;
	
public:
	virtual void Dodaj(int x);
	//void insertfix(WezelDrzewa* t);
	void leftrotate(WezelDrzewa *t);
	void rightrotate(WezelDrzewa *t);
	void WypiszP();
	void Wypisz(WezelDrzewa *k);
	virtual void Znajdz(int z);
	void Delete(WezelDrzewa *p);
	Drzewo();
	~Drzewo();
	};

#endif