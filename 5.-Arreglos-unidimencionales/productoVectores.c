#include <stdio.h>

/* Producto de vectores.
El programa calcula el producto de dos vectores y almacena el resultado
➥en otro arreglo unidimensional. */



const int MAX = 10; /* Se define una constante para el tamaño de los ➥arreglos. */

/*Prototipos de funciones*/

void lectura(int VEC[],int T); 
void imprime(int VEC[],int T);
void producto(int *X, int *Y, int*Z, int T);

/* Observa que en los
➥parámetros, para indicar que lo que se recibe es un arreglo, se puede escribir
➥VEC[] o *VEC. */

int main(){
  /*Se declaran tres arreglos de tipo entero de 10 elementos. */
  int VE1[MAX],VE2[MAX],VE3[MAX];
  /* Se llama a la función Lectura. Observa que el paso del arreglo a la función
  ➥es por referencia. Sólo se debe incluir el nombre del arreglo. */
  lectura(VE1,MAX);
  lectura(VE2,MAX);
  /* Se llama a la función Producto. Se pasan los nombres de los tres arreglos. */
  producto(VE1,VE2,VE3,MAX);
  printf("\nImprime el producto:");
  imprime(VE3,MAX);
}

/* La función Lectura se utiliza para leer un arreglo unidimensional de T
➥elementos de tipo entero. */
void lectura(int VEC[],int T){
  int I;
  printf("\n");
  for(I=0; I<T; I++){
    printf("Ingresa el elemento %d: ", I+1);
    scanf("%d", &VEC[I]);
  }
}


/* La función Imprime se utiliza para imprimir un arreglo unidimensional de T
➥elementos de tipo entero. */
void imprime(int VEC[],int T){
  int I;
  for (I=0; I<T; I++){
    printf("\nVEC[%d]: %d", I+1, VEC[I]);
  }
}

/* Esta función se utiliza para calcular el producto de dos arreglos
➥unidimensionales de T elementos de tipo entero. */
void producto(int *X, int *Y, int*Z, int T){
  int I;
  for (I=0; I<T; I++){
    Z[I] = X[I] * Y[I];
  }
}