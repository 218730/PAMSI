#ifndef _ASOCTAB_HH
#define _ASOCTAB_HH

#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <string>

#include "../inc/lista.hh"

using namespace std;

class AsocTab{
private:
	Lista data;
	string name;	
	
public:
	int Size();
	void Add(string name, ,Lista data);
	};

#endif