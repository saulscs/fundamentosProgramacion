/* Intercambia.
El programa intercambia las columnas de un arreglo bidimensional. Los
➥elementos de la primera columna se intercambian con los de la última,
➥los de la segunda con los de la penúltima, y así sucesivamente. */

#include <stdio.h>

const int MAX = 10;


void lectura(float [][MAX], int , int );
void intercambio(float [][MAX], int , int );
void imprimir(float [][MAX],int , int );


int main(){
  int F, C;
  float MAT[MAX][MAX];

  do {
    printf("Ingrese en el numero de filas: ");
    scanf("%d", &F);
  }
  while(F > MAX || F < 1); /* Se verifica que el número de filas sea correcto. */
  do {
    printf("Ingrese el numero de columnas: ");
    scanf("%d",&C);
  }
  while(C > MAX || C < 1);
  lectura(MAT, F, C);
  intercambio(MAT,F,C);
  imprimir(MAT,F,C);
}


void lectura(float A[][MAX], int F, int C){
  int I,J;
  for (I=0; I < F; I++)
    for (J=0; J < C; J++){
      printf("Ingrese el elemento %d %d: ", I+1, J+1);
      scanf("%f", &A[I][J]);
    } 
}

void intercambio(float A[][MAX], int F, int C){
  /* Esta función se utiliza para intercambiar las columnas del arreglo bidimensional. Observa que el índice correspondiente a las columnas sólo se mueve hasta la mitad del arreglo. */
  int I,J;
  float AUX;
  /* Observa que en esta función el índice I se utiliza para las columnas, y el índice J para las filas. */
  for (I=0; I < (C/2); I++)
    for (J=0; J < F; J++){
      AUX = A[J][I];
      A[J][I] = A[J][C-I-1];
      A[J][C-I-1] = AUX;
    }
}

void imprimir(float A[][MAX],int F, int C){
  int I,J;
  for (I=0; I< F; I++)
    for (J=0; J<C; J++)
      printf("\nElemento %d %d: %5.2f", I+1, J+1, A[I][I]);
}