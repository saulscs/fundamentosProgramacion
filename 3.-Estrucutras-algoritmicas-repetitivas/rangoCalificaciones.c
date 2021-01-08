/* El programa, al recibir como datos una serie de calificaciones de un examen, obtiene el rango en que se encuentran éstas. */

#include <stdio.h>
#include <math.h>

int main() {
 int R1 = 0, R2 = 0, R3 = 0, R4 = 0, R5 = 0;
 float CAL;

 printf("\nIngresa la calificacion del alummno: ");
 scanf("%f", &CAL);

 while(CAL != 0){
   if(CAL <4)
    R1++;
    else 
      if(CAL < 6)
      R2++;
      else
        if(CAL <9)
          R4++;
         else 
          R5++;
         printf("\nIngresa la califiación del alumno: ");
         scanf("%f",&CAL);
 }
printf("\n1..3.99 = %d",R1);
printf("\n4..5.99 = %d",R1);
printf("\n6..7.99 = %d",R1);
printf("\n8..9.99 = %d",R1);
printf("\n9..10 = %d",R1);
}