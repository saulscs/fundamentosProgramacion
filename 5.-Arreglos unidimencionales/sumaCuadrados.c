/* Suma-cuadrados.
El programa calcula la suma del cuadrado de los elementos de un arreglo ➥unidimensional de 100 elementos de tipo real. */

#include <stdio.h>
#include <math.h>

const int MAX = 100;

void lectura (float *, int);
double sumatoria(float *, int);


int main (){
  float VEC[MAX];
  double RES;
  lectura(VEC,MAX);
  RES = sumatoria(VEC,MAX);
  /* Se llama a la función Suma y se almacena el resultado en la variable RES. */
  printf("\n\nSuma del arreglo: %.2lf", RES);
}

void lectura (float A[], int T){
  int I;
  for (I=0; I<T; I++){
    printf("Ingresa el elemento %d:  ",I+1);
    scanf("%f", &A[I]);
  }
}

double sumatoria(float A[], int T){
  int I;
  double AUX = 0.0;
  for (I=0; I<T; I++)
    AUX+= pow(A[I],2);
  return (AUX);
}