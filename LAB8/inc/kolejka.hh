#ifndef _KOLEJKA_HH
#define _KOLEJKA_HH

#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <string>

#include "../inc/lista.hh"

using namespace std;

class Ikolejka
{
public:
	virtual int Get() = 0;
	virtual void Push(int val) = 0;
	virtual int Size() = 0;
};

class Kolejka : public Ikolejka
{
private:
	Lista data;
public:
	virtual int Get ();
	virtual void Push (int val);
	virtual int Size ();
	bool Empty();
	int Front();
	void Pop();
};

#endif