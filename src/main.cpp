#include "../inc/tablica.hh"
#include "../inc/stoper.hh"
#include "../inc/runIT.hh"

using namespace std;

int main(){
        
    tablica t;
	Stoper stoper;
            
stoper.start();
    t.dopisz();
stoper.stop();

            cout << "Czas dzialania skryptu: " << stoper.czas_wykonania() << "[ms]" << endl << endl;
            t.wielkosc();
return 0;   
}