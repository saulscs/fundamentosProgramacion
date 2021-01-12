#include <stdio.h>
/* Búsqueda binaria. */

const int MAX = 100;

/* Prototipos de funciones. */
void lectura(int *, int );
int binaria(int * , int , int );


int main (){
  int RES, ELE,TAM, VEC[MAX];
  do {
    printf("Ingresa el tamaño del arreglo: ");
    scanf("%d", &TAM);
  }
  while (TAM > MAX || TAM < 1); /* Se verifica que el tamaño del arreglo sea
  ➥correcto. */
  lectura(VEC,TAM);
  printf("Ingresa el elemento a buscar: ");
  scanf("%d", &ELE);
  RES = binaria(VEC,TAM,ELE); /* Se llama a la función que busca en el ➥arreglo. */

  if(RES)
    /* Si RES tiene un valor verdadero —diferente de 0—, se escribe la ➥posición en la que se encontró el elemento. */
  printf("\nEl elemento se encuentra en la posicion: %d", RES);
  else 
    printf("\nEl elemento no se encuentra en el elemento");
}

void lectura(int A[], int T){
  /* La función Lectura se utiliza para leer un arreglo unidimensional de T ➥elementos de tipo entero. */
  int I;
  for (I=0; I < T; I++){
    printf("Ingresa el elemento %d: ", I+1);
    scanf("%d",&A[I]);
  } 
}

int binaria(int A[], int T, int E){
  /* Esta función se utiliza para realizar una búsqueda binaria del ➥elemento E en el arreglo unidimensional A de T elementos. Si se ➥encuentra el elemento, la función regresa la posición correspondiente. ➥En caso contrario, regresa 0. */
  int ELE, IZQ = 0,CEN,DER = T-1, BAN = 0;

  while((IZQ <= DER) && (!BAN)){
    CEN = (IZQ + DER)/2;
    if(E == A[CEN])
      BAN = CEN;
    else 
      if(E > A[CEN])
        IZQ = CEN +1;
      else 
        DER = CEN -1;
  }
  return (BAN);
}