/* Ordenación por selección directa. */

/*Su funcionamiento es el siguiente:

    Buscar el mínimo elemento de la lista
    Intercambiarlo con el primero
    Buscar el siguiente mínimo en el resto de la lista
    Intercambiarlo con el segundo

Y en general:

    Buscar el mínimo elemento entre una posición i y el final de la lista
    Intercambiar el mínimo con el elemento de la posición i*/

#include <stdio.h>

const int MAX = 100;

void lectura(int *, int);
void imprime(int *, int);
void ordena(int *, int);


int main (){
  int TAM, VEC[MAX];
  do {
    printf("Ingresa el tamaño del arreglo: ");
    scanf("%d",&TAM);
  }
  while (TAM > MAX || TAM < 1);
    lectura(VEC, TAM);
    ordena(VEC, TAM);
    imprime(VEC,TAM);
}

void lectura(int A[], int T){
  int I;
  for(I=0; I<T; I++){
    printf("Ingresa el elemento %d: ", I+1);
    scanf("%d", &A[I]);
  }
}

void imprime(int A[], int T){
  int I;
  for(I=0; I< T; I++)
    printf("\nA[%d]: %d", I, A[I]);
}


void ordena(int A[], int T){
  int I, J,MEN,L;
  for (I=0; I < (T-1); I++){
    MEN = A[I];
    L = I;
    for (J =(I+1); J < T; J++)
      if(A[J] < MEN){
        MEN = A[J];
        L = J;
      }
    A[L] = A[I];
    A[I] = MEN;
  }
}