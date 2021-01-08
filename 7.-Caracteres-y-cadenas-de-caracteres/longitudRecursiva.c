/* Calcula longitud en forma recursiva.
El programa calcula de manera recursiva la longitud de la cadena sin utilizar
➥la función strlen. */

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
  /* Esta función calcula la longitud de la cadena en forma recursiva. Es ➥importante tener conocimientos tanto de pilas como de recursividad para ➥comprender la solución propuesta, aunque ésta sea muy simple. Observa que ➥mientras no lleguemos al último caracter de la cadena, incrementamos la ➥cuenta en uno y llamamos a la función con el siguiente caracter. */
 if(cadena[0] == '\0')
  return 0;
 else 
  return (1 + cuenta(&cadena[1]));
}