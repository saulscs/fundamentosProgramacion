
/*calcule el costo de internación de un cliente, según los datos de la tabla 2.6.
Se sabe que los clientes mayores de 60 años tienen un descuento de 25% y los
clientes menores de 25 años, de 15%.*/

#include <stdio.h>
#include <math.h>


int main (){
    int TRA, EDA,DIA;
    float COS;

    printf("\nTratamientos \n\t1.- 2800 \n\t2.-1950 \n\t3.-2500 \n\t4.-1150");

    printf("\nIngresa el tipo de tratamiento, edad y dias: ");
    scanf("%d %d %d", &TRA, &EDA, &DIA);

    switch(TRA){
    case 1: COS = DIA * 2800; break;
    case 2: COS = DIA * 1950; break;
    case 3: COS = DIA * 2500; break;
    case 4: COS = DIA * 1150; break;
    default: COS = -1; break;
    }
    
    if (COS != -1){
        if(EDA >= 60){
            COS = COS * 0.75;
    } else {
        if (EDA <= 25){
            COS = COS * 0.85;
        }
    }
        printf("\nLa clave es: %d, Dias:%d, Costo: %8.2f", TRA,DIA,COS);
    } else {
        printf("\n La clave es incorrecta");
    }
}