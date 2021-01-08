/*Programa para encontrar area de un triangulo*/

#include <stdio.h>
#include <math.h>


int main (){
  float LA1, LA2, LA3,ARE,AUX;

  printf("Ingresa los lados del triangulo: ");
  scanf("%f %f %f", &LA1, &LA2, &LA3);

  AUX = (LA1 + LA2 + LA3)/2;
  ARE = sqrt(AUX * (AUX - LA1) * (AUX-LA2)* (AUX -LA3));
  printf("\nEl area de triangulo es : %6.2f",ARE);

}