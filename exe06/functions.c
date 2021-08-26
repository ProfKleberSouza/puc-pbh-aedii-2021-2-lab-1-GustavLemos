#include <stdio.h>
#include "functions.h"


int potencia (int x, int n){


    int potencia = 1;
    int cont = 0;

      while (cont != n) {
        potencia = potencia * x;
        cont = cont + 1;
      }


    //output
    return potencia;
}

