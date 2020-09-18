/*Estructura repetitiva a WHILE*/

/* programa en C que, al recibir como datos N números enteros, obtenga solamente la suma de los números
positivos. */

#include <stdio.h>

int main(void) {
  int I, SUM,NUM,N;

  SUM = 0;

  printf("\nIngresa el numero de datos: ");
  scanf("%d",&N);

  for (I=1; I<=N; I++){
    printf("\nIngresa el dato %d: ", I);
    scanf("%d", &NUM);
    if (NUM > 0){
      SUM = SUM + NUM;
    }
  }
  printf("\nLa suma es %d:\t", SUM);
}