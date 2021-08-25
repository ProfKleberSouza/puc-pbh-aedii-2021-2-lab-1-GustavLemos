#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"

int main(){

    int nSize = 0;
    int maior,menor;

    //input nSize
    scanf("%d",&nSize);

    int arrayN[nSize];

    // inputs in array
    for(int i = 0; i < nSize; i++){
       scanf("\n%d",&arrayN[i]);
    }

    //process
    menor_maior(arrayN, nSize, &menor, &maior);

    //output
    printf("MENOR = %d\nMAIOR = %d", menor,maior);

    return 0;
}
