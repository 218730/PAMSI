#include "../inc/mergesort.hh"

using namespace std;

void MergeSort::Split(int poczatek, int srodek, int koniec){

int i,j,k;

for(i=poczatek; i<=koniec; i++){
	tymtab[i] = tab[i];
	}

i=poczatek;
j=srodek+1;
k=poczatek;

while (i <= srodek && j <= koniec) tab[k++] = (tymtab[i] < tymtab[j])?  tymtab[i++] : tymtab[j++];
while (i <= srodek) tab[k++] = tymtab[i++];
}



void MergeSort::ListToArray(Lista* lista){
	tab = new int[lista->Size()];
	tymtab = new int[lista->Size()];
	rozmiar = lista->Size();
	
	for(int i=0; i < rozmiar; i++)
	{
	tab[i] = lista->Get(0);
	lista->Remove(0);
	}
	
	Sort(0,rozmiar - 1);
}



void MergeSort::Sort(int poczatek, int koniec){
	int srodek;
	
	if(poczatek<koniec){
		srodek = (poczatek + koniec)/2;
		Sort(poczatek, srodek);
		Sort(srodek+1,koniec);
		Split(poczatek, srodek, koniec);
		}
	
	}
	
void MergeSort::WypiszTab(){
	cout << endl << "Posortowana lista: " << endl;
	for(int i=0;i<rozmiar;i++)
	cout << tab[i] << endl;
	
	}