#include <stdio.h>
#include <stdlib.h>

int suma(int x, int y);

int main() {
    int x,y,result;
    
    printf("Ingresa dos numeros: ");
    scanf("%d %d",&x,&y);
    
    result = suma(x,y);
    
    printf("El resultado de la suma es: %d\n",result);
    
    return 0;
}

int suma(int x,int y){
    if (y==0){
        return x;
    } else {
        return (1+suma(x,y-1));
    }
}
