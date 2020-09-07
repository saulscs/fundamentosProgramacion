/*Programa calcular el precio del billete ida y vuelta en ferrocarril, conociendo tanto la distancia
entre las dos ciudades como el tiempo de estancia en la ciudad destino. Si el número
de días de estancia es superior a 10 y la distancia total (ida y vuelta) a recorrer es
superior a 500 km, el precio del billete se reduce 20%. El precio por km es de $0.19..*/

#include <stdio.h>
#include <math.h>


int main (){
 int DIS, TIE;
 float BIL;
 printf("Ingresa la distancia y el tiempo: ");
 scanf("%d %d", &DIS, &TIE);

 if( (TIE > 10) && (DIS*2 > 500) ){
   BIL = (DIS *2)* 0.19 * 0.80;
 } else {
   BIL = (DIS *2)* 0.19;
 }
 printf("\nCosto final: %7.2f ", BIL);
}