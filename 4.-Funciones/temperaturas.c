/* Temperaturas.
El programa recibe como datos 24 números reales que representan las
➥ temperaturas en el exterior en un período de 24 horas. Calcula el
➥ promedio del día y las temperaturas máxima y mínima con la hora en la
➥ que se registraron. */

#include <stdio.h>
#include <math.h>

void Acutem(float);
void Maxima(float , int );
void Minima (float , int );

/*Variables globales*/
/* Variables globales. ACT se utiliza para acumular las temperaturas,
➥ por esa razón se inicializa en cero. MAX se utiliza para calcular la
➥ máxima; se inicializa en –50 para que el primer valor que se ingrese
➥ modifique su contenido. MIN se usa para calcular la mínima; se
➥ inicializa con un valor muy alto para que el primer valor ingresado
➥ modifique su contenido. HMAX y HMIN se utilizan para almacenar el
➥ horario en que se produjeron las temperaturas máxima y mínima,
➥ respectivamente. */
float ACT = 0.0;
float MAX = -50.0;
float MIN = 60.0;
int HMAX;
int HMIN;


int main (void){
  float TEM;
  int I;

  for(I = 1; I <= 24; I++){
    printf("\nIngresa la temperatura de la hora %d: ", I);
    scanf("%f", &TEM);
    /* Llamada a las funciones. Paso de parámetros por valor. */
    Acutem(TEM);
    Maxima(TEM,I);
    Minima(TEM,I);
  }
  printf("\nPromedio del dia: %5.2f", (ACT/2));
  printf("\nMaxima del dia: %5.2f \tHora: %d",MAX, HMAX);
  printf("\nMinima del dia: %5.2f \tHora: %d",MIN, HMIN);
}

void Acutem(float T){
  /* Esta función acumula las temperaturas en la variable global ACT  para posteriormente calcular el promedio. */

  ACT += T;
}

void Maxima(float T, int H){
  /* Esta función almacena la temperatura máxima y la hora en que se produjo en las variables globales MAX y HMAX, respectivamente. */
  if(MAX < T){
    MAX = T;
    HMAX = H;
  }
}

void Minima (float T, int H){
  /* Esta función almacena la temperatura mínima y la hora en que se produjo en las variables globales MIN y HMIN. */
  if(MIN > T){
    MIN = T;
    HMIN = H;
  }
}