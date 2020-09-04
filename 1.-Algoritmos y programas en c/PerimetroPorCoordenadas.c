/*Programa para calcular perimetro a partir de coodenadaso*/

#include <stdio.h>
#include <math.h>


int main (){
  float X1,Y1,X2,Y2,X3,Y3,LA1,LA2,LA3,PER;

  printf("Ingresa las coordenadas del P1: ");
  scanf("%f %f", &X1,&Y1);
  printf("Ingresa las coordenadas del P2: ");
  scanf("%f %f", &X2,&Y2);
  printf("Ingresa las coordenadas del P3: ");
  scanf("%f %f", &X3,&Y3);

  LA1 = sqrt(pow(X1-X2,2) + pow(Y1-Y2,2));
  LA2 = sqrt(pow(X2-X3,2) + pow(Y2-Y3,2));
  LA1 = sqrt(pow(X1-X3,2) + pow(Y1-Y3,2));

  PER = LA1 + LA2 + LA3;

  printf("\El perimetro del triángulo es: %6.3f",PER);
}