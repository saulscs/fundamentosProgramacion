
/*El costo de las llamadas telefónicas depende tanto del lugar de origen de la llamada como de la zona geográfica en la que se encuentre el país destino. En la tabla 2.5 se presenta el costo por 60 segundos para las llamadas
originadas en México. programa en C que permita calcular e imprimir el costo total de una llamada
telefónica, considerando tanto la zona como la duración de la llamada*/

#include <stdio.h>
#include <math.h>


int main (){
 int CLA, TIE;
 float COS;

 printf("\nIngresa la clave y el tiempo: ");
 scanf("%d %d", &CLA, &TIE);

switch(CLA){
  case 1: COS = (TIE * 0.13)/60; break;
  case 2: COS = (TIE * 0.11)/60; break;
  case 5: COS = (TIE * 0.22)/60; break;
  case 6: COS = (TIE * 0.19)/60; break;
  case 7:
  case 9: COS = (TIE * 0.17)/60; break;
  case 10: COS = (TIE * 0.20)/60; break;
  case 15: COS = (TIE * 0.39)/60; break;
  case 20: COS = (TIE * 0.28)/60; break;
  default: COS = -1; break;
}
if(COS != -1){
  printf("\nClave: %d, Tiempo: %d, Costo: %6.2f",CLA,TIE,COS);
} else {
  printf("\Error en la clave");
}
}