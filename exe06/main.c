#include <stdlib.h>
#include <stdio.h>
#include "functions.h"

int main(){

  int x,n;
  int potenciacao;

  //inputs
  scanf("%d %d", &x, &n);

  potenciacao = potencia(x, n);

  //output
  printf("\n%d",potenciacao);

  return 0;
}
