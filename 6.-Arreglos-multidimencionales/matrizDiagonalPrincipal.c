/* Diagonal principal.
El programa, al recibir como dato una matriz de tipo entero, escribe la
diagonal principal. */

#include <stdio.h>

const int TAM = 10;

void lectura(int  [][TAM], int ); /*Prototipos*/
void imprimir(int  [][TAM], int );

int main() {
  int MAT[TAM][TAM];
  lectura(MAT,TAM);
  imprimir(MAT,TAM);
}

void lectura(int A[][TAM], int F){
  int I, J;
    for (I=0; I < F; I++)
      for (J=0; J < F; J++){
        printf("Ingrese el elemento %d %d: ", I+1, J+1);
        scanf("%d", &A[I][J]);
      }
}

void imprimir(int A[][TAM], int F){
  int I,J;
  for (I=0; I<F; I++)
    for (J=0; J< TAM; J++)
      if(I == J)
        printf("\nDiagonal %d %d : %d", I,J,A[I][J]);
    
}