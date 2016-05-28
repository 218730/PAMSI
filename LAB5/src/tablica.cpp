#include "../inc/tablica.hh"

using namespace std;

tablica::tablica(){
    k = 10;
    liczbaEl = 0;
    
    tab = new int[k];
    for(int i=0;i<k;i++)
        tab[i] = 0;
}

tablica::~tablica(){
    delete [] tab;
}

void tablica::wyswietlanie(){
    for(int i=0;i<liczbaEl;i++){
        cout << tab[i] << endl;
    }
}

void tablica::dopisz()
{
		srand(time(NULL));
		int random = 0;
	
    for(unsigned int i=0;i<this->rozmiar;i++){
                random = rand()%1000;

     if(liczbaEl>=k)
       {
            int * TymTab = new int[k]; 
                for(int a=0; a<liczbaEl;a++)    //Przepisywanie tablicy do tab. tymaczasowej
            {
                TymTab[a] = tab[a];
            }

            k += 1; //Ile nowych kolumn tablicy chcemy stworzyć za jednym razem
			delete [] tab;
            tab = new int[k];  //Tworzenie nowej tablicy z nową ilością kolumn

		for(int b=0; b<liczbaEl;b++){
			tab[b] = TymTab[b];
		}

	tab[i] = random;
        delete [] TymTab;
        liczbaEl++;
        }
    else
        {
	tab[i] = random;
        liczbaEl++;
        }
    }
}

void tablica::wielkosc(){
    cout << "Wielkosc tablicy: " << k << endl;
    cout << "Ilosc elementow:  " << liczbaEl << endl;
}

void tablica::ustawliczbetestow(unsigned int t){
	this->rozmiar = t;
	}

