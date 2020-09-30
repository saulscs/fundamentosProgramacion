/* Estructuras-1.
El programa muestra la manera en que se declara una estructura, así como la ➥forma en que se tiene acceso a los campos de las variables de tipo estructura ➥tanto para asignación de valores como para lectura y escritura. */

#include <stdio.h>
#include <string.h>

/* Declaración de la estructura. */
struct alumno{
  int matricula;
  char nombre[20];
  char carrera[20];
  float promedio;
  char direccion[20];
};

int main(void) {
  /* Observa que las variables de tipo estructura se declaran como cualquier otra variable. a1, a2 y a3 son variables de tipo estructura alumno. */
  struct alumno a1 = {120, "María", "Contabilidad", 8.9, "Querétaro"}, a2, a3;
  char nom[20], car[20], dir[20];
  int mat;
  float pro;
  /* Los campos de a2 reciben valores por medio de una lectura. */
  printf("\nIngrese la matrícula del alumno 2: ");
  scanf("%d", &a2.matricula);
  fflush(stdin);
  printf("Ingrese el nombre del alumno 2: ");
  scanf("%s", a2.nombre);
  printf("Ingrese la carrera del alumno 2: ");
  scanf("%s",a2.carrera);
  printf("Ingrese el promedio del alumno 2: ");
  scanf("%f", &a2.promedio);
  fflush(stdin);
  printf("Ingrese la dirección del alumno 2: ");
  scanf("%s",a2.direccion);
  
  /* Los campos de a3 reciben valores por medio de asignaciones. */
  printf("\nIngrese la matrícula del alumno 3: ");
  scanf("%d", &mat);
  a3.matricula = mat;
  fflush(stdin);
  printf("Ingrese el nombre del alumno 3: ");
  scanf(" %s", a3.nombre);

  printf("Ingrese la carrera del alumno 3: ");
  scanf(" %s",  a3.carrera);
  printf("Ingrese el promedio del alumno 3: ");
  scanf("%f", &pro);
  a3.promedio = pro;
  fflush(stdin);
  printf("Ingrese la dirección del alumno 3: ");
  scanf(" %s", a3.direccion);


  /* Observe la forma en que se imprimen los campos de a1 y a2. */
  printf("\nDatos del alumno 1\n");
  printf("%d\n", a1.matricula);
  puts(a1.nombre);
  puts(a1.carrera);
  printf("%.2f\n", a1.promedio);
  puts(a1.direccion);

  printf("\nDatos del alumno 2\n");
  printf("%d\n", a2.matricula);
  puts(a2.nombre);
  puts(a2.carrera);
  printf("%.2f\n", a2.promedio);
  puts(a2.direccion);
  
  /* Observa otra forma de escribir los campos de la variable de tipo estructura a3. */
printf("\nDatos del alumno 3\n");
printf("%d \t %s \t %s \t %.2f \t %s", a3.matricula, a3.nombre, a3.carrera,
a3.promedio, a3.direccion);
}