/*Estructura repetitiva for */


/* al recibir como datos N números enteros, obtenga la suma de los números pares y el promedio
de los impares. */


#include <stdio.h>
#include <math.h>

int main() {
 int I,N,NUM,SUMPAR = 0, SUMIMP = 0, CONIMP =0;

 printf("\nIngresa el numero de datos que se van a procesar: ");
 scanf("%d",&N);

 if (N > 0){
   for(I=1; I <= N ; I++){
     printf("Ingresa el numero %d: ", I);
     scanf("%d", &NUM);
     if(NUM)
      if(pow(-1,NUM) > 0)
        SUMPAR = SUMPAR + NUM;
      else 
        SUMIMP = SUMIMP + NUM;
        CONIMP ++;
    }
    printf("\nLa suma de los numeros pares es: %d", SUMPAR);
    printf("\nEl promedio de los imprares es  es: %5.2f", 
    (float)(SUMIMP / CONIMP) );
  } 
  else 
    printf("\nEl valor de N no es correcto");
}