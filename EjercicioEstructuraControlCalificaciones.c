/*Aplicación de estructuras de control*/

/*Programa que calcula el promedio del estudiante y se asigna porcentaje de beca*/

/*Directivas del procesador*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*Función principal*/
int main()
{
    /*Variables*/
    char nombre[20], mat1[20], mat2[20], mat3[20], mat4[20];
    char *beca;
    float calf1, calf2, calf3, calf4, promedio;

    //ESTRUCTURA SECUENCIAL

    /*Mensaje para ingresar nombre*/
    printf("Ingresa tu nombre: ");
    scanf("%[^\n]", nombre);

    /*Ingresar Nombre de la materia y califiación*/
    printf("Ingresa el nombre de la materia: ");
    scanf("%s", mat1);
    printf("Ingresa tu calificación: ");
    scanf("%f", &calf1);

    printf("Ingresa el nombre de la materia: ");
    scanf("%s", mat2);
    printf("Ingresa tu calificación: ");
    scanf("%f", &calf2);

    printf("Ingresa el nombre de la materia: ");
    scanf("%s", mat3);
    printf("Ingresa tu calificación: ");
    scanf("%f", &calf3);

    printf("Ingresa el nombre de la materia: ");
    scanf("%s", mat4);
    printf("Ingresa tu calificación: ");
    scanf("%f", &calf4);

    // SELECTIVA DOBLE

    /*Calcular el promedio*/
    promedio = (calf1 + calf2 + calf3 + calf4) / 4;

    /*Saber si tiene beca*/
    if (promedio >= 9 && promedio <= 10)
    {
        beca = "50%";
    }
    else if (promedio >= 8 && promedio < 9)
    {
        beca = "30%";
    }
    else
    {
        beca = "Sin derecho a beca";
    }

    /*Datos de salida*/
    printf("\n\nNombre: %-s\n\n", nombre);
    printf("Promedio: %-5.1f\n\n", promedio);
    printf("Porcentaje de Beca: %-s\n\n", beca);

    printf("\n\nMateria %-s ", mat1);
    printf(": %-5.1f\n\n", calf1);

    printf("Materia %-s ", mat2);
    printf(": %-5.1f\n\n", calf2);

    printf("Materia %-s ", mat2);
    printf(": %-5.1f\n\n", calf2);

    printf("Materia %-s ", mat3);
    printf(": %-5.1f\n\n", calf3);

    printf("Materia %-s ", mat4);
    printf(": %-5.1f\n\n", calf4);
    return 0;
}