#include "../inc/test.hh"

void Test::Przygotuj(){
			srand(time(NULL));
	unsigned int tmp;
	
/*Lista:*/
	   cout << "Podaj rozmiar listy, ktory chcesz uzyskac: ";
	   cin >> tmp;
	
		lista.Fill(tmp);

}

void Test::Wykonaj(){
		srand(time(NULL));

lista.Wypisz();
		
S.start();

//mergesort.ListToArray(&lista);

//quicksort.ListToArray(&lista);

S.stop();

//mergesort.WypiszTab();

//quicksort.WypiszTab();


cout << endl << "Czas dzialania skryptu: " << S.czas_wykonania() << "[ms]" << endl << endl;
}