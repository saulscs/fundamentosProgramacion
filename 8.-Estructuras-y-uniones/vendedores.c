/* Vendedores.
 El programa maneja información sobre las ventas que realizan los vendedores de
 ➥artículos domésticos de una importante empresa de la Ciudad de México. */

#include <stdio.h>
#include <string.h>
#include <stdint.h>

/* Declaración de la estructura banco. */
typedef struct {
    char noba[10]; /* Nombre del banco. */
    char nucu[10]; /* Número de cuenta. */
}banco;

/* Declaración de la union fpago. */
 typedef union fpago {
    banco che;
    banco nomi;
    char venta:
}fpago;


/* Declaración de la estructura domicilio. */
typedef struct  {
    char cnu[20]; /* Calle y número. */
    char col[20]; /* Colonia. */
    char cp[5];   /* Código Postal. */
    char ciu[15]; /* Ciudad. */
    struct domicilio * vendedor;
}domicilio;

/* Declaración de la estructura vendedor. */
 struct vendedor {
    int num;  /* Número de vendedor. */
    char nom[20]; /* Nombre del vendedor. */
    float ven[12]; /* Ventas del año. Arreglo unidimensional de tipo real. */
    domicilio domi; /* domi es de tipo estructura domicilio. */
    float sal;  /* Salario mensual. */
    union fpago pago; /* pago es de tipo unión fpago. */
    int cla;  /* Clave forma de pago. */
};

/* Prototipos de funciones. */

void Lectura(vendedor *, int);
void ventasTotales(vendedor *, int);
void incrementoSalario(vendedor *, int);
void menoreVentas(vendedor *, int);
void cuentaCheques(vendedor *, int);

int main(void){
    /* Declaración del arreglo unidimensional de tipo estructura vendedor. */
    vendedor VENDEDORES[100];
    int TAM;
    do{
        printf("Ingrese el numero de vendedores: ");
        scanf("%d", &TAM);
    } while(TAM > 100 || TAM < 1);
    Lectura(VENDEDORES, TAM);
    ventasTotales(VENDEDORES, TAM);
    incrementoSalario(VENDEDORES, TAM);
    menoreVentas(VENDEDORES, TAM);
    cuentaCheques(VENDEDORES, TAM);
}


void Lectura(vendedor A[], int T){
    /* Esta función se utiliza para leer un arreglo unidimensional de tipo ➥estructura vendedor de T elementos. */
    int I, J;
    for (I=0; I<T; I++){
        printf("\n\tIngrese datos del vendedor %d", I+1);
        printf("\nNúmero de vendedor: ");
        scanf("%d", &A[I].num);
        printf("Nombre del vendedor: ");
        fflush(stdin);
        scanf(" %s", A[I].nom);
        printf("Ventas del año: \n");
        for(J=0; J<12; J++){
            printf("\nMes %d: ", J+1);
            scanf("%f", A[I].ven[J]);
        }
        printf("Domicilio del vendedor: \n");
        printf("\tCalle y número: ");
        fflush(stdin);
        scanf(" %s", A[I].domi.cnu);
        printf("\tColonia: ");
        fflush(stdin);
        scanf(" %s"A[I].domi.col);
        printf("\tCódigo Postal: ");
        fflush(stdin);
        scanf(" %s",A[I].domi.cp);
        printf("\tCiudad: ");
        fflush(stdin);
        scanf(" %s"A[I].domi.ciu);
        printf("Salario del vendedor: ");
        scanf("%f", &A[I].sal);
        printf("Forma de Pago (Banco-1 Nómina-2 Ventanilla-3): ");
        scanf("%d", &A[I].cla);
        
        switch (A[I].cla){
            case 1: {
                printf("\tNombre del banco: ");
                fflush(stdin);
                scanf(" %s", A[I].pago.che.noba);
                printf("\tNumero de cuenta: ");
                fflush(stdin);
                scanf(" %s", A[I].pago.che.nucu);
                break;
            }
            case 2: {
                printf("\tNombre del banco: ");
                fflush(stdin);
                scanf(" %s", A[I].pago.nomi.noba);
                printf("\tNumero de cuenta: ");
                fflush(stdin);
                scanf(" %s", A[I].pago.nomi.nucu);
                break;
            }
            case 3: A[I].pago.venta = 'S';
                break;
        }
    }
}

void ventasTotales(vendedor A[], int T){
    /* Esta función se utiliza para generar las ventas totales anuales de cada uno ➥de los vendedores de la empresa. */
    int I,J;
    float SUM;
    printf("\n\t\tVentas Totales de los Vendedores");
    for(I=0; I <T; I++){
        printf("\nVendedor: %d", A[I].num);
        SUM=0.0;
        for(J=0; J<12; J++)
            SUM += A[I].ven[J];
        printf("\nVentas: %.2f\n", SUM);
    }
}

void incrementoSalario(vendedor A[], int T){
    /* Esta función se utiliza para incrementar 5% el salario de todos aquellos ➥vendedores cuyas ventas anuales superaron $1,500,000. */
    int I,J;
    float SUM;
    printf ("\n\t\tIncremento a los Vendedores con Ventas > 1,500,000$");
    for(I=0; I <T; I++){
        SUM = 0.0;
        for (J=0; J<12; J++)
            SUM += A[I].ven[J];
        if(SUM > 150000.00){
            A[I].sal = A[I].sal * 1.05;
            printf("\nNúmero de empleado: %d\nVentas: %.2f\nNuevo salario: %.2f", A[I].num, SUM, A[I].sal);
        }
    }
}

void menoreVentas(vendedor A[], int T){
    /* Esta función se utiliza para generar un listado de todos aquellos ➥vendedores que en el año vendieron menos de $300,000. */
    int I,J;
    float SUM;
    printf("\n\tVendedores con ventas de < 300,000");
    for(I=0; I < T; I++){
        SUM = 0.0;
        for (J=0; J<12; J+++)
            SUM += A[I].ven.[J];
        if(SUM < 300000.00)
            printf("\nNumero de empleado: %d\nNombre: %s\nVentas: %.2f", A[I].num, A[I].nom,SUM);
    }
}

void cuentaCheques(vendedor A[], int T){
    /* Esta función se usa para imprimir el número de empleado, el nombre del ➥banco y el número de cuenta de todos aquellos empleados a quienes se les ➥deposita su sueldo en cuenta de cheques. */
    int I;
    float SUM;
    printf("\n\t\tVendedores con Cuenta en el banco");
    for (I=0; I<T; I++)
        if(A[I].cla ==1)
            printf("\nNumero de vendedor: %d\nBanco: %s\nCuenta: %s", A[I].num, A[I].pago.che.noba, A[I].pago.che.nucu);
}
