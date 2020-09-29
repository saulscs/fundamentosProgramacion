/* Funciones para el manejo de cadenas de caracteres de la biblioteca stdio.h. */

#include <stdio.h>

int main(){
  char *cad0 = "Buenos días"; 
/* En este caso se asignan 11 caracteres más el
➥caracter de terminación ‘\0’ a la posición de memoria a la que apunta la
➥variable cad0 —apuntador del tipo cadena de caracteres. */
char cad1[20] = "Hola"; 
/* Se asignan cuatro caracteres más el caracter
➥de terminación a la variable tipo char cad1. Observa que cad1 tiene espacio
➥para 20 caracteres.*/
char cad2[] = "México"; 
/* En este caso se asignan seis caracteres (más
➥el caracter de terminación) a la variable cad2. Observa que cad2 no tiene espacio
➥reservado como cad1; por lo tanto, acepta cualquier número de caracteres. */
char cad3[] = {'B', 'i', 'e', 'n', 'v', 'e', 'n', 'i', 'd', 'o', '\0'};
/* Observa otra forma de asignación de valores a la variable cad3. */
char cad4[20], cad5[20], cad6[20];
printf("\nLa cadena cad0 es: ");
puts(cad0);
/* La función puts es la más apropiada para escribir cadenas de caracteres.
➥Observa que esta función baja automáticamente una línea después de imprimir
➥la cadena. */
printf("\nLa cadena cad1 es: ");
printf("%s", cad1);
/* La función printf, con el formato de variable %s, también se puede utilizar
➥para escribir cadenas de caracteres. Baja automáticamente una línea después
➥de escribir la cadena.*/
printf("\nLa cadena cad2 es: ");
puts(cad2);
printf("\nLa cadena cad3 es: ");
puts(cad3);
printf("\nIngrese una línea de texto —se lee con gets—: \n");
/* La función gets es la más apropiada para leer cadenas de caracteres. */
gets(cad4);
printf("\nLa cadena cad4 es: ");
puts(cad4);
fflush(stdin);
printf("\nIngrese una línea de texto —se lee con scanf—: \n");
scanf("%s", cad5);
/* La función scanf, con el formato de variable %s, también se puede utilizar
➥para leer una cadena de caracteres, aunque con algunas restricciones. Si la
➥cadena está formada por varias palabras sólo lee la primera. Por ejemplo, si
➥queremos ingresar la cadena “Buenos días”, sólo lee la palabra “Buenos”, por
➥ello esta función únicamente es útil si conocemos con anticipación que la
➥cadena que vamos a leer está formada por una sola palabra. */
printf("\nLa cadena cad5 es: ");
printf("%s", cad5);
fflush(stdin);
char p;
int i = 0;
/* La declaración de variables siempre se debe realizar en la parte inicial del
➥programa. En este caso se colocan en esta sección (char p e int i = 0) para
➥que puedas observar la relación directa con las líneas de programación que se
➥muestran a continuación. */
printf("\nIngrese una línea de texto —se lee cada caracter con getchar—: \n");
/* Se utiliza la función getchar para leer caracteres de la línea de texto y
➥asignarlos a la variable de tipo cadena de caracteres cad6. Observa que se leen
➥caracteres mientras no se encuentre al caracter que indica fin de línea ‘\n’. */
while ((p = getchar())!= '\n')
cad6[i++] = p;
cad6[i] = '\0';
/* Al final de la cadena se incorpora el caracter de terminación NULL para
➥indicar el fin de la misma. */
printf("\nLa cadena cad6 es: ");
puts(cad6);
}