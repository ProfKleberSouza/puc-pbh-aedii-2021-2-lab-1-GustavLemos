#include <stdlib.h>
#include <stdio.h>
#include "functions.h"

int main(){

  int x,y;
  int result;

  //inputs
  scanf("%d %d", &x, &y);

  result = mdc(x, y);

  //output
  printf("\nMDC = %d",result);

  return 0;
}
