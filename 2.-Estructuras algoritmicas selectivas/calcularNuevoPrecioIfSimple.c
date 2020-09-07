/*Programa para calcular nuevo precio si es menor a 1500*/

#include <stdio.h>
#include <math.h>


int main (){
  float PRE, NPR;

  printf("\nIngresa el precio: ");
  scanf("%f", &PRE);

  if (PRE < 1500){
    NPR = PRE * 1.11;
    printf("\n El nuevo precio es %7.2f:",NPR);
  }

}