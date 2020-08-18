#include <stdio.h>

/*Prototipos*/

int factorial(int numero);

/*Funcion principal*/
int main(int argc, char * argv[]) {
  
  //5! = 1*2*3*4*5 = 5 * 4!
  //4! = 1*2*3*4  = 4 * 3!
  //3! = 1*2*3    = 3 * 2!
  //2! = 1*2      = 2 * 1!
  //1! = 1 
  int numero;
  int resultado;
  printf("Introduce un numero: ");
  scanf("%d", &numero);    
  resultado = factorial(numero);
  printf("El factorial de %d es %d\n",numero, resultado);    
  return 0;
}

/*Llamar a la función factorial*/

int factorial(int numero){
  if (numero <1){
    return 0;
  } else if(numero ==1){
    return 1;
  } else {
    return numero * factorial(numero -1);
  }
}
