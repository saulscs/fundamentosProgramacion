/* Cuenta letras minúsculas y mayúsculas.
El programa, al recibir como dato una frase, determina el número de letras ➥minúsculas y mayúsculas que existen en la frase. */

#include <stdio.h>
#include <ctype.h>

int main(){
  char cad[50];
  int i =0, mi =0, ma=0;
  printf("\nIngrese la cadena de caracteres (maximo 50 caracteres): ");
  scanf(" %s",cad);
  while(cad[i] != '\0'){
    if(islower(cad[i]))
      mi ++;
    else 
      if(isupper(cad[i]))
        ma++;
    i++;
  }
  printf("\n\nNumero de letras minusculas: %d", mi);
  printf("\n\nNumero de letras mayusculas: %d", ma);
}