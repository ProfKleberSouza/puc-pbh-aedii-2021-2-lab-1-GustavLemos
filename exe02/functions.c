#include "functions.h"

int menor(int vet[], int n){

    int Menor = 1000000;

    for(int i = 0; i < n; i++){
        if(vet[i] < Menor){
            Menor = vet[i];
        }
    }

    return Menor;
}
