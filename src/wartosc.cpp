#include "../inc/wartosc.hh"

using namespace std;

Wartosc* Wartosc::Z_Nastepny()
{
	return nastepna;
}
int Wartosc::Z_Wartosc()
{
	return wartosc;
}
void Wartosc::U_Nastepny(Wartosc* ptr)
{
	nastepna = ptr;
}
void Wartosc::U_Wartosc(int val)
{
	wartosc = val;
}

Wartosc::Wartosc(){
	wartosc = 0;
	nastepna = 0;
	}
	
Wartosc::Wartosc(int x){
	wartosc = x;
	nastepna = 0;
	}