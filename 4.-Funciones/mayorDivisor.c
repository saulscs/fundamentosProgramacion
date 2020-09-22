
/*  Mayor divisor.
El programa, al recibir como dato un número entero positivo, calcula
➥ su mayor divisor. */

#include <stdio.h>

int maydiv(int);    /*Prototipo*/

int main (){
  int NUM,RES;
  printf("Ingrese el numero a validar: ");
  scanf("%d",&NUM);
  RES = maydiv(NUM);
  printf("\nEl mayor divisor de %d es: %d", NUM,RES); 
}

int maydiv(int N1){
  /* Esta función calcula el mayor divisor del número N1. */
  int I = (N1/2); 
  /* El ciclo se mantiene activo mientras (N1 % I) sea distinto de cero.
➥ Cuando el resultado sea 0, se detiene, ya que se habrá encontrado
➥ el mayor divisor de N1. */
  /* I se inicializa con el máximo valor posible que puede ser divisor de N1. */

  while(N1 % I)
    I--;
  return I;
}