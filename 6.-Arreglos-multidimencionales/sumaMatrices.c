/* Suma matrices.
El programa, al recibir como datos dos arreglos bidimensionales del mismo
➥tamaño, calcula la suma de ambos y la almacena en un tercer arreglo
➥bidimensional. */

#include <stdio.h>

const int MAX = 5;

void lectura(int [][MAX], int , int );
void suma(int  [][MAX], int [][MAX], int [][MAX], int , int );
void imprime (int [][MAX], int , int );

int main(void){
  int MA[MAX][MAX], MB[MAX][MAX], MC[MAX][MAX];
  int FIL, COL;

  do {
    printf("\nIngresa en numero de filas del arreglos: ");
    scanf("%d",&FIL);
  }
  while (FIL > MAX || FIL < 1 );

  do {
    printf("\nIngresa en numero de columnas del arreglos: ");
    scanf("%d",&COL);
  }
  while (COL > MAX || COL < 1 );
  printf("\nLectura del arreglo MA\n");
  lectura(MA,FIL,COL);
  printf("\nLectura del arreglo MB\n");
  lectura(MB,FIL,COL);
  suma (MA,MB,MC,FIL,COL);
  printf("\nImpresion del arreglo MC\n");
  imprime(MC,FIL,COL);
}

void lectura(int A[][MAX], int F, int C){
  int I,J;
  for (I = 0; I < F; I++)
    for (J = 0; J < C; J++){
      printf("Ingrese el elemento %d %d: ", I+1, F+1); /*Revisar esta linea de codigo*/
      scanf("%d", &A[I][J]);
    }
}

void suma(int M1[][MAX], int M2[][MAX], int M3[][MAX], int F, int C){
  int I, J;
  for (I = 0; I < F; I++)
    for(J = 0; J < C; J++){
      M3[I][J] = M1[I][J] + M2[I][J];
    }
}

void imprime (int A[][MAX], int F, int C){
  int I, J;
  for ( I= 0; I < F; I++)
    for (J = 0; J < C; J++){
      printf("\nElemento %d %d: %d", I,J, A[I][J]);
    }
}