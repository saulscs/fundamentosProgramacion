#include <stdio.h>
#include <stdlib.h> 

const int MAX = 10;

/*Prototipos*/
void lectura(int [][MAX], int , int );
void resta(int [][MAX], int [][MAX],int [][MAX], int , int );
void imprime(int [][MAX], int , int );


/*Funcion principal*/
int main() {
    //declarar 3 arreglos
    int MA[MAX][MAX],MB[MAX][MAX],MC[MAX][MAX];
    int FIL =1, COL=6;
    printf("\nPrograma para calcular aumento de casos por COVID\n");
    printf("\nIngresa los datos de los  casos: Confirmados, Negativos, Sopechosos,\n Defunciones, Recuperados, Activos.\n En ese orden\n");
    
    while (COL > MAX || COL <1);
    //Se verifica que el numero de columnas sea correcto
    printf("\nDia 07-07-2020\n");
    lectura(MA,FIL,COL);
    printf("\nDia 08-07-2020\n");
    lectura(MB,FIL,COL);
    resta(MA,MB,MC,FIL,COL);
    printf("\n Casos en Aumento\n");
    imprime(MC,FIL,COL);
    system("pause");
}

/*la funcion lectura se utiliza para leer un arreglo bidimencional entero de F filas y C columnas */
void lectura(int A[][MAX], int F, int C){
    int I,J;
    for (I=0; I<F;I++)
        for (J=0; J<C; J++){
            printf("\nIngrese la cifra correspondiente: ");
            scanf("%d", &A[I][J]);
        }
}


/*la funcion resta se utiliza para restas los arreglos y almacenar el resultado
 en un tercer arreglo bidimencional*/
void resta(int M1[][MAX], int M2[][MAX],int M3[][MAX], int F, int C){
    int I,J;
    for (I=0; I<F; I++)
        for (J=0; J<C; J++){
            M3[I][J] =  M2[I][J] - M1[I][J];
        }
}

/*la funcion imprime se utiliza para escribir un arreglo bidimencional de tipo entero de F filas y C columnas*/
void imprime(int A[][MAX], int F, int C){
    int I,J;
    for (I =0; I<F; I++)
        for (J=0; J<C; J++){
            printf("\n\tNuevos Casos: %d",A[I][J]);
        }
}
