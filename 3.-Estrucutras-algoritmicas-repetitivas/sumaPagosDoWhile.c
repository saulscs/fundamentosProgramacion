/*Estructura repetitiva a do while*/


/* Supongamos que debemos obtener la suma de los pagos realizados en el último mes, pero no sabemos exactamente cuántos fueron. */


#include <stdio.h>
#include <math.h>

int main(void) {
  
  float PAG,SPA = 0;

  printf("\nIngresa el primer pago: ");
  scanf("%f", &PAG);

  do {
    SPA = SPA + PAG;
    printf("n\Ingresa el siguiente pago o 0 para terminar: ");
    scanf("%f", &PAG);
  } 
  while(PAG);e
  printf("\nEl total es: %.2f", SPA);
}