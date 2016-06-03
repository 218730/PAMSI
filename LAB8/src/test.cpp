#include "../inc/test.hh"

void Test::Przygotuj(){
			srand(time(NULL));
			
graf = new Graf();
szukajgrafu = new SzukajGrafu();
	
for(int i = 0; i<WIELKOSCGRAFU; i++){
	graf->Dodaj_Krawedzie(rand()%WIELKOSCGRAFU, rand()%WIELKOSCGRAFU, rand()%100);
	}
	
	//graf->Dodaj_Krawedzie(1, 3);
	//graf.Dodaj_Wierzcholek(120);
	//	graf.Dodaj_Wierzcholek(130);
}



void Test::Wykonaj(){
		srand(time(NULL));
		
							S.start();

//graf->Czy_Polaczone(1,3);

//graf->Sasiedzi(1);

//cout << endl << endl;

szukajgrafu->BnB_EL_Path(1 ,3, graf, false);
szukajgrafu->BnB_EL_Path(1 ,3, graf, true);

//szukajgrafu->BFS_Path(1, 3, graf);
//szukajgrafu->DFS_Path(1, 3, graf);

							S.stop();

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