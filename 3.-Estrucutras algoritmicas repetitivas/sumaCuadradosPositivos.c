/*Estructura repetitiva a WHILE*/


/* al recibir como datos un grupo de números naturales positivos, calcule el cuadrado de estos números. Imprima el cuadrado del número y al final la suma de los
cuadrados. */


#include <stdio.h>
#include <math.h>

int main(void) {
  
  int NUM;
  long CUA, SUC = 0;

  printf("\nIngresa un numero menor a cero para terminar ");
  scanf("%d", &NUM);
  while(NUM){
    CUA = pow(NUM,2);
    SUC = SUC + CUA;
    printf("\nIngresa un numero menor a cero para terminar ");
    scanf("%d", &NUM);
  }
  printf("La suma de los cuadros es: %ld", SUC);

}