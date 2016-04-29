#ifndef _ASOCTAB_HH
#define _ASOCTAB_HH

#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <string>

#include "../inc/lista.hh"
#include "../inc/hashtable.hh"

using namespace std;

class IAsocTab{
public:
	virtual void Add(string newItem) = 0;
	virtual void removeItem(string ItemKey) = 0;
	virtual void PrintTable() = 0;
	};

class AsocTab : public IAsocTab{
private:
	HashTable hashtable;
	int dlugosc;
	
public:
	AsocTab();
	~AsocTab();
	virtual void Add(string newItem);
	virtual void removeItem(string ItemKey);
	virtual void PrintTable();
	};

#endif