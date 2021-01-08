/* Traspuesta.
El programa calcula la traspuesta de una matriz. 
La traspuesta de una matriz se obtiene al escribir las filas de la matriz como columnas.*/

#include<stdio.h>

const int MAX = 5;


void lectura(int [][MAX], int , int );
void traspuesta(int [][MAX], int [][MAX], int , int  );
void imprime(int [][MAX], int , int );

int main(){
  int MAT[MAX][MAX], TRA[MAX][MAX];
  int FIL,COL;

  do{
    printf("Ingresa el numero de filas de la matriz: ");
    scanf("%d", &FIL);
  } while(FIL > MAX ||FIL < 1);
  do{
    printf("Ingrese el numero de columnas de la matriz: ");
    scanf("%d", &COL);
  } while (COL > MAX || COL < 1);

  lectura(MAT, FIL,COL);
  traspuesta(MAT, TRA, FIL,COL);
  imprime(TRA,FIL,COL);
}

void lectura(int A[][MAX], int F, int C){
  int I,J;
  for (I=0; I<F; I++)
    for (J=0; J<C; I++){
      printf("Ingresa el elemento %d %d: ", I+1,J+1);
      scanf("%d", &A[I][J]);
    }
}

void traspuesta(int M1[][MAX], int M2[][MAX], int F, int C ){
  int I,J;
  for (I=0; I < F; I++)
    for (J=0; J < C; J++){
      M2 [J][I] = M1[I][J];
    }
}

void imprime(int A[][MAX], int F, int C){
  int I,J;
  for (I=0; I < F; I++)
    for (J=0; J < C; J++){
      printf("\nElemento %d %d: %d", I+1, J+1, A[I][J]);
    }
}