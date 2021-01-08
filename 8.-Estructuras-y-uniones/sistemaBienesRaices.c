/* Bienes raíces.
El programa maneja información sobre las propiedades que tiene una empresa ➥de bienes raíces de la ciudad de Lima, Perú, tanto para venta como para ➥renta. */

#include <stdio.h>
#include <string.h>

/* Declaración de la estructura ubicación.*/
typedef struct {
  char zona[20];
  char calle[20];
  char colo[20];  /* Colonia. */
}ubicacion;

typedef struct{
  char clave[5];
  float scu;  /* Superficie cubierta. */
  float ste;  /* Superficie terreno. */
  char car[50]; /* Características. */
  ubicacion ubi;
  float precio;
  char dispo;   /* Disponibilidad. */
}propiedades;

/* Prototipos de funciones. */

void leer(propiedades *, int);
void listaVenta(propiedades *, int);
void listaRenta(propiedades *, int);

int main(){
  propiedades PROPIE[100];
  /* Se declara un arreglo unidimensional de tipo estructura propiedades. */
  int TAM;
  do{
    printf("Ingresa el numero de propiedades: ");
    scanf("%d", &TAM);
  } while(TAM > 100 || TAM < 1);
  leer(PROPIE,TAM);
  listaVenta(PROPIE,TAM);
  listaRenta(PROPIE,TAM);
}

void leer(propiedades A[], int T){
  /* Esta función se utiliza para leer un arreglo unidimensional de tipo estructura propiedades de T elementos. */
  int I;
  for (I=0; I <T; I++){
    printf("\n\t\tIngrese datos de la propiedad %d", I + 1);
    printf("\n\tClave: ");
    fflush(stdin);
    scanf(" %s", A[I].clave);
    printf("\n\tSuperficie cubierta: ");
    scanf("%f", &A[I].scu);
    printf("\n\tSuperficie terreno: ");
    scanf("%f", &A[I].ste);
    printf("\n\tCaracterísticas: ");
    fflush(stdin);
    scanf("%s", A[I].car);
    printf("\tZona: ");
    fflush(stdin);
    scanf("%s", A[I].ubi.zona);
    printf("\tCalle: ");
    fflush(stdin);
    scanf("%s", A[I].ubi.calle);
    printf("\tColonia: ");
    fflush(stdin);
    scanf(" %s", A[I].ubi.colo);
    printf("\n\tPrecio: ");
    scanf("%f", &A[I].precio);
    printf("\n\tDisponibilidad (Venta-V Renta-R): ");
    scanf(" %s", &A[I].dispo);
  }
}

void listaVenta(propiedades A[], int T){
  /* Esta función se utiliza para generar un listado de las propiedades ➥disponibles para venta en la zona de Miraflores, cuyo valor oscila entre ➥450,000 y 650,000 nuevos soles. */
  int I;
  printf("\n\t\tListado de Propiedades para Venta en Miraflores”);");
  for(I=0; I < T; I++)
    if((A[I].dispo = 'V') && (strcmp(A[I].ubi.zona, "Miraflores") == 0))
    if((A[I].precio >= 450000) && (A[I].precio <= 65000)){
      printf("\nClave de la propiedad: ");
      puts(A[I].clave);
      printf("\nSuperficie cubierta: %f", A[I].scu);
      printf("\nSuperficie terreno: %f", A[I].ste);
      printf("\nCaracterísticas: ");
      puts(A[I].car);
      printf("Calle: ");
      puts(A[I].ubi.calle);
      printf("Colonia: ");
      puts(A[I].ubi.colo);
      printf("Precio: %.2f\n", A[I].precio);
    }
}


void listaRenta(propiedades A[], int T){
  /* Al recibir como datos una zona geográfica de Lima, Perú, y un cierto rango ➥respecto al monto, esta función genera un listado de todas las propiedades
  ➥disponibles para renta. */

  int I; 
  float li,ls;
  char zon[20];
  printf("\n\t\tListado de Propiedades para Renta");
  printf("\nIngrese zona geográfica: ");
  fflush(stdin);
  scanf("%s", zon);
  printf("Ingrese el límite inferior del precio: ");
  scanf("%f", &li);
  printf("Ingrese el límite superior del precio: ");
  scanf("%f", &ls);

  for(I=0; I < T; I++)
    if((A[I].dispo == 'R') && (strcmp(A[I].ubi.zona, zon)==0))
    if((A[I].precio >= li) && (A[I].precio <=ls)){
      printf("\nClave de la propiedad: ");
      puts(A[I].clave);
      printf("\nSuperficie cubierta: %f", A[I].scu);
      printf("\nSuperficie terreno: %f", A[I].ste);
      printf("\nCaracterísticas: ");
      puts(A[I].car);
      printf("Calle: ");
      puts(A[I].ubi.calle);
      printf("Colonia: ");
      puts(A[I].ubi.colo);
      printf("Precio: %.2f", A[I].precio);
    }
}