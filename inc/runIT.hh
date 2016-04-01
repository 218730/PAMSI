#ifndef _RUNIT_HH
#define _RUNIT_HH

#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include "../inc/stoper.hh"
#include "../inc/tablica.hh"

using namespace std;

class Irunnable{
public:
	virtual void przygotuj() = 0;
	virtual void wykonaj() = 0;
	virtual ~Irunnable(){}
};
#endif