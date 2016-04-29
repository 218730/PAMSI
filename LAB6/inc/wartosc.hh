#ifndef _WARTOSC_HH
#define _WARTOSC_HH

class Wartosc
{
private:
	int wartosc;
	Wartosc* nastepna;
public:
	Wartosc* Z_Nastepny(); //Zwroc
	void U_Nastepny(Wartosc* ); //Ustaw
	void U_Wartosc(int val);
	int Z_Wartosc();
	Wartosc();
	Wartosc(int x);
};

#endif