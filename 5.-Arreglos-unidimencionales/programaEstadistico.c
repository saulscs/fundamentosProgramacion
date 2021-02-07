/* Estadístico.
El programa, al recibir como dato un arreglo unidimensional de enteros ➥que contiene calificaciones, calcula la media, la varianza, la
➥desviación estándar y la moda. */

/*a) ‘La media aritmética. Ésta se calcula como la suma de los elementos entre el número de elementos.
b) La varianza. Ésta se calcula como la suma de los cuadrados de las desviaciones de la media, entre el número de elementos.
c) La desviación estándar. Se calcula como la raíz cuadrada de la varianza.
d) La moda. Se calcula obteniendo el número con mayor frecuencia.*/

#include <stdio.h>
#include <math.h>

const int MAX = 100;


void lectura(int *, int );   /* Prototipos de funciones. */
float media(int *, int );
float varianza(int *, int,float );
float desviacion(float);
void frecuencia(int *, int  ,int *);
int moda (int *, int );

int main(){
  int ALU[MAX], TAM, MOD, FRE[11] = {0};
  float MED, VAR,DES, FREC;

  do {
     printf("Ingresa el tamaño del arreglo: ");
    scanf("%d",&TAM);
  }while(TAM > MAX || TAM < 1); /* Se verifica que el tamaño del arreglo sea correcto. */

  lectura(ALU,TAM);
  MED = media(ALU, TAM);
  VAR = varianza(ALU, TAM, MED);
  DES = desviacion(VAR);
  frecuencia(ALU,TAM,FRE);
  MOD = moda(FRE,11);
  printf("\nMedia: %.2f", MED);
  printf("\nVarianza %.2f",VAR);
  printf("\nDesviacion %.2f",DES);
  printf("\nModa: %d",MOD);
}

/* La función Lectura se utiliza para leer un arreglo unidimensional de T
➥elementos de tipo entero. */

void lectura(int A[], int T){
  int I;
  for (I = 0; I< T; I++){
    printf("\nIngresa el elemento %d: ", I +1);
    scanf("%d", &A[I]);
  }
}

/* Esta función se utiliza para calcular la media. */

float media(int A[], int T){
  int I;
  float SUM = 0.0;
    for(I=0; I < T; I++)
     SUM += A[I];
    return (SUM / T);
}

/* Esta función se utiliza para calcular la varianza. */

float varianza(int A[], int T, float M){
  int I;
  float SUM = 0.0;
  for (I=0; I<T; I++)
    SUM += pow((A[I]- M), 2);
    return (SUM / T);
}

/* Esta función se utiliza para calcular la desviación estándar. */

float desviacion(float V){
  return (sqrt(V));
}

/* Esta función se utiliza para calcular la frecuencia de calificaciones.
*/

void frecuencia(int A[], int P ,int B[]){
  int I;
  for (I=0; I < P; I++)
    B[A[I]]++;
}


/* Esta función se utiliza para calcular la moda. */

int moda (int A[], int T){
  int I, MOD =0, VAL = A[0];
  for(I=1; I<T; I++){
    MOD = I;
    VAL = A[I];
  }
  return (MOD);
}


/*
* https://www.webyempresas.com/varianza/
*https://support.minitab.com/es-mx/minitab/18/help-and-how-to/statistics/basic-statistics/supporting-topics/data-concepts/what-is-the-standard-deviation/
*https://fresh2refresh.com/c-programming/c-arithmetic-functions/c-sqrt-function/
*https://www.disfrutalasmatematicas.com/datos/moda.html
*https://es.wikipedia.org/wiki/Frecuencia_estad%C3%ADstica

*/