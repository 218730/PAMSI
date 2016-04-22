#ifndef _DRZEWO_HH
#define _DRZEWO_HH

#include <iostream>
#include <stdio.h>
#include <cstdlib>

class IDrzewo{
public:
	virtual void Dodaj(int element) = 0;
	virtual int Znajdz(int element) = 0;
//	virtual ~Drzewo() = 0;

	};

struct WezelDrzewa{
	WezelDrzewa* prawy;
	WezelDrzewa* lewy;
	char kolor;
	int klucz;
	
	};
	
class Drzewo : public IDrzewo{
private:
	WezelDrzewa wezeldrzewa;
	WezelDrzewa * korzen;
	
public:
	virtual void Dodaj(int element);
	virtual int Znajdz(int element);
	Drzewo();
	~Drzewo();
	};

#endif