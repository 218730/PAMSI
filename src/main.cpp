#include "../inc/tablica.hh"
#include "../inc/stoper.hh"
#include "../inc/test.hh"
#include "../inc/lista.hh"
#include "../inc/stos.hh"
#include "../inc/kolejka.hh"
#include "../inc/mergesort.hh"
#include "../inc/asoctab.hh"
#include <numeric>

using namespace std;

int main(int Argc, char ** Argv){
        //srand(time(NULL));
//test tt;

//tt.przygotuj();
//tt.wykonaj();

Test test;
test.Przygotuj();
test.Wykonaj();

/*Kolejka kolejka;

int wielkosc;

cout << "Podaj wielkosc kolejki: ";
cin >> wielkosc;

for(int i=0; i<wielkosc;i++){
	int a = rand()%100;
kolejka.Push(a);}*/

AsocTab asoctab;
asoctab.Add("Przemyslaw");
asoctab.Add("Brzeczyszczykiewicz");

asoctab.PrintTable();

cout << endl;
asoctab.removeItem("Brzeczyszczykiewicz"); //3955x

asoctab.PrintTable();

cout << endl;
return 0;   
}