/*PARAMETROS POR REFERENCIA */


#include <stdio.h>

int f1(int *);

int main(){
  int I, K = 4;
  for(I =1; I <= 3; I++){
    printf("\nEl valor de k antes  de llamar a la función: %d", ++K);
    printf("\n El valor de k despues de llamar a la función: %d", f1(&K));
    /*Llamada a la función f1. Se pasa la dirección de la variable K, por medio del operador de dirección: &*/
  }
}

int f1(int *R){
  /*La función f1 recibe un parametro por referencia. Cada vez que el parametro se utiliza en la función debe ir prediciendo el operador de indirección */

 return *R += *R;
}