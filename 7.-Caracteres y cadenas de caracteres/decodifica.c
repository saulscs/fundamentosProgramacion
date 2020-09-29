/* Decodifica.
El programa decodifica una cadena de caracteres compuesta por números y ➥letras. */

#include <stdio.h>
#include <ctype.h>

void interpreta(char *);

int main(){
  char cad[50];
  printf("\nIngresa la cadena a evaluar: ");
  scanf(" %s", cad);
  interpreta(cad);
}

void interpreta(char *cad){
  int i=0,j,k;
  while(cad[i] != '\0'){
    if(isalpha(cad[i])){
      k=cad[i -1] - 48;
      /* En la variable entera k se almacena el ascii del número —convertido ➥en caracter— que nos interesa, menos 48 que corresponde al ascii ➥del dígito 0. */
      for (j=0; j<k; j++)
        putchar(cad[i]);
    }
  }
  i++;
}