#ifndef _HASHTABLE_HH
#define _HASHTABLE_HH

#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <string>

#include "../inc/lista.hh"

#define TABLICAPOCZATKOWA 10

using namespace std;

class IHashTable{
public:
	virtual int hash(string ItemKey) = 0;
	};

class HashTable : public IHashTable{
private:
	Lista* tablica;
	
public:
	friend class AsocTab;

	HashTable();
	~HashTable();
	virtual int hash(string ItemKey);

	};

#endif