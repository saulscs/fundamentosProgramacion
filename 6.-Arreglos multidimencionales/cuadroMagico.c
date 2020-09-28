/* Cuadrado mágico.
Un CM se representa por medio de una matriz cuadrada de orden N, impar, y contiene los números comprendidos entre 1 y N*N. En un CM la suma de cualquiera de las filas,
columnas y diagonales principales siempre es la misma. El cuadrado mágico
se genera aplicando los siguientes criterios:
1. El primer número (1) se coloca en la celda central de la primera fila.
2. El siguiente número se coloca en la celda de la fila anterior y columna
posterior.
3. La fila anterior al primero es el último. La columna posterior a la última es
la primera.
4. Si el número es un sucesor de un múltiplo de N, no aplique la regla 2.
Coloque el número en la celda de la misma columna de la fila posterior */


#include <stdio.h>

const int MAX = 50;

void cuadro(int [][MAX], int );
void imprimir(int [][MAX], int );

int main (void){
  int CMA[MAX][MAX],TAM;
  do {
    printf("Ingresa el tamaño impar de la matriz: ");
    scanf("%d", &TAM);
  } while ((TAM > MAX || TAM < 1) && (TAM % 2));
  /* Se verifica el tamaño del arreglo y el orden (impar) del mismo. */
  cuadro(CMA, TAM);
  imprimir(CMA, TAM);
}

void cuadro(int A[][MAX], int N){
  int I = 1, FIL = 0, COL = N /2, NUM = N * N;
  while (I <= NUM){
    A[FIL][COL] = I;
    if (I%N != 0){
      FIL = (FIL -1 + N) % N;
      COL = (COL +1 )% N;
    } else {
      FIL ++;
      I++;
    }
  }
}

void imprimir(int A[][MAX], int N){
  int I,J;
  for (I =0; I < N; I++)
    for (J=0; J <N; J++)
      printf("\nElemento %d %d: %d", I+1, J+1, A[I][J]);
}