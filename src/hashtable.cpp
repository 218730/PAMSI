#include "../inc/hashtable.hh"

using namespace std;

int HashTable::hash(string ItemKey){
	
	int value = 0;
	for ( unsigned int i = 0; i < ItemKey.length(); i++ ){
	value += ItemKey[i];
	}
	//cout << "xxx" << value << "xxx" ;
	return (value);
}

HashTable::HashTable(){
	tablica = new Lista[ TABLICAPOCZATKOWA ];
}
	
HashTable::~HashTable(){
	delete [] tablica; 
}