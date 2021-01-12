/* Ordenación por inserción directa. */

#include <stdio.h>

const int MAX = 100;

/* Prototipos de funciones. */
void lectura(int *, int);
void ordena(int *, int);
void imprime(int *, int);


int main (){
  int TAM, VEC[MAX];
  do {
    printf("Ingresa el tamaño del arreglo: ");
    scanf("%d", &TAM);
  }
  while (TAM > MAX || TAM < 1); /* Se verifica que el tamaño del arreglo sea  ➥correcto. */

  lectura(VEC,TAM);
  ordena(VEC,TAM);
  imprime(VEC,TAM);
}

/* La función Lectura se utiliza para leer un arreglo unidimensional de T
➥elementos de tipo entero. */
void lectura(int A[], int T){
  int I;
  for (I=0; I<T; I++){
    printf("Ingresa el elemento %d: ", I+1);
    scanf("%d", &A[I]);
  }
}

/* Esta función se utiliza para escribir un arreglo unidimensional
➥ordenado de T elementos de tipo entero. */

void imprime(int A[], int T){
  int I;
  for (I=0; I < T; I++)
    printf("\nA[%d]: %d", I, A[I]);
}

 /* La función Ordena utiliza el método de inserción directa para ordenar ➥los elementos del arreglo unidimensional A. */
void ordena(int A[], int T){
  int AUX, L, I;
  for (I=1; I <T; I++){
    AUX = A[I];
    L = I -1;
    while ((L >= 0) && (AUX < A[L])){
      A[L+1] = A[L];
      L--;
    }
    A[L+1] = AUX;
  }
} 



