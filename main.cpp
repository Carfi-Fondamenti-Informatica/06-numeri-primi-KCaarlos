#include <iostream>
#include "lib.h"
using namespace std;

bool Primo(int numero);

int main() {

    int numero = 0;

    cin >> numero;

    if (Primo(numero)) {
        cout << "numero Primo" << endl;
    }
    
   else {
        cout << "non numero  Primo" << endl;
    } 
return 0;
}
