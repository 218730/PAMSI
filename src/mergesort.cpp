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


/*
void MergeSort::Split(Lista& l1, Lista& l2){
	bool s = false;
	p1 = l1.ZwrocHead();
	p2 = l2.ZwrocHead();
	
	while(lista.ZwrocHead()){
		if(s)
		{
			p2 = p2->Z_Nastepny();
			}
			else{
				p1 = p1->Z_Nastepny();
				}
				*lista.ZwrocHead() = *lista.ZwrocNastHead();
			s = !s;
		}
		//p1->Z_Nastepny() = p2->Z_Nastepny() = 0;
		l1.Remove(0);
		l2.Remove(0);
	}
	
void MergeSort::Merge(Lista& l1, Lista& l2){
	Wartosc* p;
	
	p=lista.ZwrocHead();
	
	while(l1.ZwrocHead() && l2.ZwrocHead())
	{
		if(l1.ZwrocHead()->Z_Wartosc() > l2.ZwrocHead()->Z_Wartosc()){
			p->U_Nastepny(l2.ZwrocHead());
			//l2.ZwrocHead() = l2.ZwrocHead()->Z_Nastepny();
			l2.UstawHead(l2.ZwrocHead()->Z_Nastepny());
		}
		else
			{
			p->U_Nastepny(l1.ZwrocHead());
			//l1.ZwrocHead() = l1.ZwrocHead()->Z_Nastepny();
			l1.UstawHead(l1.ZwrocHead()->Z_Nastepny());
			}
			p = p->Z_Nastepny();
		}
	while(l1.ZwrocHead())
	{
		p->U_Nastepny(l1.ZwrocHead());
		//l1.ZwrocHead() = l1.ZwrocHead()->Z_Nastepny();
		l1.UstawHead(l1.ZwrocHead()->Z_Nastepny());
		p = p->Z_Nastepny();
		}
		while(l2.ZwrocHead())
			{
				p->U_Nastepny(l2.ZwrocHead());
				//l2.ZwrocHead() = l2.ZwrocHead()->Z_Nastepny();
				l2.UstawHead(l2.ZwrocHead()->Z_Nastepny());
				p= p->Z_Nastepny();
				}
	}*/

/*void MergeSort::Sort(){
	Lista h1, h2;
	
if(lista.ZwrocHead() && lista.ZwrocNastHead()){
	Split(h1,h2);
	
	Sort();
	Sort();
	Merge(h1,h2);
	}
}*/