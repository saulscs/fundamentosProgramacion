/*Simulador de la caja de cobro de un cine*/

/* Directivas al procesador */

#include <stdio.h> /*Función de entrada y salida*/
#include<stdlib.h> /* Funciones del sistema */

/*Funcion principal*/

int main (){
  /*Declaración de variables y constantes */
  const int precio = 45;
  int boletos, total, pago, cambio;

  /*Mensaje de bienvenida*/
  printf("***Venta de boletos cine***\n\n");

  /*Datos de entrada*/
  printf("¿Cuantos boletos quieres?:\t");
  scanf("%d", &boletos);

  /*Calculamos el total de la venta*/

  total = boletos * precio;
  printf("El total es *** %d pesos *** \n\n", total);

  /*Leemos el pago y calculamos el cambio*/

  printf("Indique el monto del pago: ");
  scanf("%d",&pago);

  /*Calculamos el cambio y lo devolvemos*/

  cambio = pago - total;

  printf("\n\nEl monto del cambio es %d\n", cambio);
  printf("\n\t%d billetes de $200", cambio/200);
  cambio = cambio%200;
  printf("\n\t%d billetes de $100", cambio/100);
  cambio = cambio%100;
  printf("\n\t%d billetes de $50", cambio/50);
  cambio = cambio%50;
  printf("\n\t%d billetes de $20", cambio/20);
  cambio = cambio%20;
  printf("\n\t%d monedas de $10", cambio/10);
  cambio = cambio%10;
  printf("\n\t%d monedas de $5", cambio/5);
  cambio = cambio%5;
  printf("\n\t%d monedas de $2", cambio/2);
  cambio = cambio%2;
}