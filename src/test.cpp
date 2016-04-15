#include "../inc/test.hh"

void Test::Przygotuj(){
	unsigned int tmp;
	
/*Tablica:
	
	cout << "Podaj rozmiar tablicy, ktory chcesz uzyskac: ";
	cin >> tmp;
	dyn_tab.ustawliczbetestow(tmp);*/
	
/*Lista:
	   cout << "Podaj rozmiar listy, ktory chcesz uzyskac: ";
	   cin >> tmp;
	   
	   Lista:*/
	   tmp = 100000000;
	   srand(time(NULL));
	   //Lista* l;
	lista.Fill(tmp);
	
	/*for(int i=0; i<tmp; i++){
		int a=rand()%10;
		lista.Add(i,a);
		}*/
	
/*Stos
stos.Push(2);
stos.Push(3);
stos.Push(4);
stos.Push(5);
stos.Push(6);*/
}

void Test::Wykonaj(){

S.start();
//dyn_tab.dopisz();
//lista.Search();
//mergesort.ListToArray(&lista);
//mergesort.WypiszTab();
quicksort.ListToArray(&lista);
//quicksort.WypiszTab();
S.stop();

//stos.Wypisz();
//lista.Wypisz();

//mergesort.ListToArray(&lista);
//mergesort.WypiszTab();

//quicksort.ListToArray(&lista);
//quicksort.WypiszTab();

//dyn_tab.wielkosc();
cout << endl << "Czas dzialania skryptu: " << S.czas_wykonania() << "[ms]" << endl << endl;
}