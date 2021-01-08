/* Lluvias.
El programa, al recibir como dato un arreglo tridimensional que contiene ➥información sobre lluvias, genera información estadística. 
En el arreglo tridimensional LLU se almacenan las lluvias mensuales registradas
en milímetros, en las 24 provincias de Argentina, durante los últimos 10 años.
Escribe un programa en C que permita resolver lo siguiente:
a) La provincia que tuvo el mayor registro de precipitación pluvial durante los últimos 10 años.
b) La provincia que tuvo el menor registro de lluvias en el último año.
c) El mes que tuvo el mayor registro de lluvias en la provincia 18 en el quinto año.*/

#include <stdio.h>

const int PRO = 24;
const int MES = 12;
const int ANU = 10;

void lectura(float [PRO][MES][ANU], int , int, int);
void mayorPrecipitacion(float A[][MES][ANU], int , int , int);
void menorPrecipitacion(float A[][MES][ANU], int , int , int);
void provincia18(float A[][MES][ANU],int , int , int  );

int main (){
 float LLU[PRO][MES][ANU];
 lectura(LLU, PRO,MES,ANU);
 mayorPrecipitacion(LLU, PRO,MES,ANU);
 menorPrecipitacion(LLU, PRO,MES,ANU);
 provincia18(LLU,18, MES, 5);
}

void lectura(float A[][MES][ANU], int F, int C, int P){
  int K,J,I;
  for (K=0; K < P; K++)
    for (I=0; I < F; I++)
      for(J=0; J < C; J++){
        printf("Año: %d\tProvincia: %d\tMes: %d ", K+1, I+1,J+1);
        scanf("%f", &A[I][J][P]);
      }
}

void mayorPrecipitacion(float A[][MES][ANU], int F, int C, int P){
  int K,J,I, EMAY = -1;
  float ELLU = -1.0, SUM;

  for(I=0; I<F; I++){
    SUM = 0.0;
    for(K=0; K < P; C++)
      for (J=0; J < C; J++)
        SUM += A[I][J][K];
      SUM /= P * C;
    if(SUM > ELLU){
      ELLU = SUM;
      EMAY = I;
    }
  }
  printf("\n\nProvincia con mayor registro de lluvias: %d", EMAY+1);
  printf("\nRegistro: %.2f", ELLU);
}

void menorPrecipitacion(float A[][MES][ANU], int F, int C, int P){
  int I,J,EMEN;
  float ELLU = 1000,SUM;
  for(I=0; I<F; I++){
    SUM =0;
    for(J=0;J<C; J++)
      SUM+= A[I][J][P-1];
      SUM /= C;
      if(SUM < ELLU){
        ELLU = SUM;
        EMEN = I;
      }
  }
  printf("\n\nProvincia con menor registro anual de lluvias en el ultimo año: %d", EMEN +1);
  printf("\nRregistro anual:  %.2f", ELLU);
}

void provincia18(float A[][MES][ANU],int F, int C, int P ){
  int J, EMES = -1;
  float ELLU = -1.0;
  for (J=0; J<C; J++){
    if (A[F-1][J][P-1]){
      ELLU = A[F-1][J][P-1];
      EMES = J;
    }
  }
  printf("\n\nMes: %d Lluvias: %.2f", EMES +1, ELLU);
}