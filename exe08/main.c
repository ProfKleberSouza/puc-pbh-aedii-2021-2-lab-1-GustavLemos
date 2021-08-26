#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include<stdbool.h>
#include "functions.h"


int main() {

    int valor = 0;
    char palavra[200];
    bool check = false ;

    //input
    gets(palavra);

    check = is_palindromo(palavra);

    if(check == true){
        printf("SIM");
    }else {
        printf("NAO");
    }


 return 0;
}
