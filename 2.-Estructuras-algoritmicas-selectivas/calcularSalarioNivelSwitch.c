/*Programa que al recibir al recibir
como datos el nivel académico de un profesor de una universidad así como su salario  e
imprima tanto el nivel del profesor como su nuevo salario.*/

#include <stdio.h>
#include <math.h>


int main (){
  int NIV;
  float SAL;
  printf("Ingresa tu nivel academico: ");
  scanf("%d", &NIV);
  printf("Ingresa tu salario: ");
  scanf("%f", &SAL);

  switch(NIV){
    case 1: SAL = SAL * 1.0035;
    break;
    case 2: SAL = SAL * 1.0041;
    break;
    case 3: SAL = SAL * 1.0048;
    break;
    case 4: SAL = SAL * 1.0053;
    break;
  }
  printf("\nNivel: %d \tTu salario es de %8.2f:", NIV,SAL);
}