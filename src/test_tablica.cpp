#include "../inc/test_tablica.hh"

void testowa_tablica::przygotuj(){
	unsigned int tmp;
	
	cout << "Podaj rozmiar tablicy, ktory chcesz uzyskac: ";
	cin >> tmp;
	dyn_tab.ustawliczbetestow(tmp);
}

void testowa_tablica::wykonaj(){

S.start();
dyn_tab.dopisz();
S.stop();

dyn_tab.wielkosc();
cout << endl << "Czas dzialania skryptu: " << S.czas_wykonania() << "[ms]" << endl << endl;
}