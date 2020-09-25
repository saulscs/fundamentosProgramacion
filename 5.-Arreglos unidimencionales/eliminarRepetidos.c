/* Arreglo sin elementos repetidos.
El programa, al recibir como dato un arreglo unidimensional desordenado de N
➥elementos, obtiene como salida ese mismo arreglo pero sin los elementos
➥repetidos. */

#include <stdio.h>

/* Prototipos de funciones. */

void lectura(int *, int);
void imprimir(int *, int);
void eliminar(int *, int);

int main(){
  int TAM, ARRE[100];
  /* Se escribe un do-while para verificar que el tamaño del arreglo que se ➥ingresa sea correcto. */
  do {
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &TAM);
  }
  while(TAM > 100 || TAM < 1);
    lectura(ARRE,TAM);
    eliminar(ARRE, TAM);
    /* Observa que el tamaño del arreglo se pasa por referencia.*/
    imprimir(ARRE,TAM);
}

void lectura(int A[], int T){
  /* La función Lectura se utiliza para leer un arreglo unidimensional de T ➥elementos de tipo entero. */
  printf("\n");
  int I;
  for(I=0; I < T; I++){
    printf("Ingresa el elemento %d: ", I+1);
    scanf("%d", &A[I]);
  }
}


void imprimir(int A[], int T){
  /* La función Imprime se utiliza para escribir un arreglo unidimensional, sin ➥repeticiones, de T elementos de tipo entero. */
  int I;
  for (I=0; I<T; I++){
    printf("\nA[%d] : %d", I, A[I]);
  }

}

void eliminar(int A[], int T){
  int I = 0, K,L;
  while(I < (T -1)){
    K = I + 1;
    while( K <= (T -1)){
      if(A[I] == A[K]){
        for (L = K; L < (T -1); L++)
          A[L] = A[L+1];
          T = T -1;
      } 
      else 
        K++;
    }
    I++;
  }
}