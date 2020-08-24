/*Programa para saber si una cade es un palindrome*/

/*Liberias*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>



/*Variables globales*/
char pila[50];
int tope=-1;


void push(char arg){
  tope= tope+1;
  pila[tope] = arg;
}

char pop(){
  char c;
  c= pila[tope];
  tope = tope -1;
  return c;
}


/*Funcion principal*/
int main() {
  char cadena[30];
  int i, count=0,len;
  
  printf("Programa para saber si una palabra es palindroma\n\n");
  printf("Ingresa la palabra: \n");
  scanf("%s",cadena);
   

  len = strlen(cadena);

  for  (i=0; i <len; i++){
    push(cadena[i]);
  }


  for ( i=0; i<len; i++){
    if (cadena[i] ==pop()){
      count ++;
    }
  }

  if (len == count){
    printf("La palabra es  palindroma");
  } else {
    printf("La palabra NO  es  palindroma");
  }
  system("pause");
  return 0;
}