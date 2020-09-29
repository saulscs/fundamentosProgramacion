/* Empresa textil.
El programa, al recibir un arreglo tridimensional que contiene información ➥sobre las ventas mensuales de tres departamentos(hilos, lana, licra) en los últimos ocho años, ➥genera información estadística valiosa para la empresa.
a) Las ventas totales de la empresa en el segundo año.
b) El departamento que tuvo las mayores ventas en el último año, incluyendo también el importe de las ventas.
c) El departamento, mes y año con la mayor venta, incluyendo el importe de las ventas. */

#include <stdio.h>

const int MES = 12;
const int DEP = 3;
const int ANU = 8;

void lectura(float [MES][DEP][ANU], int,int,int);
void ventasTotales(float [MES][DEP][ANU],int,int,int);
void mayoresVentas(float [][DEP][ANU], int , int , int );
void mejorDepartamento(float [][DEP][ANU], int,int,int);


int main(){
  float PRO[MES][DEP][ANU];
  lectura(PRO,MES,DEP,ANU);
  ventasTotales(PRO,MES,DEP,2);
  mayoresVentas(PRO,MES,DEP,ANU);
  mejorDepartamento(PRO,MES,DEP,ANU);
}

void lectura(float A[][DEP][ANU], int F, int C, int P){
  int K,J,I;
  for(K = 0; K < P; K++)
    for(I=0; I < F; I++)
      for (J=0; J < C; J++){
        printf("Año: %d\tMes: %d\tDepartamento: %d ", K+1, I+1, J+1);
        scanf("%f", &A[I][J][K]);
      }
}

void ventasTotales(float A[][DEP][ANU], int F, int C, int P){
  int I,J;
  float SUM = 0.0;
  for (I=0;I<F;I++)
    for(J=0;J<C;J++)
      SUM += A[I][J][P-1];
      printf("\n\nVentas totales de la empresa en el segundo año: %.2f", SUM);
}

void mayoresVentas(float A[][DEP][ANU], int F, int C, int P){
  int I,J;
  float SUM1=0, SUM2 =0, SUM3= 0;
  for(I=0; I <F; I++)
    for(J=0; J<C; J++)
      switch(J+1){
        case 1: SUM1 += A[I][J][P-1];
        break;
        case 2: SUM2 += A[I][J][P-1];
        break;
        case 3: SUM3 += A[I][J][P-1];
        break;
      }
    if(SUM1 > SUM2)
      if(SUM1 > SUM3){
        printf("\n\nDepartamento con mayores ventas en el ultimo año: Hilos");
        printf("Ventas: %.2f", SUM1);
      } else {
        printf("\n\nDepartamento con mayores ventas en el ultimo año: Licra");
        printf("Ventas: %.2f", SUM3);
      }
    else 
      if(SUM2 > SUM3){
        printf("\n\nDepartamento con mayores ventas en el ultimo año: Lanas");
        printf("Ventas: %.2f", SUM2);
      }else {
        printf("\n\nDepartamento con mayores ventas en el ultimo año: Licra");
        printf("Ventas: %.2f", SUM3);
      }
}

void mejorDepartamento(float A[][DEP][ANU], int F, int C, int P){
  int K,I,J,DE,ME,AN;
  float VEN = -1.0;
  for(K=0; K<P; K++)
    for(I=0; I<F; I++)
      for(J=0; J < C; J++)
        if(A[I][J][K] > VEN){
          VEN = A[I][J][K];
          DE = J;
          ME = I;
          AN = K;
        }
  printf("\n\nDepartamento: %d\tMes: %d\tAño: %d", DE+1,ME+1,AN+1);
  printf("\tVentas: %.2f", VEN);
}