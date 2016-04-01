#ifndef _STOS_HH
#define _STOS_HH

#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include "Lista.hh"

using namespace std;

class IStos{
public:
	
	virtual int size() = 0;
	virtual void push(string element) =0;
	virtual string pop() = 0;
	};
	
	
	
class Stos : public IStos{
private:
	int wielkosc;
	Lista dana;
public:
	virtual int size();
	virtual void push(string element);
	virtual string pop();
	
	};



#endif