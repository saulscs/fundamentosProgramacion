
/*  Al recibir como datos dos números enteros, determine
el máximo común divisor de dichos números.. */

#include <stdio.h>

int mcd(int,int);

int main(){
  int NU1,NU2,RES;
  printf("Ingresa los numeros: ");
  scanf("%d %d", &NU1,&NU2);
  RES = mcd(NU1,NU2);
  printf("El maximo como un divisor de %d y %d es: %d", NU1,NU2,RES);
}

int mcd(int N1,int N2){
  /* I se inicializa con el máximo valor posible que puede ser divisor de N1 y N2. */
  int I;
  if(N1 < N2)
    I = N1/2;
  else 
    I = N2/2;
  /* El ciclo se mantiene activo mientras (N1 % I) o (N2 % I) sean
 distintos de cero. Cuando el resultado de la evaluación sea 0, el
 ciclo se detiene ya que se habrá encontrado el máximo común divisor. */
  while ((N1 % I) || (N2 % I))
    I--;
  return I;
}