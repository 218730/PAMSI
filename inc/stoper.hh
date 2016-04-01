#ifndef _STOPER_HH
#define _STOPER_HH

#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <ctime>
#include "../inc/runIT.hh"

using namespace std;

class IStoper{
	public:
virtual void start() = 0;
virtual void stop() = 0;
virtual long double czas_wykonania() = 0;
virtual ~IStoper(){}
	};
	
class Stoper : public IStoper{
private:
clock_t poczatek, koniec;
long double czas;
	public:
virtual void start();
virtual void stop();
virtual long double czas_wykonania();

};

#endif