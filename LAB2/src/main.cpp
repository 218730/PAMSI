#include "../inc/tablica.hh"
#include "../inc/stoper.hh"
#include "../inc/test.hh"

using namespace std;

int main(int Argc, char ** Argv){
        srand(time(NULL));

Test test;
test.Przygotuj();
test.Wykonaj();

return 0;   
}