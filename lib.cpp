#include "lib.h"

bool numero(int n) {
    int i=1,x=0;

    if(n>1)
        do{
            i++;
           x=n%i;
          }while(x);
    if(i==n){

        return true;


    }
    else{
        return false;
    }
}
