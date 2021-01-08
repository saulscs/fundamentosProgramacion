/* Cuenta-números.
El programa, al recibir como datos un arreglo unidimensional de tipo
➥entero y un número entero, determina cuántas veces se encuentra el
➥número en el arreglo. */


#include <stdio.h>

int main() {
  int I,NUM, CUE = 0;
  int ARRE [100];
  
  for(I=0; I < 100; I++){
    printf("Ingresa el elemento %d del arreglo: ",I+1);
    scanf("%d", &ARRE[I]);
  }
  printf("Ingresa el numero que va a buscar el arreglo: ");
  scanf("%d", &NUM);

  for(I=0; I < 100; I++){
    if(ARRE[I] == NUM)
      CUE++;
  }
  printf("El numero %d se eencuentra %d en el arreglo", NUM,CUE);
}