//Calcular el factorial de  2 numeros con una funcion

#include <stdio.h>

int factorial(int a);

int main() {
  int x,y,fact1, fact2;

  printf("Ingresa el primer numero para calcular su factorial: ");
  scanf("%i", &x);
  printf("Ingresa el segundo numero para calcular su factorial: ");
  scanf("%i", &y);


  fact1 = factorial(x);
  fact2 = factorial(y);

  printf("El resultado X es  %i \n\n",fact1);
  printf("El resultado Y es  %i \n\n",fact2);

  return 0;
}

int factorial (int a){
   int i, aux;

   aux = 1;

   for (i=1; i<= a; i++){
      aux *=i;
   }
  return aux;
}

//1.- Definir nuestra funcion factorial y poner el prototipo y llamar dentro de main.
//2.- Definir las variables
// 3.- pedimos los numeros
// 4.- factorial dentro de main lo asignamos a una variable para poder revisar el numero que queremos calcular en la función factorial.
