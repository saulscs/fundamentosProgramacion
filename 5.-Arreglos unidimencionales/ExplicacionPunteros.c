
#include <stdio.h>

/*Explicacion punteros*/

/*
  int main(){
  int A[] = {2,4,8,6,1};
  printf("Direccion %d\n",A);
  printf("Direccion %d\n",&A[0]);
  printf("Valor %d\n",A[0]);
  printf("Valor %d\n",*A);
}
*/


/* int main() {
  int x[5] = {1, 2, 3, 4, 5};
  int* ptr;

  // ptr le asignamos la direccion del tercer elemento
  ptr = &x[2]; 

  printf("*ptr = %d \n", *ptr);   // 3
  printf("*(ptr+1) = %d \n", *(ptr+1)); // 4
  printf("*(ptr-1) = %d", *(ptr-1));  // 2

  return 0;
}
*/

/*
int main(){
  int a[] = {11,22,36,5,2};
  int sum = 0, *p;

  for (p = &a[0]; p <= &a[4]; p++)
    sum += *p;
    printf("Sum is %d",sum);
}*/