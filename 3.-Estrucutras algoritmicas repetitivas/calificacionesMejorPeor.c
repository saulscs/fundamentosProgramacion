
/*Calificaciones.
El programa, al recibir un grupo de calificaciones de un alumno, obtiene el promedio de calificaciones de cada uno de ellos y, además, los alumnos con el mejor y peor promedio. */


#include <stdio.h>
#include <math.h>

int main() {
 int I, MAT, MATMEJ, MATPEO;
 float CAL,SUM,PRO,PROMEJ = 0.0 ,PROPEO = 11.0;

 printf("Ingresa la matricula del primer alumnno: ");
 scanf("%d", &MAT);

 while(MAT){
   SUM = 0;
   for(I=1; I <= 5; I++){
   printf("\n\tIngresa la calificación del alumno %d: ",I);
   scanf("%f", &CAL);
   SUM += CAL;
   }
   PRO = SUM/5;
   printf("\nMatricula: %d  \tPromedio: %5.2f", MAT, PRO);
    if(PRO > PROMEJ){
     PROMEJ = PRO;
     MATMEJ = MAT;
    }
    if (PRO < PROPEO){
      PROPEO = PRO;
      MATPEO = MAT;
    }
    printf("\n\nIngrese la matricula del siguiente estudiante: ");
    scanf("%d",&MAT);
 }
 printf("\n\nAlumno con mejor promedio: \t%d\t\%5.2f",  MATMEJ, PROMEJ);
 printf("\n\nAlumno con peor promedio: \t%d\t\%5.2f",  MATPEO, PROPEO);
}