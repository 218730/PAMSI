#include "../inc/drzewo.hh"

using namespace std;

void Drzewo::Znajdz(int x){
	if(korzen == NULL){
		cout << endl << "Drzewo puste!";
		return;
		}
		
		WezelDrzewa *p = korzen;
		int znalezione = 0;
		
		while(p != NULL && znalezione == 0){
			if(p->klucz == x)
				znalezione = 1;
				if(znalezione == 0){
					if(p->klucz < x) p = p->prawy;
					else
						p = p->lewy;
					}
			}
			if(znalezione == 0)
				cout << "Element nie zostal znaleziony.";
				else{
					cout << endl << "\tZnaleziono wezel: ";
					cout << endl << "Klucz: " << p->klucz;
					cout << endl << "Kolor: ";
					if(p->kolor == BLACK)
						cout << "Black";
						else
							cout << "Red";
							if(p->rodzic != NULL)
								cout << endl << "Rodzic: " << p->rodzic->klucz;
								else 
									cout << endl << "Brak rodzica tego wezla.";
									if(p->prawy != NULL)
										cout << endl << "Prawe dziecko: " << p->prawy->klucz;
										else
											cout << endl << "Brak prawego dziecka tego wezla.";
											if(p->lewy != NULL)
												cout << endl << "Lewe dziecko: " << p->lewy->klucz;
												else
													cout << endl << "Brak lewego dziecka tego wezla.";
													cout << endl;
					}
	}
	
void Drzewo::Dodaj(int z){
	int i = 0;
	
	WezelDrzewa *p, *q;
	WezelDrzewa *t = new WezelDrzewa;
	
	t->klucz = z;
	t->lewy = NULL;
	t->prawy = NULL;
	t->kolor = RED;
	
	p = this->korzen;
	q = NULL;
	
	if(korzen == NULL){
		korzen = t;
		t->rodzic = NULL;
		}
	else{
		while(p != NULL){
			q = p;
			if(p->klucz < t->klucz)
				p = p->prawy;
				else
					p = p->lewy;
			}
			t->rodzic = q;
			if(q->klucz < t->klucz)
				q->prawy = t;
				else
					q->lewy = t;
		}
		Drzewo::insertfix(t);
	}
	
void Drzewo::insertfix(WezelDrzewa *t){
	WezelDrzewa *u, *g;
	
		if(korzen == t){
		t->kolor = BLACK;
		return ;
		}
		while(t->rodzic != NULL && t->rodzic->kolor == 'r'){
			g = t->rodzic->rodzic;
			if(t->rodzic == g->lewy){
				if(g->prawy != NULL){
					u = g->prawy;
					if(u->kolor == RED){
						t->rodzic->kolor = BLACK;
						u->kolor = BLACK;
						g->kolor = RED;
						t = g;
						}
					}
					else{
						if(t->rodzic->prawy == t){
							t = t->rodzic;
							leftrotate(t);
							}
							t->rodzic->kolor = BLACK;
							g->kolor = RED;
							rightrotate(g);
						}
				}
		else{
					if(g->lewy != NULL){
						u = g->lewy;
						if(g->lewy->kolor == RED){
							t->rodzic->kolor = BLACK;
							u->kolor = BLACK;
							g->kolor = RED;
							t=g;
							}
						}
						else{
							if(t->rodzic->lewy == t){
								t = t->rodzic;
								rightrotate(t);
								}
								t->rodzic->kolor = BLACK;
								g->kolor = RED;
								leftrotate(g);
							}
					}
				korzen->kolor = BLACK;
			}
	}
	
void Drzewo::leftrotate(WezelDrzewa *p){
	if(p->prawy == NULL)
		return;
		else{
			WezelDrzewa *y = p->prawy;
			if(y->lewy != NULL){
				p->prawy = y->lewy;
				y->lewy->rodzic = p;
				}
				else
					p->prawy = NULL;
					if(p->rodzic != NULL)
						y->rodzic = p->rodzic;
						if(p->rodzic == NULL)
							korzen = y;
							else{
								if(p == p->rodzic->lewy)
									p->rodzic->lewy = y;
									else
										p->rodzic->prawy = y;
								}
								y->lewy = p;
								p->rodzic = y;
			}
	}
	
void Drzewo::rightrotate(WezelDrzewa *p){
	if(p->lewy == NULL)
		return ;
		else{
			WezelDrzewa *y = p->lewy;
			if(y->prawy != NULL){
				p->lewy = y->prawy;
				y->prawy->rodzic = p;
				}
				else
					p->lewy = NULL;
					if(p->rodzic != NULL)
						y->rodzic = p->rodzic;
						if(p->rodzic == NULL)
							korzen = y;
							else{
								if(p == p->rodzic->lewy)
									p->rodzic->lewy = y;
									else
										p->rodzic->prawy = y;
								}
								y->prawy = p;
								p->rodzic = y;
			}
	}
	
void Drzewo::WypiszP(){
	Wypisz(korzen);
	}
	
void Drzewo::Wypisz(WezelDrzewa *k){
	if(korzen == NULL){
		cout << endl << "Drzewo puste." << endl;
		return ;
		}
	if(k != NULL){
		cout << endl << "\tWEZEL: ";
		cout << endl << "Klucz: " << k->klucz;
		cout << endl << "Kolor: ";
		if(k->kolor == BLACK)
			cout << "Black";
			else
				cout << "Red";
				if(k->rodzic != NULL)
					cout << endl << "Rodzic: " << k->rodzic->klucz;
					else
						cout << endl << "Brak rodzica.";
						if(k->prawy != NULL)
							cout << endl << "Prawe dziecko: " << k->prawy->klucz;
							else
								cout << endl << "Brak prawego dziecka.";
								if(k->lewy != NULL)
									cout << endl << "Lewe dziecko: " << k->lewy->klucz;
									else
										cout << endl << "Brak lewego dziecka.";
										cout << endl;
										if(k->lewy){
											cout << endl << "Lewy: "; 
										Wypisz(k->lewy);}
											if(k->prawy){
												cout << endl << "Prawy: "; 
											Wypisz(k->prawy);}
		}
	}
	
Drzewo::Drzewo(){
	korzen = NULL;
	}

Drzewo::~Drzewo(){
	
	}