/* Calcula longitud.
El programa calcula la longitud de la cadena sin utilizar la función strlen. */

#include <stdio.h>

int cuenta(char *);

int main(){
  int i;
  char cad[50];
  printf("\nIngrese la cadena de caracteres: ");
  scanf("%s", cad);
  i = cuenta(cad);
  printf("\nLongitud de la cadena: %d", i);
}

int cuenta(char *cadena){
  int c =0;
  while (!cadena[c] == '\0')
    c++;
  return (c);
}