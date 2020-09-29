/* Funciones para el manejo de caracteres de la biblioteca stdio.h */

#include <stdio.h>

int main() {
    char p1, p2, p3 = '$';
    /* Declaración de las variables tipo caracter p1, p2 y p3. Observa que a p3 se le ➥asigna el símbolo $. */
    printf("\nIngrese un caracter: ");
    p1=getchar(); /* Se utiliza la función getchar para leer un caracter. */
    putchar(p1); /* Se utiliza la función putchar para escribir un ➥caracter. */
    printf("\n");
    fflush(stdin);
    /* Luego de leer un caracter siempre es conveniente escribir la función fflush ➥para limpiar el búfer, porque generalmente queda con basura y genera un error ➥en la ejecución del programa. 
    El error se produce porque cuando se ingresa un ➥dato se oprime el return y luego cuando volvemos a leer un caracter o una ➥cadena de caracteres se toma a ese return como el nuevo dato ingresado. */
    printf("\nEl caracter p3 es: ");
    putchar(p3);
    /* Se utiliza la función putchar para escribir el caracter almacenado en p3. */
    printf("\n");
}