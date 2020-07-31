/*Algoritmo Secuencial*/

/*Descripción: Distribución del salario de una persona*/

/*Directivas del procesador*/

#include <stdio.h> /*Funciones de entrada y salida*/
#include <stdlib.h> /*Funciones del sistema*/

/*Función principal*/

int salario, porcentaje ;

int main( ) {
  /*Datos de entrada*/
  printf("Ingresa tu salario\n");
  scanf("%d", &salario);
/*Calculamos el porcentaje de cada gasto*/
  porcentaje = salario * 25 / 100;
  printf("Pagos de la casa %d\n", porcentaje);
  porcentaje = salario * 30 / 100;
  printf("Pagos de comida %d\n", porcentaje);
  porcentaje = salario * 8 /100;
  printf("Pagos del banco %d\n",porcentaje);
  porcentaje = salario * 20 / 100;
  printf("Pagos de educación %d\n", porcentaje);
  porcentaje = salario * 10 / 100;
  printf("Otros gasto %d\n",porcentaje);
  porcentaje = salario * 7 / 100;
  printf("Diversión %d\n",porcentaje);
  return 0;
}