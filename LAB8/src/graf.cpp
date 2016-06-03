#include "../inc/graf.hh"

void Graf::Dodaj_Wierzcholek(int v){
		wierzcholki[rozmiar] = v;
		Lista_Sasiedztwa[rozmiar-1].Add(0,v);
		rozmiar++;
		
	}
	
void Graf::Dodaj_Krawedzie(int x, int y, int dystans){
	//wierzcholki[xxx] = x;
	//xxx++;
	//wierzcholki[xxx] = y;
	//xxx++;
	
	Lista_Sasiedztwa[x].Add(0,y);
	Lista_Sasiedztwa[y].Add(0,x);
	
	m_dystansu[x][y] = dystans;
	m_dystansu[y][x] = dystans;
	}
	
void Graf::Sasiedzi(int x){
	if(Lista_Sasiedztwa[x].Size() > 0){
		cout << endl << "Sasiedzi wierzcholka " << x << ": ";
	for(int i=0; i<Lista_Sasiedztwa[x].Size(); i++){
		cout << Lista_Sasiedztwa[x].Get(i) << " ";
		}
	}
	else
		cout << endl << "Wierzcholek " << x+1 << " nie ma sasiadow.";
	}
	
Lista* Graf::SasiedziI(int x){
	return &Lista_Sasiedztwa[x];
	}
	
void Graf::Czy_Polaczone(int x, int y){
	int i = 0;
	for(; i < Lista_Sasiedztwa[x].Size(); i++){
		if(Lista_Sasiedztwa[x].Get(i) == y){
			cout << endl << "Te dwa wierzcholki (" << x << " i " << y << ")" << " sa bezposrednio polaczone.";
			return;}
		else if( i+1 >= Lista_Sasiedztwa[x].Size() ){
			cout << endl << "Te dwa wierzcholki (" << x << " i " << y << ")" << " nie sa bezposrednio polaczone.";
			}
		}
			if(Lista_Sasiedztwa[x].Size() == 0 || Lista_Sasiedztwa[x].Size() < 0){
				cout << endl << "Brak wierzcholka " << x << ".";
			}
	}
	
void Graf::Wypisz(){
	for(int i = 0; i < rozmiar; i++){
		cout << "Wierzcholek " << i << ": ";
		for(int j = 0; j<Lista_Sasiedztwa[i].Size(); j++){
		cout << Lista_Sasiedztwa[i].Get(j) << " ";
		}
		cout << endl;
	}
}
	
Graf::Graf(){
	rozmiar = WIELKOSCGRAFU;
	wierzcholki = new int[rozmiar+1];
	Lista_Sasiedztwa = new Lista[rozmiar+1];
	m_dystansu = new int*[rozmiar+1];
	for(int i=0; i<rozmiar;i++){
		m_dystansu[i] = new int[rozmiar+1];
		}
	for(int i=0; i<rozmiar; i++){
		for(int j=0; j<rozmiar; j++){
			m_dystansu[i][j] = 0;
			}
		}
	}
	
void Graf::Wypisz_Wierzcholek(int x){
	for(int i = 0; i<Lista_Sasiedztwa[x].Size(); i++)
		cout << Lista_Sasiedztwa[x].Get(i) << " ";
	}
	
int Graf::Zwroc_Rozmiar(){
	return rozmiar;
	}
	
int Graf::Zwroc_Dystans(int x, int y){
	int tmp = m_dystansu[x][y];
	return tmp;
}