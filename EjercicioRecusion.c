#include <stdio.h>
#include <stdlib.h>


/*Prototipo Funcion factorial*/
int factorial(int numFact);
/*Prototipo Funcion sumatoria*/
int multiplicacion(int a, int b);
/*Prototipo Funcion producto*/
int sumatoria(int x, int y);


int main() {
  /*Declaracion variables locales*/
  int numFact, resultFact;
  int mult1,mult2,producto;
  int sum1,sum2,resultado;

  /*Lectura de los numeros*/
  printf("Ingresa número para calcular factorial: ");
  scanf("%d",&numFact);

  printf("Ingresa dos numeros para calcular el producto: ");
  scanf("%d %d",&mult1,&mult2);

  printf("Ingresa dos numeros para calcular la suma: ");
  scanf("%d %d",&sum1,&sum2);

  /*Llamar funciones*/
  resultFact = factorial(numFact);
  producto = multiplicacion(mult1,mult2);
  resultado = sumatoria(sum1,sum2);

  /*Salida de los resultados*/
  getchar();
  printf("\nEl factorial es: %d\n\n", resultFact);
  printf("El producto es: %d\n\n", producto);
  printf("La suma es: %d\n\n", resultado);
  sleep(60);
  return 0;
}


/*Funcion factorial*/
int factorial(int z){
  if(z >=1){
    return z*factorial(z-1);
  } else {
    return 1;
  }
}

/*Funcion multiplicacion*/

int multiplicacion(int a, int b){
  if(a < b){
    return multiplicacion(b,a);
  } else if (b!=0){
    return (a+multiplicacion(a,b-1));
  } else {
    return 0;
  }
}

/*Funcion sumatoria*/

int sumatoria(int x, int y){
  if(y==0){
    return x;
  } else {
    return (1+sumatoria(x,y-1));
  }
}