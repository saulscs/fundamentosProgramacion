/* El programa, al recibir como dato un entero positivo, obtiene y escribe la serie de ULAM. */


#include <stdio.h>
#include <math.h>

int main() {
 int NUM;

 printf("\nIngresa el numero para calcular la serie: ");
 scanf("%d", &NUM);

 if(NUM > 0){
   printf("Serie de ULAM\n");
   printf("%d\t",NUM);
   while(NUM != 1){
     if(pow(-1,NUM) > 0)
      NUM = NUM/2;
     else
      NUM = NUM * 3 +1;
      printf("%d\t",NUM);
   }
 } 
 else
  printf("El numero que ingresaste es incorrecto");
}