/*PARAMETROS POR VALOR */


/* Cubo-3.
El programa calcula el cubo de los 10 primeros números naturales con la
➥ ayuda de una función y utilizando parámetros por valor.*/ 

#include <stdio.h>

int cubo(int); /*Prototipo de la función | El parametro es tipo entero*/

int main(void){
  int I;
  for (I = 1; I <= 10; I++){
    printf("\nEl cubo de I es: %d,", cubo(I));
    /*La llamada a la función cubo. El paso de parametro es pro valor*/
  }
}

int cubo(int K){ /* K es un parámetro por valor de tipo entero. */
  /* La función calcula el cubo del parámetro K. */
  return (K*K*K);
}