#include "../inc/test.hh"

void Test::Przygotuj(){
	unsigned int tmp;
	
	//Tablica:
	
/*	cout << "Podaj rozmiar tablicy, ktory chcesz uzyskac: ";
	cin >> tmp;
	dyn_tab.ustawliczbetestow(tmp);*/
	
	//Lista:
	cout << "Podaj rozmiar listy, ktory chcesz uzyskac: ";
	cin >> tmp;
	lista.Fill(tmp);
}

void Test::Wykonaj(){

S.start();
//dyn_tab.dopisz();
lista.Search();
S.stop();

//dyn_tab.wielkosc();
lista.Size();
cout << endl << "Czas dzialania skryptu: " << S.czas_wykonania() << "[ms]" << endl << endl;
}