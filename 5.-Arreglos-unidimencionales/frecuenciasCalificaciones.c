#include <stdio.h>

/* Frecuencia de calificaciones.
El programa, al recibir como datos las calificaciones de un grupo de 50 
➥alumnos, obtiene la frecuencia de cada una de las calificaciones y además 
➥escribe cuál es la frecuencia más alta. */

const int TAM = 50;

/* Prototipos de funciones. */
void lectura (int VEC[], int T);
void imprimir(int VEC[], int T);
void frecuencia(int A[], int P,int B[], int T);
void mayor(int *, int );

int main(){
  int CAL[TAM], FRE[6] = {0};  /* Declaración de los arreglos. */
  lectura(CAL, TAM);           /* Se llama a la función Lectura. */
  /* Se llama a la función Frecuencia, se pasan ambos arreglos. */
  frecuencia(CAL,TAM,FRE,6);
  printf("\nFrecuencia de las calificaciones\n");
  imprimir(FRE,6);
  mayor(FRE,6);
}

void lectura (int VEC[], int T){
  /* La función Lectura se utiliza para leer el arreglo de calificaciones. */
  int I;
  for (I=0; I<T; I++){
    printf("Ingresa la calificación del del 0 al 5 alumno %d: ",I+1);
    scanf("%d",&VEC[I]);  
  }
}

void imprimir(int VEC[], int T){
  /* La función Impresión se utiliza para imprimir el arreglo de frecuencias. */
  int I;
  for (I=0; I<T;I++){
    printf("\nVEC[%d]:%d",I,VEC[I]);
  }
}

void frecuencia(int A[], int P,int B[], int T){
  /* Esta función calcula la frecuencia de calificaciones. */
  int I;
  for(I=0; I<P;I++){
    if((A[I] >= 0) && (A[I] < 6)) /* Se valida que la calificación sea ➥correcta. */
    B[A[I]]++;
    /* Observa la forma de almacenar e incrementar las
➥frecuencias. */
  }
}

void mayor(int *X, int T){
  /* Esta función obtiene la primera ocurrencia de la frecuencia más alta. */
  int I, MFRE=0, MVAL = X[0];

  for(I=0; I < T; I++){
    if(MVAL < X[I]){
      MFRE = I;
      MVAL = X[I];
    }
  }
  printf("\n\nMayor frecuencia de califiaciones: %d \tValor: %d", MFRE,MVAL);
}