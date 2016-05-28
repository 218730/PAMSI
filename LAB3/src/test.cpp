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
		
S.start();

lista.Search();

S.stop();

//lista.Wypisz();

cout << endl << "Czas dzialania skryptu: " << S.czas_wykonania() << "[ms]" << endl << endl;
}