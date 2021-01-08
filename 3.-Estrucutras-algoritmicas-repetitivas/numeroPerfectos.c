
/* Números perfectos.
El programa, al recibir como dato un número entero positivo como límite, obtiene los números perfectos que hay entre 1 y ese número, y además imprime cuántos números perfectos hay en el intervalo.*/


#include <stdio.h>
#include <math.h>

int main() {
  int I,J,NUM,SUM,C=0;
  printf("\nIngresa el numero limite: ");
  scanf("%d", &NUM);

  for(I=1; I <= NUM; I++){
    SUM = 0;
    for (J = 1; J <= (I / 2); J++)
      if((I%J)== 0)
        SUM += J;
    if(SUM == I){
      printf("\n%d es un numero perfecto", I);
      C++;
    }
  }
  printf("\nEntre 1 y %d hay %d numeros perfectos", NUM, C);
}