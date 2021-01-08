/*Programa qeue al recibir como dato un número entero, determine e imprima si el mismo es par, impar o nulo.*/

#include <stdio.h>
#include <math.h>


int main (){
  int NUM;
  printf("\nIngresa el numero a validar: ");
  scanf("%d", &NUM);

  if (NUM == 0){
    printf("\nNulo");
  } else {
    if( pow(-1,NUM)>0 ){
      printf("\nPar");
    } else {
      printf("\nImpar");
    }
  }
}