/* Programa: newton.c
Descripción: Muestra un menú para calcular la aceleración,
fuerza o masa, conforme a la segunda l ey de Newton */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
  char OPC;
  float F,M,A;

  do {
    printf("\nRealiza calculos con la 2a ley de Newton");
    printf("\n________________________________");
    printf("\n a.Fuerza \n b.Aceleracion \n c.Masa \n d.Salir");
    printf("\n Elige una opción: ");

    /*Instrucción que lee una variable de tipo caracter */
    OPC = getchar();

    /*Estructura de Selección */
    switch(OPC){

      case 'a': printf("\n\nIngresa la masa: ");
      scanf("%f", &M);
      printf("\nIngresa la aceleración: ");
      scanf("%f", &A);
      F = M*A;
      printf("\nLa fuerza es %.2f\n\n\t", F);
      getchar();
      break;

      case 'b': printf("\nIngresa la fuerza: ");
      scanf("%f",&F);
      printf("\nIngresa la masa: ");
      scanf("%f", &M);
      A = F/M;
      printf("\nLa aceleración es %.2f\n\n\t", A);
      getchar();
      break;

      case 'c': printf("\nIngresa la fuerza: ");
      scanf("%f",&F);
      printf("\nIngresa la aceleración: ");
      scanf("%f", &A);
       M = F/A;
       printf("\nLa masa es %.2f\n\n\t", M);
       getchar();
       break;

       case 'd': printf("\nAdios: ");
       getchar();
       break;

       default:printf("\n\n Opción invalidad");
    }

  }
  /*Fin dela Selección*/
  while(OPC != 'd');
  getchar();
}


/*Si estas usando windows u otra herremienta distinta a repl.it usa
system("pause") en vez de getchar();*/