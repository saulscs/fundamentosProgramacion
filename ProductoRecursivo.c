#include <stdio.h>

int producto(int a, int b);

int main() {
  int num1,num2,result;
  printf("Ingresa dos numeros: ");
  scanf("%d %d", &num1,&num2); 

  result = producto(num1,num2);

  printf("El producto es %d\n", result);
  
  return 0;
}

int producto(int a, int b){
  if(a < b){
    return producto(b,a);
  } else if( b!=0){
    return (a+producto(a,b-1));
  } else {
    return 0;
  }
}