
/*Programa que determina si un empleado es apto para un acenso basaso en su categoria y años de servicio. Las condiciones que estableció la empresa son las
siguientes: categoría 3 o 4 y antigüedad mayor a 5 años, o bien categoría 2 y
antigüedad mayor a 7 años.*/

#include <stdio.h>
#include <math.h>


int main (){
 int CLA, CAT,ANT,RES;
 float SAL;

  printf("\nIngresa la clave, categoria y antiguedad del trabajador: ");
  scanf("%d %d %d", &CLA,&CAT,&ANT);

  switch(CAT){
    case 3:
    case 4: if (ANT >=5)
              RES =1; 
            else RES=0; 
          break;
    case 2: if 
              (ANT >=7) 
              RES =1;
            else RES=0; 
          break;
    default: RES = 0;
    break;
  }
  if (RES){
    printf("\nEl trabajador con clave %d reune los requisitos", CLA);
  } else {
    printf("\nEl trabajador con clave %d NO  reune los requisitos", CLA);
  }
}