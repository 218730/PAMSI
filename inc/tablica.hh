#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <ctime>

using namespace std;

class tablica {

private:    
        int k; //Liczba kolumn tablicy
        int *tab; //Tablica dynamiczna
        int liczbaEl; //Liczba elementów tablicy
 
public:    
       tablica(); //Konstruktor
       ~tablica(); //Dekonstruktor
       void wyswietlanie(); //Metoda wyświetlająca tablicę
       void dopisz(); //Metoda powiększająca i dopisująca element do tablicy
       void wielkosc(); //Metoda wypisująca informacje na temat tablicy
};