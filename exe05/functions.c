#include <stdio.h>
#include "functions.h"
#include <string.h>

void inverte(char texto[]){

    char invert[50];
    int i = 0;
    int j = 0;

    for(i = (strlen(texto) - 1); i >= 0; i--) {
        invert[j] = texto[i];
        j++;
    }

    invert[j] = 0;

    //output
    printf("\n%s", invert);
}

