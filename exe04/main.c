#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"

int main(){

    char frase[200];

    //input frase
    scanf("%[^\n]",&frase);

    numero_vogais(frase);


    return 0;
}
