#ifndef _LISTA_HH
#define _LISTA_HH

#include <iostream>
#include <stdio.h>
#include <cstdlib>

using namespace std;

class ILista{
	virtual int Add(string Element, int pozycja) = 0;
	virtual void remove(int pozycja) = 0;
	virtual string get(int pozycja) = 0;
	virtual int size() = 0;
};

class Lista{
private:
int wartosc;
Lista *prev;

public:
virtual int Add(string Element, int pozycja);
virtual void remove(int pozycja);
virtual string get();
virtual int size();
Lista(){};
};


#endif