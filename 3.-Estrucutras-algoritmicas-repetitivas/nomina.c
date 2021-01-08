/* Nómina.
El programa, al recibir los salarios de 15 profesores, obtiene el total de la
➥nómina de la universidad.
I: variable de tipo entero.
SAL y NOM: variables de tipo real. */

/*estructura repetitiva for*/

#include <stdio.h>

int main(void) {
  int I;
  float SAL, NOM;
  NOM = 0;
  for(I=1; I <= 15; I++){
    printf("\nIngresa el salario del profesor %d: ",I);
    scanf("%f", &SAL);

    NOM = NOM + SAL;
  }
  printf("\nLa nomina es: %.2f", NOM);
}