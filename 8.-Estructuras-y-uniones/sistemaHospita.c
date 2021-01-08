/* Hospital.
El programa genera información acerca de los pacientes de un hospital. */

#include <stdio.h>
#include <string.h>

/* Declaración de la estructura domicilio. */

typedef struct { 
  char cal[20]; /* Calle. */
  int num; /* Número. */
  char col[20]; /* Colonia. */
  char cp[5]; /* Código Postal. */
  char ciu[20]; /* Ciudad. */
} domicilio;


typedef struct {
  char nom[20]; /* Nombre y apellido. */
  int edad;
  char sexo;
  int con; /* Condición. */
  domicilio dom;
  char tel[10];
} paciente;

/* Prototipos de funciones. */

void lectura(paciente *, int);
void registros(paciente *, int);
void noPacientes(paciente *, int);
void maximaGravedad(paciente *, int);


int main(){
  paciente HOSPITAL[100];
  int TAM;
  do{
    printf("Ingrese el numero de pacientes: ");
    scanf("%d", &TAM);
  } while(TAM > 50 || TAM < 1);
  lectura(HOSPITAL,TAM);
  registros(HOSPITAL,TAM);
  noPacientes(HOSPITAL,TAM);
  maximaGravedad(HOSPITAL,TAM);
}

void lectura(paciente A[], int T){
  /* Esta función se utiliza para leer un arreglo unidimensional de tipo ➥estructura paciente de T elementos. */
  int I;
  for(I=0; I<T; I++){
    printf("\n\t\tPaciente %d", I+1);
    fflush(stdin);
    printf("\nNombre: ");
    scanf(" %s", A[I].nom);
    printf("\nEdad: ");
    scanf(" %d", &A[I].edad);
    printf("\nSexo (F/M): ");
    scanf(" %s", &A[I].sexo);
    printf("\nCondición (1..5): ");
    scanf("%d", &A[I].con);
    fflush(stdin);
    printf("\tCalle: ");
    scanf(" %s", A[I].dom.cal);
    printf("\tNúmero: ");
    scanf("%d", &A[I].dom.num);
    fflush(stdin);
    printf("\tCódigo Postal: ");
    scanf(" %s", A[I].dom.cp);
    fflush(stdin);
    printf("\tCiudad: ");
    scanf("%s", A[I].dom.ciu);
    fflush(stdin);
    printf("Teléfono: ");
    scanf(" %s", A[I].tel);
  }
}

void registros(paciente A[], int T){
  /* Esta función se utiliza para obtener el porcentaje tanto de hombres como de ➥mujeres registrados en el hospital. */
  int I,FEM,MAS,TOT;
  for(I=0; I < T; I++)
    switch(A[I].sexo){
      case 'F': FEM++; break;
      case 'M': MAS++; break;
    }
    TOT = FEM + MAS;
    printf("\nPorcentaje de Hombres: %.2f", (float)MAS/TOT *100);
    printf("\nPorcentaje de Mujeres: %.2f", (float)FEM/TOT *100);
}

void noPacientes(paciente A[], int T){
  /* Esta función se utiliza para obtener el número de pacientes que ingresaron al ➥hospital en cada una de las categorías de condición. */
  int I, C1 =0, C2 = 0, C3 =0, C4 = 0, C5 =0;
  for (I=0; I < T; I++)
    switch(A[I].con){
      case 1: C1++; break;
      case 2: C2++; break;
      case 3: C3++; break;
      case 4: C4++; break;
      case 5: C5++; break;
    }
    printf("\nNúmero pacientes en condición 1: %d", C1);
    printf("\nNúmero pacientes en condición 2: %d", C2);
    printf("\nNúmero pacientes en condición 3: %d", C3);
    printf("\nNúmero pacientes en condición 4: %d", C4);
    printf("\nNúmero pacientes en condición 5: %d", C5);
}


void maximaGravedad(paciente A[], int T){
  /* La función F3 se utiliza para generar el nombre y teléfono de todos los ➥pacientes que tuvieron una condición de ingreso de máxima gravedad (5). */
  int I;
  printf("\nPacientes ingresados en estado de gravedad");
  for (I=0; I<T; I++)
    if(A[I].con == 5)
      printf("\nNombre: %s\tTelefono: %s", A[I].nom,A[I].tel);
}