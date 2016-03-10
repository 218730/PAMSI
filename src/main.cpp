#include "../inc/tablica.hh"

using namespace std;

int main(){
        
    tablica t;
    clock_t start,stop;
            
        start=clock();
    t.dopisz();
        stop=clock();

            cout << "Czas dzialania skryptu: " << 1000./CLOCKS_PER_SEC*(stop-start) << "[ms]" << endl << endl;
            t.wielkosc();
    
return 0;   
}