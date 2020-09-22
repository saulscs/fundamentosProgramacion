/* Lluvias.
El programa permite calcular el promedio mensual de las lluvias caídas en
➥ tres regiones importantes del país. Determina también cuál es la región
➥ con mayor promedio de lluvia anual. */

#include <stdio.h>

void Mayor(float , float , float );


int main (){
  int I;
  float GOL,PAC,CAR, AGOL =0 ,APAC = 0, ACAR =0;

  for(I=1; I <=12; I++){
    printf("\nIngresa las lluvias del mes: %d",I);
    printf("\nRegiones Golfo, Pacifico y Caribe: ");
    scanf("%f %f %f", &GOL, &PAC,&CAR);
    AGOL+=GOL;
    APAC+=PAC;
    ACAR+=CAR;
  }
  printf("\nEl promedio en el Golfo es: %6.2f",(AGOL/12));
  printf("\nEl promedio en el Pacifico es: %6.2f",(APAC/12));
  printf("\nEl promedio en el Caribe es: %6.2f",(ACAR/12));
  Mayor(AGOL,APAC,ACAR);
}


void Mayor(float R1, float R2, float R3){
  if(R1 > R2)
    if(R1> R3)
      printf("\nRegion con mayor promedio: Golfo \tPromedio: %6.2f", R1 / 12);
  else
    printf("\enRegion con mayor promedio: Caribe \tPromedio: %6.2f", R3/ 12); 
    else
      printf("\nRegion con mayor promedio: Pacifico \tPromedio: %6.2f", R2 / 12);
  if(R2 > R3)
    printf("\nRegion con mayor promedio: Pacifico \tPromedio: %6.2f", R2 / 12);
    else 
    printf("\nRegion con mayor promedio: Caribe \tPromedio: %6.2f", R3 / 12);
}