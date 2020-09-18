/*Estructura repetitiva a do while con for*/


/* al recibir como datos los N lanzamientos del martillo de la atleta cubana ganadora de la medalla de oro en las últimas olimpiadas celebradas en Atenas, calcule el promedio de dichos lanzamientos. */


#include <stdio.h>
#include <math.h>

int main(void) {
  int N,I;
  float LAN, SLA=0;

  do{
    printf("\nIngresa el numero de lanzamientos: ");
    scanf("%d", &N);
  } 
  while( N < 1 || N > 11);

  for(I = 1; I <= N; I++  ){
    printf("\nIngresa eel lanzamiento: ");
    scanf("%f", &LAN);
    SLA = SLA + LAN;
  }
  SLA = SLA / N;
  printf("\nEl promedio de lanzamiento es: %.2f", SLA);

  
}