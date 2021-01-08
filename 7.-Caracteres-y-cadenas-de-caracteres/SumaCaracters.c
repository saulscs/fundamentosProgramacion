#include <stdio.h>
#include <stdlib.h>

/* Suma y promedio.
El programa, al recibir como datos varias cadenas de caracteres que ➥contienen reales, los suma y obtiene el promedio de los mismos. */

int main(void){
  char c, cad[10];
  int i = 0;
  float sum = 0.0;
  printf("\nDesea ingresar una cadena de caracteres  (S/N)? ");
  scanf(" %c", &c);
  while(c == 'S'){
    printf("Ingresa la cadena de caracteres: ");
    fflush(stdin);
    scanf("%s", cad);
    i++;
    sum= atof(cad);
    printf("Desea ingresar otra cadena de caracteres (S/N)? ");
    scanf("%s", cad);
  }
  printf("\nSuma: %.2f", sum);
  printf("\nPromedio: %.2f", sum/i);
}