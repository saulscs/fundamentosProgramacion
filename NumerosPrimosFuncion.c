#include <stdio.h>


int primo(int a);

int main() {
  int x,y, prim1, prim2;

  printf("Introduce el primer numero:");
  scanf("%i",&x);

  printf("Introduce el segundo numero:");
  scanf("%i",&y);
  
  prim1= primo(x);
  prim2= primo(y);

  if(prim1 ==0){
    printf("El numero %i es primo \n\n",x);
  } else {
    printf("El numero %i NO es primo \n\n",x);
  }

  if(prim2 ==0){
    printf("El numero %i es primo \n\n",y);
  } else {
    printf("El numero %i NO es primo \n\n",y);
  }

  return 0;
}

int primo(int a){
  int i,j,aux;

  j = 0;

  for(i =2; i<a && j==0; i++){
    aux = a %i;
    if(aux ==0){
      j = 1;
    }
  }

  return j;
}