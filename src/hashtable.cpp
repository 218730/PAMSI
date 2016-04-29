#include "../inc/hashtable.hh"

using namespace std;

unsigned long int HashTable::hash(string ItemKey){
	
	unsigned int value = 0;
	
	for ( unsigned int i = 0; i < ItemKey.length(); i++ ){
	value = value * 7 + ItemKey[i];}
	
	return (value);
}

HashTable::HashTable(){
	tablica = new Lista[ TABLICAPOCZATKOWA ];
}
	
HashTable::~HashTable(){
	delete [] tablica; 
}