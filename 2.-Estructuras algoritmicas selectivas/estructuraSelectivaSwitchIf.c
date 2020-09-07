/*Programa que ingreses matricula carrera semestre y promedio y determine a que opción de carrera puedes acceder.*/

#include <stdio.h>
#include <math.h>


int main (){
  int MAT, CAR, SEM;
  float PRO;

  printf("\nIngresa tu matricula: ");
  scanf("%d", &MAT);
  printf("\nIngresa el numero de tu carrera- 1.Industrial 2.- Telematica 3.-Computacion 4.- Mecanica: ");
  scanf("%d", &CAR);
  printf("\nIngresa tu semestre: ");
  scanf("%d", &SEM);
  printf("\nIngresa tu promedio: ");
  scanf("%f", &PRO);

switch(CAR){
  case 1: if (SEM >= 6 && PRO >= 8.5) {
            printf("%d %d %5.2f", MAT, CAR,PRO); }
          break;
  case 2: if (SEM >= 5 && PRO >= 9.0) {
            printf("%d %d %5.2f", MAT, CAR,PRO); }
          break;
  case 3: if (SEM >= 6 && PRO >= 8.8){
            printf("%d %d %5.2f", MAT, CAR,PRO);}
          break;
  case 4: if (SEM >= 7 && PRO >= 9.0){
            printf("%d %d %5.2f", MAT, CAR,PRO);}
          break;
  default: printf("\n Error en la carrera");
    break;
}
}