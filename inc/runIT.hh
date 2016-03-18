#ifndef _RUNIT_HH
#define _RUNIT_HH

#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include "../inc/stoper.hh"

using namespace std;

class Irunnable{
public:
	virtual void przygotuj() = 0;
	virtual void wykonaj() = 0;
	virtual int random() = 0;
};

class runnable : public Irunnable{
private:
	int lrandomowa;

public:
virtual void przygotuj();
virtual void wykonaj();
virtual int random();
Stoper* stoper;
	
	};
	
	#endif