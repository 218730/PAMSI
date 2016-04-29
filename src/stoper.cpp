#include "../inc/stoper.hh"

using namespace std;

void Stoper::start(){
poczatek = clock();
}

void Stoper::stop(){
koniec = clock();
}

long double Stoper::czas_wykonania(){
czas = ((float)(koniec - poczatek))/CLOCKS_PER_SEC; //[s]
return czas*1000; //[ms]
}