/*Estructura repetitiva for */


/* obtenga y escriba tanto los términos como la suma de los términos de la siguiente serie:
2, 7, 10, 15, 18, 23, . . ., 2500. */


#include <stdio.h>
#include <math.h>

int main(void) {
 int I = 2, CAM = 1;
 long SSE= 0;

 while(I <= 2500){
   SSE = SSE + I;
   printf("\t %d", I);
   if (CAM){
     I+=5;
     CAM --;
   } else {
     I+=3;
     CAM ++;
   }
   printf ("\nLa suma de la serie es: %ld", SSE);
 } 
 
}