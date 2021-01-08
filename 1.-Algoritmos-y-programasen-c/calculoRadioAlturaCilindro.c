/*Programa para encontrar el volumen y el area de un cilindro*/

#include <stdio.h>
#include <math.h>

int main() {
  float RAD, ALT,VOL, ARE;

  printf("Ingresa el radio y la altura del cilindro: ");
  scanf("%f %f", &RAD, &ALT); 

  VOL = M_PI * pow(RAD,2) * ALT;
  ARE = 2* M_PI * RAD * ALT;

  printf("\nEl volumen es: %6.2f \tEl area es: %6.2f", VOL, ARE);
}