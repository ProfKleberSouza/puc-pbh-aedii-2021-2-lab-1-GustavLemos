
#include <stdlib.h>
#include <stdio.h>
#include "functions.h"

int main(){

    char frase[200];

    //input frase
    scanf("%[^\n]",&frase);

    inverte(frase);


    return 0;
}
