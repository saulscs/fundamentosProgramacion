/*Programa que calcula formula general e indica si son reales o imaginarias*/

/*Biblioteca*/
#include<stdio.h>
#include <stdlib.h>
#include<math.h>

/*Prototipos*/
float calculo(float a, float b, float c);

/*Funcion principal*/

int main(){
  /*Variables locales*/
  float x, y, z;

  /*Lectura de los numeros*/
  printf("Formula de segundo grado");
  printf("Ingresa el valor de a,b y c para poder resolver la ecuacion: ");
  scanf("%f" "%f" "%f", &x,&y,&z);

  /*Llamar funcion*/
  calculo(x,y,z);
  return 0;
}



float calculo(float a, float b, float c){
  float disc,x1, x2, xi, xr;

  disc=pow(b, 2.0)-4*a*c;
  
  
  if(disc>0.0){
    x1=((-b+sqrt(disc))/(2.0*a));
    x2=((-b-sqrt(disc))/(2.0*a));
    printf("\nLas dos raices son reales \nx1=%.2f  x2=%.2f",x1, x2);
  }
  else if(disc==0.0){
    x1=(-b)/(2.0*a);
    printf("\n\t\t\tLa ecuacion solo tiene una raiz %.2f", x1); 
  } 
  else {
    xr=(-b/(2.0*a));
    xi=(sqrt(-disc)/(2.0*a));
    printf("\nLa raiz real es %.2f y la imaginaria es %.2f", xr, xi);
  }
  return 0;
}


