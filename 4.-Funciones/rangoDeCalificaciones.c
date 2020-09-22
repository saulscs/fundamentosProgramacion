/* Rango de calificaciones.
El programa, al recibir como dato una serie de calificaciones,obtiene el rango en el que se encuentran.*/

#include <stdio.h>

void rango(int); /*Prototipo*/

/* Variables globales de tipo entero. */

int RA1 = 0;
int RA2 = 0;
int RA3 = 0;
int RA4 = 0;
int RA5 = 0;

void main(){
  float CAL;
  printf("\nIngresa la primera califiacion del alumno: ");
  scanf("%f", &CAL);
  while( CAL != -1){
    /* Llamada a la función Rango. Se pasa un parámetro por valor. */
    rango(CAL);
    printf("Ingresa la siguiente califiacion el alumno: ");
    scanf("%f", &CAL); 
  }
  printf("\n0..3.99 = %d", RA1);
  printf("\n4..5.99 = %d", RA2);
  printf("\n6..7.99 = %d", RA3);
  printf("\n8..8.99 = %d", RA4);
  printf("\n9..10   = %d", RA5);

}

void rango(int VAL){
  /* La función incrementa una variable dependiendo del valor del  parámetro VAL. */
  if(VAL < 4)
    RA1++;
  else 
    if(VAL < 6)
      RA2++;
    else
      if(VAL < 8)
        RA3++;
        else
          if(VAL < 9)
            RA4++;
            else
              RA5++;
}
