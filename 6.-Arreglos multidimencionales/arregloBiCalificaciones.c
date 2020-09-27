/* Alumnos.
El programa, al recibir un arreglo bidimensional que contiene información ➥sobre calificaciones de alumnos en cuatro materias diferentes, obtiene ➥resultados estadísticos. */

#include <stdio.h>

/*Variables globales*/
const int  MAX = 50;
const int  EXA = 4;

void lectura(float [MAX][EXA], int );
void promedio (float [MAX][EXA], int );
void promedioGeneral (float [MAX][EXA], int );


int main (){
  int NAL;
  float ALU[MAX][EXA];
  do{
    printf("Ingresa el numero de alumnos del grupo: ");
    scanf("%d", &NAL);
  }
  while (NAL > MAX || NAL < 1);
  lectura(ALU,NAL);
  promedio(ALU,NAL);
  promedioGeneral(ALU, NAL);
}

void lectura(float A[][EXA], int N){
  /* La función Lectura se utiliza para leer un arreglo bidimensional de tipo real de N filas y EXA columnas. */
  int I,J;
    for (I =0; I<N; I++)
      for (J=0; J<EXA; J++){
        printf("Ingresa la calificacion %d del  alumno %d: ", J+1, I+1);
        scanf("%f", &A[I][J]);
      }
}


void promedio (float A[][EXA], int T){
  /* Esta función se utiliza para obtener el promedio de cada estudiante. */
  int I, J;
  float SUM, PRO;
    for (I=0; I < T; I++){
      SUM = 0;
        for (J=0; J<EXA; J++)
          PRO = SUM / EXA;
        printf("El promedio del alumno %d es: %5.2f", I+1, PRO);
    }
}

void promedioGeneral (float A[][EXA], int T){
  /* Esta función se utiliza tanto para obtener el promedio de cada examen, así como también el examen que obtuvo el promedio más alto. */
  int I, J, MAY;
  float SUM,PRO,MPRO = 0;
  printf("\n");
  for (J=0; J < EXA; J++){
    SUM =0;
    for (I=0; I < T; I++)
      SUM += A[I][J];
    PRO = SUM / T;
    if( PRO > MPRO){
      MPRO = PRO;
      MAY = J;
    }
    printf("\nEl promedio del examen %d es %f", J+1, PRO);
  }
  printf("\n\nEl examen con mayor promedio es %d: \t Promedio: %5.2f ", MAY + 1, MPRO);
} 