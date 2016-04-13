#ifndef _STOS_HH
#define _STOS_HH

#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <string>

#include "../inc/lista.hh"

using namespace std;

class IStos
{
public:
	virtual int Pop () = 0;
	virtual void Push(int val) = 0;
	virtual int Size() = 0;
};

class Stos : public IStos
{
private:
	Lista data;
public:
	virtual int Pop ();
	virtual void Push(int val);
	virtual int Size();
};

#endif