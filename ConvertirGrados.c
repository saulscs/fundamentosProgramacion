

/* Programa: promedioTemp.c
* Descripción: Calcula el promedio de las temperaturas promedio
* mensuales registrada a lo largo de un año*/


/* BIBLIOTECA */
#include<stdio.h>
#include<stdlib.h>

/* VARIABLES GLOBALES */
int meses = 12;

/* PROTOTIPOS DE LAS FUNCIONES  3*/

/* Función que lee las temperaturas promedio mensuales registradas
en un año*/
void leerTemps( float temps[]);

/* Función que calcula el promedio de l
as temperaturas promedio
mensuales registradas en un año*/
float promTemps( float temps[]);

/* Función que convierte de grados Celsius a grados Fahrenheit */
float aFahrenheit(float tempC);

/* Función principal */

int main(){
  /* Declaración de variables locales a main*/
  float temps[12], tempsF[12], promF, promC;
  int mes;

  /* Lectura de las temperaturas, invocando a leerTemps */

  printf("Ingresa los promedios de las temperaturas mensuales\n");
  leerTemps(temps);

  /* Cálculo del promedio utilizando la función promTemps */
  
  promC = promTemps(temps);

  /*/* Conversión del promedio a grados Fahrenheit, invocando al módulo aFahrenheit*/

  promF = aFahrenheit(promC);

  /*/* Conversión de las t emperaturas promedio mensuales a grados Fahrenheit, invocando al módulo aFahrenheit*/

  for(mes = 0; mes<=11; mes++)
    tempsF[mes] = aFahrenheit(temps[mes]);

    /*  Impresión de temperaturas promedio mensuales en grados Fahrenheti*/

  for(mes = 1; mes<=12; mes++)
  printf("\n Las temperatura en grados Farenheit del mes %d es %.2f",mes,tempsF[mes-1]);

  /*Impresión del promedio*/

  printf("\n\n El promedio anual en grados Celsius es: %.2f", promC);

  printf("\n El promedio anual en grados Fareneheit es: %.2f", promF);

  /*system("pause");*/
  
} /*fin main*/

/*Definición de funciones*/


void leerTemps(float temps[]){
  /*Definición de variables locales a leerTemps*/
  int mes;

  for(mes =1; mes<=12; mes++){
    printf("\n Ingresa la temperatura promedio del mes %d:", mes);
    scanf("%f", &temps[mes-1]);
  }
} /*fin leerTemps*/


float promTemps(float temps[]){
  /*Definición de variables locales a promTemps*/
  int mes;
  float suma = 0;

  for (mes = 0; mes <=11; mes++)
    suma = suma + temps[mes];
  
  return (suma/12);
} /*fin leerTemps*/


float aFahrenheit(float tempC){
  return ((9.0/5.0)*tempC+32);
} /*fin aFahrenheit*/