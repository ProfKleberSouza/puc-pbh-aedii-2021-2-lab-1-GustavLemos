#include <stdio.h>
#include "functions.h"

void numero_vogais(char texto[]){

    int contA = 0;
    int contE = 0;
    int contI = 0;
    int contO = 0;
    int contU = 0;
    char aux;

    //process
    for(int i=0; texto[i] != '\0'; i++){

            aux = texto[i];

            if((aux =='A')||(aux =='a')){
                contA++;
            }
            else if((aux =='e')||(aux =='E')){
                contE++;
            }
            else if((aux =='i')||(aux =='I')){
                contI++;
            }
            else if((aux =='o')||(aux =='O')){
                contO++;
            }
            else if((aux =='u')||(aux =='U')){
                contU++;
            }


        }

    //output
    printf("\nA = %d\nE = %d\nI = %d\nO = %d\nU = %d ", contA,contE,contI,contO,contU);
}

