#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"

int main(){

    int result;
    int nSize;

    //inputs
    scanf("%d", &nSize);

    int array[nSize];

    for(int i = 0; i < nSize; i++){
        scanf("\n%d", &array[i]);
    }

    //processament
    result = menor(array, nSize);

    //output
    printf("MENOR = %d\n", result);

    return 0;
}
