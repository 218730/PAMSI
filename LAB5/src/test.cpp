#include "../inc/test.hh"

void Test::Przygotuj(){
			srand(time(NULL));

/*Tablica Asocjacyjna:*/
for(unsigned int j=0; j<1000000; j++){
	string wyraz;
		
		wyraz = RandomString();
		
//		cout << wyraz << ";";
		asoctab.Add(wyraz);
}

}

void Test::Wykonaj(){
		srand(time(NULL));
		
string wyraz = RandomString();
cout << endl << "Usuniety wyraz: " << wyraz;
		
S.start();

asoctab.removeItem(wyraz);

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