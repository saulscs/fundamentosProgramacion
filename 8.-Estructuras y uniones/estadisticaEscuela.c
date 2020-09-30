/* Escuela.
El programa genera información estadística de los alumnos de una escuela. */

#include <stdio.h>
#include <string.h>

typedef struct {
  int matricula;
  char nombre[30];
  float cal[5];
  /* Observa que el campo de la estructura alumno es un arreglo ➥unidimensional. */
}alumno;

void lectura(alumno *,int T);
void promedio(alumno *, int );
void mayorCalificacion(alumno * , int );
void promedioGeneral(alumno *, int );  

int main(void){
   alumno ARRE[50];
   int TAM;
   do{
     printf("Ingresa el tamaño del arreglo: ");
     scanf("%d", &TAM);
   } while (TAM > 50 ||TAM < 1);
   lectura(ARRE, TAM);
   promedio(ARRE, TAM);
   mayorCalificacion(ARRE,TAM);
   promedioGeneral(ARRE,TAM);
}

void lectura(alumno A[], int T){
  /* La función Lectura se utiliza para leer un arreglo unidimensional de tipo estructura alumno de T elementos. */
  int I, J;
  for (I=0; I<T;I++){
    printf("\nIngrese los datos del alumno %d", I+1);
    printf("\nIngrese la matrícula del alumno: ");
    scanf("%d", &A[I].matricula);
    fflush(stdin);
    printf("\nIngrese el nombre del alumno: ");
    scanf(" %s", A[I].nombre);
    for (J=0; J<5; J++) {
    printf("\tIngrese la calificación %d del alumno %d: ", J+1, I+1);
    scanf("%f", &A[I].cal[J]);
  }
  }
}

void promedio(alumno A[], int T){
  /* La función F1 obtiene la matrícula y el promedio de cada alumno. */
  int I,J;
  float SUM,PRO;
  for(I=0; I<T; I++){
    printf("\nMatricula del alumno:  %d", A[I].matricula);
    SUM = 0.0;
    for (J=0; J<5; J++)
      SUM = SUM + A[I].cal[J];
      PRO = SUM / 5;
      printf("\t\tPromedio: %.2f", PRO);
  }
}

void mayorCalificacion(alumno A[], int T){
  /* La función F2 obtiene las matrículas de los alumnos cuya calificación en la ➥tercera materia es mayor a 9. */
  int I;
  printf("\nAlumnos con calificaciones en la tercera materia > 9");
  for(I=0; I <T; I++)
    if(A[I].cal[2] > 9)
      printf("\nMatricula del alumno: %d", A[I].matricula);
}

void promedioGeneral(alumno A[], int T){
  /* Esta función obtiene el promedio general del grupo de la materia 4. */
  int I;
  float PRO, SUM = 0.0;
  for(I=0; I <T; I++)
    SUM = SUM + A[I].cal[3];
    PRO = SUM / T;
    printf("\n\nPromedio de la materia 4: %.2f", PRO);
}