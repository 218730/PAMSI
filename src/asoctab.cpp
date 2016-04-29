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
    unsigned long int index = hashtable.hash( newItem );
	//cout << index;
	int indexmod = index % (dlugosc);
    hashtable.tablica[ indexmod ].Add(0, index);
}

void AsocTab::removeItem( string ItemKey )
{
    unsigned long int index = hashtable.hash( ItemKey );
	int indexmod = index % (dlugosc);
	
	hashtable.tablica[ indexmod ].Remove( hashtable.tablica[indexmod].Search(index) );

}

void AsocTab::PrintTable(){
	for(int i=0; i<dlugosc; i++){
		cout << endl << "Bucket " << i+1 << ": ";
	hashtable.tablica[i].Wypisz();
	}
	
	}