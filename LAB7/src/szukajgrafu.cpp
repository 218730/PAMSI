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