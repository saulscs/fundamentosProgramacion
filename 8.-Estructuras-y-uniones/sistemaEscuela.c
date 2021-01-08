/* Escuela.
El programa genera información importante de los alumnos de una escuela. */

#include <stdio.h>
#include <string.h>

/* Declaración de la estructura matpro. */
typedef struct { 
  char mat[20];
  int pro;
}matpro;

/* Declaración de la estructura alumno. */
typedef struct {
  int matri;
  char nom[20];
  matpro cal [50];
}alumno;

/* Prototipos de funciones. */
void lectura(alumno *, int );
void promedioGeneral(alumno *, int );
void matriculas (alumno *, int );
void cuartaMateria (alumno *, int );

/* Prototipos de funciones. */

int main(){
  alumno ALU[50];
  int TAM;
  do{
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &TAM);
  } while(TAM > 50 || TAM < 1);
  lectura(ALU, TAM);
  promedioGeneral(ALU,TAM);
  matriculas(ALU,TAM);
  cuartaMateria(ALU,TAM);

}

void lectura(alumno A[], int T){
  int I,J;
  for(I=0; I<T; I++){
    printf("\nIngresa los datos del alumno %d: ", I+1);
    printf("\nIngresa la matricula del alumno: ");
    scanf("%d", &A[I].matri);
    fflush(stdin);
    printf("Ingresa el nombre del alumno: ");
    scanf(" %s", A[I].nom);
    for(J=0; J<5; J++){
      printf("\tMateria %d: ", J+1);
      fflush(stdin);
      scanf("%s", A[I].cal[J].mat);
      printf("\tPromedio %d: ", J+1);
      scanf("%d", &A[I].cal[J].pro);
    }
  }
}

void promedioGeneral(alumno A[], int T){
  /* Esta función se utiliza para obtener la matrícula y el promedio general de
➥cada alumno. */
  int I,J;
  float SUM;
  for (I=0; I<T; I++){
    printf("\nMatricula del alumno: %d", A[I].matri);
    SUM = 0.0; 
    for(J=0; J<5; J++) 
    SUM = SUM + A[I].cal[J].pro;
    SUM = SUM / 5;
    printf("\tPromedio: %.2f", SUM);
  }
}

void matriculas(alumno A[], int T){
  /* Esta función se utiliza para obtener las matrículas de los alumnos cuya ➥calificación en la tercera materia es mayor a 9. */
  int I;
  for(I=0; I < T; I++)
    if(A[I].cal[2].pro > 9)
    printf("Matricula del alumno: %d,", A[I].matri);
}

void cuartaMateria(alumno A[], int T){
  /* Esta función se utiliza para obtener el promedio general de la cuarta materia. */
  int I;
  float SUM = 0.0;
  for (I=0; I<T; I++)
    SUM = SUM + A[I].cal[3].pro;
      SUM = SUM/T;
    printf("\n\nPromedio de la cuarta materia: %.2f", SUM);
}