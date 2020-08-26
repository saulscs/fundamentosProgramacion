#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int MAX = 10;

/*Prototipos*/
void lectura(char arr[], int n);
int calificacion(char arr[]);



/*Funcion principal*/
int main (){
     printf("Ingresa la calificacion de cada alumno F si reprobo y V si aprobo: \n\n");
    char arr[MAX] = "";
    lectura(arr, MAX);
    calificacion(arr);
    
    
}

/*Ingresar calificacion*/

void lectura(char arr[], int n){
    for (int i = 0; i<n; i++){
        printf("calificacion %d: ", i+1);
        scanf("%s",&arr[i]);
        printf("\n");
    }
}


/*Comprobar calificaciones*/

int calificacion(char arr[]){
    int aprob = 0, repro = 0;
    float promGeneral;

    
    for (int i = 0; i<arr[i]; ++i) {
        if ('v' == arr[i])
            aprob ++;
    }

    for (int i = 0; i<arr[i]; ++i) {
        if ('f' == arr[i])
            repro ++;
    }
    
    printf("\nAprobaron %d: ",aprob);
    printf("\nReprobaron %d: ",repro);
    
    promGeneral = (aprob/MAX)*100;
    
    if (promGeneral >= 70){
        printf("\nLo lograste estas aprobado");
    } else {
        printf("\nSe requiere fortalezer la enseñanza");
    }
    return 0;
}



