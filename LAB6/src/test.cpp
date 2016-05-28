#include "../inc/test.hh"

void Test::Przygotuj(){
			srand(time(NULL));
	//unsigned int tmp;
	
	//tmp = 8;
}



void Test::Wykonaj(){
		srand(time(NULL));
		
							S.start();

/*Drzewo:*/
for(int i = 0; i<20; i++){
	int x = rand()%1000;
drzewo.Dodaj(x);
}
//drzewo.Znajdz(rand()%10);
drzewo.WypiszP();

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