#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include<stdbool.h>
#include <ctype.h>

bool is_palindromo(char texto[]){

    bool r = false;
    char inversa[200];
    char aux;
    int valor = 0;

    //Converter a palavra digitada para minúsculas
     for(int i = 0; texto[i]; i++){
        aux = texto[i];
        aux = tolower(aux);
     }

     //Copiar a palavra digitada para que seja invertida
     strcpy(inversa, texto);

     //Inverter a palavra copiada
     strrev(inversa);

     valor = strcmpi(texto, inversa);

     if (valor == 0){
       r = true;
     }
     else{
       r = false;
     }

    return r;

}

