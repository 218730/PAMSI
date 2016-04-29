#include "../inc/quicksort.hh"

using namespace std;

void QuickSort::ListToArray(Lista* lista){
	tab = new int[lista->Size()];
	tymtab = new int[lista->Size()];
	rozmiar = lista->Size();
	
for(int i=0; i < rozmiar; i++)
{
	tab[i] = lista->Get(0);
	lista->Remove(0);
	}
	
	Quicksort(tab, 0, rozmiar-1);
}

/*void QuickSort::Sort(int a[], int poczatek, int koniec){
	
	int pivot;
	
	if(poczatek < koniec)
	{
		pivot = Pivot(a, poczatek, koniec);
		Sort(a, poczatek, pivot-1);
		Sort(a, pivot+1, koniec);
		}
	}*/
	
void QuickSort::Quicksort(int a[], int poczatek, int koniec){
	
	int pivot = a[(poczatek+koniec)/2];
	int i, j, x;
	i = poczatek;
	j = koniec;
	
	do
	{
		while(a[i]<pivot) i++;
		while(a[j]>pivot) j--;
		if(i<=j)
		{
			x = a[i];
			a[i] = a[j];
			a[j] = x;
			i++;
			j--;
			}
		
		}
	while(i<=j);
	
	if(j>poczatek) Quicksort(a,poczatek,j);
	if(i<koniec) Quicksort(a,i,koniec);
	//int p = poczatek;
	//int pivot = a[poczatek];
	
	/*for(int i = poczatek+1; i<=koniec; i++){
	if(a[i] <= pivot){
		p++;
		Swap(a[i], a[p]);
		}
		}
		Swap(a[p], a[poczatek]);
		return p;
*/
}

/*void QuickSort::Swap(int& a, int& b){
	int temp = a;
	a = b;
	b = temp;
	}*/
	
void QuickSort::WypiszTab(){
	cout << "Posortowana lista: " << endl;
	for(int i=0; i<rozmiar; i++){
	cout << tab[i] << endl;}
	}