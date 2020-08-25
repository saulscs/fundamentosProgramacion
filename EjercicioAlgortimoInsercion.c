// C program for insertion sort 
#include <math.h> 
#include <stdio.h> 
#include <stdlib.h> 
/* Function para ordenar el arreglo*/
void insercion(int arr[], int n) 
{ 
    int i, key, j; 
    for (i = 1; i < n; i++) { 
        key = arr[i]; 
        j = i - 1; 
        while (j >= 0 && arr[j] > key) { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = key; 
    } 
} 
  
/* Imprimir arreglo ordenado */
void mostrarArreglo(int arr[], int n) 
{ 
    printf("\n\nMostrar arreglo ordenado:\n\n");
    for (int i = 0; i < n; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 

/*Calcular la moda*/

int calcularModa(int arr[], int n){
  int max = 1, result = arr[0], count = 1; 
    for (int i = 1; i < n; i++) { 
        if (arr[i] == arr[i - 1]) 
            count++; 
        else { 
            if (count > max) { 
                max = count; 
                result = arr[i - 1]; 
            } 
            count = 1; 
        } 
    } 
  // En caso de que el ultimo numero sea el más frecuente 
    if (count > max) 
    { 
        max = count; 
        result = arr[n - 1]; 
    } 
    printf("\n\n La moda  es: %d ", result); 
    return result; 
}

/*Calcular la promedio*/

void calcularPromedio(int arr[], int n){
  int sum = 0, promed;
  for (int i =0; i<n; i++){
    sum = sum + arr[i];
  }

  promed = sum / 15;

  printf("\n\n El promedio  es: %d ", promed); 
}

  
/* Funcion principal */
int main() 
{ 
    int arr[] = { 100, 95, 80, 100, 90, 85, 100,90,90,60,65,80,100,95,85}; 

    int n = sizeof(arr) / sizeof(arr[0]); 
    
    /*Imprimir arreglo*/
    printf("\n\nMostrar arreglo:\n\n");
    for (int i=0; i<n; i++){
    printf("%d ", arr[i]);  
    }
    /*Modulos*/
    insercion(arr, n); 
    mostrarArreglo(arr, n); 
    calcularModa(arr,n);
    calcularPromedio(arr,n);
    pause(60);
    return 0; 
} 