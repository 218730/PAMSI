#include "tablica.hh"

tablica::tablica(){
    k = 10;
    liczbaEl = 0;
    
    tab = new int[k];
    for(int i=0;i<k;i++)
        tab[i] = 0;
}

tablica::~tablica(){
    delete tab;
}

void tablica::wyswietlanie(){
    for(int i=0;i<liczbaEl;i++){
        cout << tab[i] << endl;
    }
}

void tablica::dopisz(int dana)
{
        srand(time(NULL));
    for(int i=0;i<100;i++){
     if(liczbaEl>=k)
       {
            int *TymTab = new int [k]; 
                for(int a=0; a<liczbaEl;a++)    //Przepisywanie tablicy do tab. tymaczasowej
            {
                TymTab[a] = tab[a];
            }

            k += 2; //Ile nowych kolumn tablicy chcemy stworzyć za jednym razem
            tab = new int[k];  //Tworzenie nowej tablicy z nową ilością kolumn

                for(int b=0; b<liczbaEl;b++)
                {
                    tab[b] = TymTab[b];
                }

	tab[i] = dana;
        delete[] TymTab;
        liczbaEl++;
        }
    else
        {
	tab[i]=dana;
        liczbaEl++;
        }
    }
}
