#include "../inc/tablica.hh"
#include "../inc/stoper.hh"
#include "../inc/test.hh"
#include "../inc/lista.hh"
#include "../inc/stos.hh"
#include "../inc/kolejka.hh"

using namespace std;

int main(int Argc, char ** Argv){
        srand(time(NULL));

Test test;
test.Przygotuj();
test.Wykonaj();

return 0;   
}