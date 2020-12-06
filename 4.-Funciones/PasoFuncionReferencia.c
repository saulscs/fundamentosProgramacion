#include <stdio.h>

/*Paso de funciones como parametro por referencia*/

int Suma(int X, int Y) {
  /*La funcion suma regresa la suma de los parametros de tipo entero X y Y */
  return (X + Y);
} 

int Resta(int X, int Y){
  /*Regresa la resta de los parametros de tipo entero*/
  return (X-Y);
}

int Control(int (*apf) (int, int), int X, int Y){
  /* Esta función recibe como parámetro otra función —la dirección— y dependiendo de cuál sea ésta, llama a la función Suma o Resta. */

  int RES;
  RES = (*apf)(X,Y); /* Se llama a la función Suma o Resta. */
  return RES;
}

int main(void){
  int R1,R2;
  R1 = Control(Suma, 15,5); /* Se pasa como parámetro la función Suma. */
  R2 = Control(Resta, 10,4); /* Se pasa como parámetro la función Resta. */

  printf("\nResultado 1: %d", R1);
  printf("\nResultado 2: %d", R2);
}