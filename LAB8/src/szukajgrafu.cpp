#include "../inc/szukajgrafu.hh"

SzukajGrafu::SzukajGrafu(){
	visited = new bool[WIELKOSCGRAFU];
	
	for(int i = 0; i<WIELKOSCGRAFU; i++){
		visited[i] = false;
		}
	}

SzukajGrafu::~SzukajGrafu(){
	delete [] visited;
	}
	
void SzukajGrafu::BnB_EL_Path(int a, int b, Graf* graf, bool ExtendedList){
	int naj_dystans = INT_MAX;
	int rozwiniecia = 0;
	int nastepna = 0;
	int aktualna = 0;
	int dys = 0;
	
	Kolejka Wartosc_Dys;
	Kolejka Aktualna_K;
	Kolejka Nastepna_K;
	
	Nastepna_K.Push(a);
	Aktualna_K.Push(a);
	Wartosc_Dys.Push(0);
	
	while(Aktualna_K.Size()){  //Czy mozna dalej?
		nastepna = Nastepna_K.Get();
		dys = Wartosc_Dys.Get(); 
		aktualna = Aktualna_K.Get();
		
		for(int i = 0; i< graf->Zwroc_Rozmiar(); i++){
			if(graf->Zwroc_Dystans(nastepna, i) > 0 && i != aktualna && dys < naj_dystans){
					rozwiniecia++;
					Nastepna_K.Push(i);
					Wartosc_Dys.Push(dys + graf->Zwroc_Dystans(i, nastepna));
					Aktualna_K.Push(nastepna);
					
					if(i == b && (dys + (graf->Zwroc_Dystans(i, nastepna)) < naj_dystans)){
						naj_dystans = dys + graf->Zwroc_Dystans(i, nastepna);
						//break;
					}
					if(i != b && ExtendedList == true){
						graf->Dodaj_Krawedzie(nastepna, i, 0);
						graf->Dodaj_Krawedzie(i, nastepna, 0);
						}
				}
			}
		}
		cout << "Liczba rozwiniec: " << rozwiniecia << endl;
		if(rozwiniecia>0 && naj_dystans != INT_MAX)
		cout << "Przebyty dystans z punktu A do B: " << naj_dystans << endl;
}

bool SzukajGrafu::DFS_REC(int a, int b){
	visited[a] = true;
	stos.Push(a);
	
	if(a == b){
cout << "Znaleziono: " << endl;
return true;
	}
	
	for(int i = 0; i < graf->SasiedziI(a)->Size(); i++){
		if(!visited[graf->SasiedziI(a)->Get(i)] && DFS_REC(graf->SasiedziI(a)->Get(i),b)) return true;
		}
		
		stos.Pop();
		return false;
	}
	
void SzukajGrafu::DFS_Path(int a, int b, Graf* graf){
	this->graf=graf;
	
	if(!DFS_REC(a,b)) cout << "Brak polaczenia.";
	else
		while(!stos.Empty()){
			cout << " " << setw(5) << stos.Top();
			stos.Pop();
			}
			
			cout << endl;
	}
	
void SzukajGrafu::BFS_Path(int a, int b, Graf* graf){
	this->graf=graf;
	
	bool found;
	int *Tab_S, v;
	
	Tab_S = new int[WIELKOSCGRAFU];
	Tab_S[a] = -1;
	
	kolejka.Push(a);
	visited[a] = true;
	
	found = false;
	
	while(!kolejka.Empty()){
		v = kolejka.Front();
		kolejka.Pop();
		
		if(v == b){
			found = true;
			break;
			}
		
	
	for(int i = 0; i<graf->SasiedziI(v)->Size();i++){
	
		int u = graf->SasiedziI(v)->Get(i);
		if(!visited[u]){
			Tab_S[u] = v;
			kolejka.Push(u);
			visited[u] = true;
			}
		}
	}
	
	if(!found) cout << "Brak polaczenia.";
	else
		while(v > -1){
			cout << " " << setw(5) << v;
			v = Tab_S[v];
			}
	delete [] Tab_S;
	}