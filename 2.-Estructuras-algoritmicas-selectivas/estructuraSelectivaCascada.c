/*Programa que al recibir como datos las ventas de tres vendedores de una tienda de discos, escriba las mismas en forma descendente. Considera que todas las ventas son diferentes
y no utilices operadores lógicos para agrupar las condiciones..*/

#include <stdio.h>
#include <math.h>


int main (){
  float P,S,R;

  printf("Ingresa las ventas de los tres vendedores: ");
  scanf("%f %f %f", &P,&S,&R);

  if (P > S)
    if (P > R)
      if (S > R)
        printf("\n\n El orden es P, S y R: %8.2f %8.2f %8.2f", P, S, R);
      else
        printf("\n\n El orden es P, R y S: %8.2f %8.2f %8.2f", P, R, S);
    else
      printf("\n\n El orden es R, P y S: %8.2f %8.2f %8.2f", R, P, S);
  else
  if (S > R)
    if (P > R)
      printf("\n\n El orden es S, P y R: %8.2f %8.2f %8.2f", S, P, R);
    else
    printf("\n\n El orden es S, R y P: %8.2f %8.2f %8.2f", S, R, P);
  else
    printf("\n\n El orden es R, S y P: %8.2f %8.2f %8.2f", R, S, P);

}