/* Búsqueda secuencial en arreglos desordenados. */

#include<stdio.h>

const int MAX = 100;

void lectura(int *, int); /* Prototipos de funciones. */
int busqueda(int * ,int,int);

int main(){
  int RES,ELE,TAM,VEC[MAX];

  do{
    printf("Ingresar el tamaño del arreglo: ");
    scanf("%d",&TAM);
  }
  while (TAM >MAX || TAM < 1);      /*Se verifica que el tamaño del arreglo sea ➥correcto. */
  lectura(VEC,TAM);
  printf("\nIngresa el elemento a buscar: ");
  scanf("%d", &ELE);
  RES = busqueda(VEC,TAM,ELE);    /* Se llama a la función que busca en el ➥arreglo. */
  /* Si RES tiene un valor verdadero —diferente de 0—, se escribe la posición ➥en la que se encontró el elemento. */
  if(RES)
  printf("\nEl elemento se encuentra en la posicion %d", RES);
  else 
    printf("\nEl elemento no se encuentra en el arreglo");
}

void lectura(int A[], int T){
  /* La función Lectura se utiliza para leer un arreglo unidimensional de T
➥elementos de tipo entero. */
  int I;
  for (I=0; I < T; I++){ 
    printf("\nIngresa el elemento: %d", I+1);
    scanf("%d",&A[I]);
  }
}

int busqueda(int A[], int T, int K){
  /* Esta función localiza en el arreglo un elemento determinado. Si el elemento ➥es encontrado, regresa la posición correspondiente. En caso contrario, regresa ➥0. */
  int I = 0, BAN = 0, RES;
  while(I < T && ! BAN)
    if(A[I] == K)
      BAN++;
    else 
      I++;
  if(BAN)
    RES = I + 1;
    /*Se asigna I+1 dado que las posiciones en el aregglo comienzan desde cero*/
    else 
    RES = BAN;
    return (RES);
}