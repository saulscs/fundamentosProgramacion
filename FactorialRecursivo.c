#include <stdio.h>
#include <stdlib.h>

int factorial(int num);

int main() {
  int num, result;

  printf("Ingresa un numero:");
  scanf("%d",&num);
  result = factorial(num);
  printf("El factorial es: %d",result);
  return 0;
}

int factorial(int num){
  if(num >= 1){
    return num*factorial(num-1);
  } else {
    return 1;
  }
}