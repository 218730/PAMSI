#include "../inc/test.hh"

void Test::Przygotuj(){
			srand(time(NULL));
	unsigned int tmp;
	
/*Tablica:*/
	
	cout << "Podaj rozmiar tablicy, ktory chcesz uzyskac: ";
	cin >> tmp;
	dyn_tab.ustawliczbetestow(tmp);

}

void Test::Wykonaj(){
		srand(time(NULL));
		
S.start();
dyn_tab.dopisz();
S.stop();

//dyn_tab.wielkosc();

cout << endl << "Czas dzialania skryptu: " << S.czas_wykonania() << "[ms]" << endl << endl;
}