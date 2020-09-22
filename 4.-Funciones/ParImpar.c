
/*  Al recibir como datos N números enteros, determine
cuántos de estos números son pares y cuántos impares. */

#include <stdio.h>
#include <math.h>

void parimp(int , int * , int * );

int main(){
  int N,I,NUM,IMP = 0, PAR = 0;
  printf("\nIngresa el numero de datos a contar: ");
  scanf("%d", &N);

  for(I=1; I <=N; I++){
    printf("\nIngresa el numero: ");
    scanf("%d", &NUM);
    parimp(NUM, &PAR,&IMP);
  }
  printf("\nNumero de impares: %d", IMP);
  printf("\nNumero de pares: %d", PAR);
}

void parimp(int NUM, int *P, int *I){
  /* La función incrementa el parámetro *P o *I, según sea el número par
   o impar. */
  int RES;
  RES = pow(-1,NUM);
  if(RES > 0)
    *P += 1;
  else 
    if(RES < 0)
      *I += 1;
}