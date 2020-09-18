/*Estructura repetitiva a do while*/


/* al recibir como datos los salarios de los profesores de una universidad, obtenga tanto la nómina como el promedio de los salarios. */


#include <stdio.h>
#include <math.h>

int main(void) {
  int I = 0;
  float SAL,PRO, NOM = 0;
  
  printf("\nIngresa el salario: ");
  scanf("%f", &SAL);

  do {
    NOM = NOM + SAL;
    I = I +1;
    printf("\nIngresa el salario o 0 para terminar: ");
    scanf("%f",&SAL);
  }

  while(SAL);
    PRO = NOM / I;
    printf("La nomina es: %.2f y el promedio es: %.2f ", NOM,PRO);

  
}