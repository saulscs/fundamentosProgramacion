#include<stdio.h>
#include<stdlib.h> 

/*Programa Estructura de datos tipo pila*/

/*Variables globales*/ 
int size=-1;
int *pStack = NULL;


/*PUSH*/
void push(char n)
{
  printf("\nInsertar elemento: %c", n);
  if(size>9)
  printf("desbordamiento");
  else
  {
    size++;
    pStack[size] = n;
  }
}
/*POP*/
 
void pop()
{
  printf("\nSacar elemento del tope");
  if(size<0)
  printf("\nsubdesbordamiento");
  else
  {
    pStack[size] = -1;
    size--;
   }
}
 /*Display*/
void DisplayStack()
{
  int i=0;
  if(size<0)
  printf("\nLa pila esta vacia");
  else
  {
    printf("\nMostrar pila ");
    for(; i<=size;i++)
    printf("%c ", pStack[i]);
  }
}
 
 /*Funcion principal*/
int main()
{
  int nSize=10;
  pStack = (int *)malloc(sizeof(int)*10); 
     
  push('a');
  push('b');
  DisplayStack();
  pop();
  DisplayStack();
  push('c');
  push('d');
  push('e');
  DisplayStack();
  pop();
  pop();
  DisplayStack();
  system("pause");
  return 0;
}