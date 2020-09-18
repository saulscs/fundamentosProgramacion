/*Estructura repetitiva a WHILE*/

/* al recibir como datos los pagos efectuados en el último mes, permita obtener la suma
de los mismos. */

#include <stdio.h>

int main(void) {
  float PAG, SPA;
  SPA = 0;

  printf("\nIngresa el primer pago: ");
  scanf("%f", &PAG);

  while(PAG){
    SPA = PAG + SPA;

    printf("\nIngresa el siguiente pago: ");
    scanf("%f", &PAG);

  }
  printf("\nEl total de los pagos es: %.2f", SPA);

}