/* Verifica.
El programa, al recibir como datos una cadena de caracteres y una posición específica
en la cadena, determina si el caracter correspondiente es una letra
minúscula. */

#include <stdio.h>
#include <ctype.h>

int main(){
  char p, cad[50];
  int n;
  printf("\nIngresa la cadena de caracteres (maximo 50): ");
  scanf(" %s", cad);
  printf("\nIngrese la posición en la cadena que desea verificar: ");
  scanf("%d", &n);
  if((n>=0) && (n <50)){
    p = cad[n-1];
    if(islower(p))
      printf("\n%c Es una letra minuscula", p);
    else 
      printf("\n%c No es una letra minuscula", p);
  }
  else 
    printf("\nEl valor ingresado de n es incorrecto");
}