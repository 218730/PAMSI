#include "../inc/stoper.hh"

using namespace std;

void Stoper::start(){
poczatek = clock();
}

void Stoper::stop(){
koniec = clock();
}

long double Stoper::czas_wykonania(){
czas = koniec - poczatek; //[s]
return czas/1000; //[ms]
}