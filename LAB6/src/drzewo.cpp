#include "../inc/drzewo.hh"

using namespace std;

void Drzewo::Znajdz(int x){
	if(korzen == NULL){
		cout << endl << "Drzewo puste!";
		return;
		}
		
		WezelDrzewa *p = korzen;
		int znalezione = 0;
		
		while(p != &koniec && znalezione == 0){
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
					if(p->kolor == 'b')
						cout << "Black";
						else
							cout << "Red";
							if(p->rodzic != &koniec && p->rodzic != NULL)
								cout << endl << "Rodzic: " << p->rodzic->klucz;
								else 
									cout << endl << "Brak rodzica tego wezla.";
									if(p->prawy != &koniec && p->prawy != NULL)
										cout << endl << "Prawe dziecko: " << p->prawy->klucz;
										else
											cout << endl << "Brak prawego dziecka tego wezla.";
											if(p->lewy != &koniec && p->lewy != NULL)
												cout << endl << "Lewe dziecko: " << p->lewy->klucz;
												else
													cout << endl << "Brak lewego dziecka tego wezla.";
													cout << endl;
					}
	}
	
void Drzewo::Dodaj(int z){
	
	WezelDrzewa *p, *q, *y;
	WezelDrzewa *t = new WezelDrzewa;
	
	t->klucz = z;
	t->lewy = &koniec;
	t->prawy = &koniec;
	t->rodzic = korzen;
		
	if(t->rodzic == &koniec){
		korzen = t;
		}
		else
			while(true){
				if(z < t->rodzic->klucz){
					if(t->rodzic->lewy == &koniec){
						t->rodzic->lewy = t;
						break;
						}
						t->rodzic = t->rodzic->lewy;
					}
					else{
						if(t->rodzic->prawy == &koniec){
							t->rodzic->prawy = t;
							break;
							}
							t->rodzic = t->rodzic->prawy;
						}
				}
				
t->kolor = 'r';

while((t != korzen) && (t != NULL) && (t->rodzic != NULL) && (t->rodzic->rodzic != NULL) && (t->rodzic->kolor == 'r')){
			if(t->rodzic == t->rodzic->rodzic->lewy){
				y = t->rodzic->rodzic->prawy;
				
				if(y != NULL && y->kolor == 'r'){
					t->rodzic->kolor = 'b';
					y->kolor = 'b';
					t->rodzic->rodzic->kolor = 'r';
					t = t->rodzic->rodzic;
					}
					else if(t == t->rodzic->prawy){
						t = t->rodzic;
						leftrotate(t);
						}
						t->rodzic->kolor = 'b';
						t->rodzic->rodzic->kolor = 'r';
						rightrotate(t->rodzic->rodzic);
						break;
				}
				else{
					y = t->rodzic->rodzic->lewy;
					if(y!= NULL && y->kolor == 'r'){
						t->rodzic->kolor = 'b';
						y->kolor = 'b';
						t->rodzic->rodzic->kolor = 'r';
						t = t->rodzic->rodzic;
						}
						else{
							if(t == t->rodzic->lewy){
								t = t->rodzic;
								rightrotate(t);
								}
								t->rodzic->kolor = 'b';
								t->rodzic->rodzic->kolor = 'r';
								leftrotate(t->rodzic->rodzic);
								break;
					}
			}
	}
korzen->kolor = 'b';
}
	
void Drzewo::leftrotate(WezelDrzewa *t){
  WezelDrzewa *x, *y;

y = t->prawy;
if(y != &koniec){
	x = t->rodzic;
	t->prawy = y->lewy;
if(t->prawy != &koniec) t->prawy->rodzic = t;

	y->lewy = t;
	y->rodzic = x;
	t->rodzic = y;

	if(x != &koniec){
		if(x->lewy == t) x->lewy = y; else x->prawy = y;
	}
	else korzen = y;
	}
}

void Drzewo::rightrotate(WezelDrzewa *t){
  WezelDrzewa *x, *y;

y = t->lewy;
if(y != &koniec){
	x = t->rodzic;
	t->lewy = y->prawy;
	if(t->lewy != &koniec) t->lewy->rodzic = t;

	y->prawy = t;
	y->rodzic = x;
	t->rodzic = y;

	if(x != &koniec){
		if(x->lewy == t) x->lewy = y; else x->prawy = y;
	}
	else korzen = y;
	}
}

void Drzewo::WypiszP(){
	Wypisz(korzen);
	}
	
void Drzewo::Wypisz(WezelDrzewa *k){
	if(korzen == &koniec || korzen == NULL){
		cout << endl << "Drzewo puste." << endl;
		return ;
		}
	if(k != &koniec && k != NULL){
		cout << endl << "\tWEZEL: ";
		cout << endl << "Klucz: " << k->klucz;
		cout << endl << "Kolor: ";
		if(k->kolor == 'b')
			cout << "Black";
			else if(k->kolor == 'r')
				cout << "Red";
				else cout << "Brak danych.";
				if(k->rodzic != &koniec && k->rodzic != NULL)
					cout << endl << "Rodzic: " << k->rodzic->klucz;
					else
						cout << endl << "Brak rodzica.";
						if(k->prawy != &koniec && k->prawy != NULL)
							cout << endl << "Prawe dziecko: " << k->prawy->klucz;
							else
								cout << endl << "Brak prawego dziecka.";
								if(k->lewy != &koniec && k->lewy != NULL)
									cout << endl << "Lewe dziecko: " << k->lewy->klucz;
									else
										cout << endl << "Brak lewego dziecka.";
										cout << endl;
										if(k->lewy && k->lewy != &koniec){
											cout << endl << "Lewy: "; 
										Wypisz(k->lewy);}
											if(k->prawy && k->prawy != &koniec){
												cout << endl << "Prawy: "; 
											Wypisz(k->prawy);}
		}
	}
	
void Drzewo::Delete(WezelDrzewa *t){
	
if(t != &koniec){
	Delete(t->lewy);
	Delete(t->prawy);
	delete t;
	}
}
	
Drzewo::Drzewo(){
	korzen = &koniec;
	koniec.kolor = 'r';
	koniec.lewy = &koniec;
	koniec.prawy = &koniec;
	koniec.rodzic = &koniec;
	}

Drzewo::~Drzewo(){
	Delete(korzen);
}