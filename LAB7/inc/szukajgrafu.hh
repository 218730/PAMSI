#ifndef _SZUKAJGRAFU_HH
#define _SZUKAJGRAFU_HH

#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <iomanip>

#include "../inc/graf.hh"

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
	SzukajGrafu();
	~SzukajGrafu();
	
	};

#endif