/*Estructura repetitiva for */


/* al recibir como dato un número entero N, calcule el factorial de dicho número. */


#include <stdio.h>
#include <math.h>

int main(void) {
 int NUM, I;
 long FAC;

 printf("\nIngresa el numero: ");
 scanf("%d", &NUM);

 if ( NUM >= 0){
   FAC = 1;
   for(I=1; I <= NUM; I++)
   FAC *=I;
   printf("\nEl factorial de %d es: %ld", NUM,FAC);

 } else {
   printf("Error dato ingresado");
 }

  
}