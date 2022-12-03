#include <iostream>
#include "lib.h"
using namespace std;

int main() {

    int n;

    cin >>n;
bool risultato=numero(n);

    if (risultato==true) {
        cout << "numero Primo" << endl;
    }
    
   else {
        cout << "non numero  Primo" << endl;
    } 
    
    
return 0;
}
