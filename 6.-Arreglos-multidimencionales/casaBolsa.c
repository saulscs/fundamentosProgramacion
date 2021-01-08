/* Casa de bolsa.
El programa, al recibir como datos los precios mensuales de las acciones de sus➥cinco fondos de inversión, además del precio de las acciones al 31 de diciembre ➥del 2003, genera información estadística importante para la empresa. 
a) Calcule el rendimiento anual de los cinco fondos de inversión.
  Rentabilidad = (Valor final + Rendimientos - Gastos - Inversión) / Inversión inicial x 100
b) Obtenga el promedio anual de las acciones de cada uno de los fondos de
inversión.
c) Obtenga el fondo que obtuvo el mayor rendimiento, así como el que obtuvo
el peor rendimiento. Escribe además los porcentajes correspondientes.*/

#include <stdio.h>

void lecturaM(float [][12], int , int );
void lecturaV(float *, int );
void rendimiento(float [][12], int , int , float * , float * );
void promedioAnual(float [][12], int , int );
void totales(float *, int );

int main(){
  float FON[5][12],PRE[5],REN[5];
  /* REN es un arreglo unidimensional de tipo real que se utilizará para almacenar ➥el rendimiento anual de los fondos de inversión. */
  lecturaM(FON,5,12);
  lecturaV(PRE,5);
  rendimiento(FON,5,12,PRE,REN);
  promedioAnual(FON,5,12);
  totales(REN,5);

}

void lecturaM(float A[][12], int F, int C){
  int I,J;
  for (I=0; I<F; I++)
    for(J=0; J<C; J++){
      printf("Precio del fondo %d\t mes %d: ", I+1,J+1);
      scanf("%f",&A[I][J]);
    }
}

void lecturaV(float  A[], int T){
  int I;
  printf("\n");
  for (I=0; I<T; I++) {
     printf("Precio del fondo %d al 31/12/2003: ", I+1);
    scanf("%f", &A[I]); 
  }
}

void rendimiento(float A[][12], int F, int C, float B[], float V[]){
  int I;
  printf("\nRENDIMIENTOS ANUALES DE LOS FONDOS");
  for (I=0; I < F; I++){
    V[I] = (A[I][C-1] - B[I]) / B[I] * 100;
    printf("\nFondo %d: %.2f", I+1,V[I]);
   }
}

void promedioAnual(float A[][12], int F, int C){
  int I,J;
  float SUM,PRO;
  printf("\n\nPROMEDIO ANUALIZADO DE LOS FONDOS");
  for(I=0; I<F;I++){
    SUM =0;
    for (J=0;J<C;J++)
      SUM += A[I][J];
      PRO = SUM / C;
      printf("\nFondo %d: %.2f", I+1,PRO);
  }
}

void totales(float A[], int F){
  float ME = A[0], PE= A[0];
  int M = 0, P = 0, I;

  for (I=1; I<F; I++){
    if (A[I] > ME){
      ME = A[I];
      M = I;
    }
    if(A[I] < PE){
      PE = A[I];
      P = I;
    }
  }
  printf("\n\nMEJOR Y PEOR FONDO DE INVERSION");
  printf("\nMejor fondo: %d \tRendimiento: %6.2f", M+1, ME);
  printf("\nPeor fondo: %d \tRendimiento: %6.2f", P+1, PE);
}