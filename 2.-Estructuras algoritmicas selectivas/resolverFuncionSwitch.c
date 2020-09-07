/*Programa que al recibir
como datos dos variables de tipo entero, obtenga el resultado de la siguiente función*/

#include <stdio.h>
#include <math.h>


int main (){
  int OP,T;
  float RES;

  printf("\nIngresa la opcion del calculo y valor entero: ");
  scanf("%d %d", &OP,&T);

  switch(OP){
    case 1: RES = T / 5;
        break;
    case 2: RES = pow(T,T);
        break;
    case 3:
    case 4: RES = 6 * T/2;
        break;
    default: RES = 1;
        break; 
  }
  printf("\n Resultado es: %7.2f", RES);
}