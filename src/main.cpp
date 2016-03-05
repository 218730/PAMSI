#include "tablica.hh"

int main(){
        srand(time(NULL));
    tablica t;
    clock_t start,stop;

    //t.wyswietlanie();
        
    cout << endl;    
    
    for(int i=0;i<1;i++){
        start=clock();
    t.dopisz(rand()%12);
        stop=clock();
    //t.wyswietlanie();
    
            cout << "Czas dzialania skryptu: " << 1./CLOCKS_PER_SEC*(stop-start) << "[s]" << endl << endl;
    }
return 0;   
}