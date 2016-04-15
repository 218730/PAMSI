#ifndef _LISTA_HH
#define _LISTA_HH

#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <string>

#include "wartosc.hh"

class Ilista
{
public:
	virtual void Add(int pos, int value) = 0;
	virtual void Remove(int pos) = 0;
	virtual int Get(int pos) = 0;
	virtual int Size() = 0;
};

class Lista : public Ilista
{
private:
	Wartosc* head;
	int size;

public:
	virtual void Add (int pos,int value);
	virtual void Remove (int pos);
	virtual int Get (int pos);
	virtual int Size ();
	void Fill (int n);
	int Search ();
	Lista ();
	void Wypisz();
};

#endif