#include "../inc/test.hh"

void Test::Przygotuj(){
			srand(time(NULL));
	unsigned int tmp;
	
/*Tablica:
	
	cout << "Podaj rozmiar tablicy, ktory chcesz uzyskac: ";
	cin >> tmp;
	dyn_tab.ustawliczbetestow(tmp);*/
	
/*Lista:
	   cout << "Podaj rozmiar listy, ktory chcesz uzyskac: ";
	   cin >> tmp;
	   
	   Lista:*/
	   tmp = 8;
	   //string wyraz;
	   
	//for(unsigned int i=0; i<tmp; i++){
		//wyraz += RandomString();}
		
		//srand(time(NULL));
		//lista.Fill(tmp);
	
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

//for(int i = 0; i<1000000; i++){
//	int x = rand()%100000;
//drzewo.Dodaj(x);
//}

}

void Test::Wykonaj(){
		srand(time(NULL));
		
S.start();

/*Drzewo:*/
for(int i = 0; i<20; i++){
	int x = rand()%1000;
drzewo.Dodaj(x);
}
//drzewo.Znajdz(rand()%100);
drzewo.WypiszP();

/*Tablica Asocjacyjna:*/
/*for(unsigned int j=0; j<10; j++){
	string wyraz;
		
		wyraz = RandomString();
		//plik >> wyraz;
		
//		cout << wyraz << ";";
		asoctab.Add(wyraz);
}*/

//dyn_tab.dopisz();
//lista.Search();

//lista.Wypisz();
//lista.Merge_Sort();
//lista.Wypisz();

//mergesort.ListToArray(&lista);
//mergesort.WypiszTab();

//quicksort.ListToArray(&lista);
//quicksort.WypiszTab();
S.stop();

//asoctab.PrintTable();

//stos.Wypisz();
//lista.Wypisz();

//dyn_tab.wielkosc();

/*S1.start();
for(unsigned int j=0; j<10; j++){
	string wyraz;

		wyraz = RandomString();
}
S1.stop();*/

cout << endl << "Czas dzialania skryptu: " << S.czas_wykonania() << "[ms]" << endl << endl;
}

string Test::RandomString(){
	
	size_t length = rand()%7+3;
	
		auto randchar = []() -> char
		{
		const char alphanum[] =
"0123456789"
"!@#$%^&*"
"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
"abcdefghijklmnopqrstuvwxyz";

	const size_t stringLength = sizeof(alphanum) - 1;
	
		return alphanum[rand() % stringLength];
};
		
		string str(length,0);
		generate_n( str.begin(), length, randchar );
		return str;
	}