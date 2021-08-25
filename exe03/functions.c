#include "functions.h"

void menor_maior(int v[], int n, int *menor, int *maior){

    int aux = 0;

    *maior = aux;

    //operations
    for(int j = 0; j < n ; j++){
        if(v[j] > *maior){
            *maior = v[j];
            }
    }

    *menor = *maior;

    for(int k = 0; k < n ; k++){
        if(v[k] < *menor){
            *menor = v[k];
            }
    }

}

