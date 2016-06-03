#ifndef _SZUKAJGRAFU_HH
#define _SZUKAJGRAFU_HH

#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <iomanip>
#include <climits>

#include "../inc/graf.hh"
#include "../inc/kolejka.hh"

using namespace std;

class SzukajGrafu{
private:
	bool* visited;
	Graf* graf;
	Stos stos;
	Kolejka kolejka;
	
public:
	void BFS_Path(int a, int b, Graf* graf);
	void DFS_Path(int a, int b, Graf* graf);
	bool DFS_REC(int a, int b);
	void BnB_EL_Path(int a, int b, Graf* graf, bool ExtendedList);
	SzukajGrafu();
	~SzukajGrafu();
	
	};

#endif