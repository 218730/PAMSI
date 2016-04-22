#include "../inc/asoctab.hh"
#include "../inc/wartosc.hh"
#include <numeric>

using namespace std;

AsocTab::AsocTab(){
	dlugosc = TABLICAPOCZATKOWA;
}

AsocTab::~AsocTab(){
	}

void AsocTab::Add( string newItem )
{
    int index = hashtable.hash( newItem );
	int indexmod = index % (dlugosc-1);
    hashtable.tablica[ indexmod ].Add(hashtable.tablica[indexmod].Size(), index);
}

void AsocTab::removeItem( string ItemKey )
{
    int index = hashtable.hash( ItemKey );
	int indexmod = index % (dlugosc-1);
	
	hashtable.tablica[ indexmod ].Remove( hashtable.tablica[indexmod].Search(index) );

}

void AsocTab::PrintTable(){
	for(int i=0; i<dlugosc; i++){
		cout << endl << "Bucket " << i+1 << ": ";
	hashtable.tablica[i].Wypisz();
	}
	
	}