/*Programa para convertir de acres a hectarea*/

#include <stdio.h>


int main (){
  float ECA;

  printf("Ingresa la extension de la estancia: ");
  scanf("%f",&ECA);

  ECA = (ECA * 4047) / 10000;

  printf("\n La extension en hectareas es : %5.2f", ECA);
}