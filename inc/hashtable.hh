#ifndef _HASHTABLE_HH
#define _HASHTABLE_HH

#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <string>

#include "../inc/lista.hh"

class HashTable{
private:
	int key;
	int value;
	
public:
	HashTable(int key, int value);
	int GetKey;
	int GetValue;
	};

#endif