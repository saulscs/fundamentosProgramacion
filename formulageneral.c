#include<stdio.h>
#include<math.h>

int main(int argc, char** args){
    float a, b, c, disc, x1, x2, xi, xr;
    printf("\n\t\tSolucion de una ecuacion de segundo grado");
    printf("\n\t\t_________________________________________\n\n\n");


    printf("\t\t\tEscribe el valor de a --> ");
    scanf("%f", &a);
    while(a==0){
    printf("\t\tEl valor de a no puede ser 0 ingrese el valor de nuevo -->");
    scanf("%f", &a);
    }

    
    printf("\t\t\tEscribe el valor de b --> ");
    scanf("%f", &b);
    printf("\t\t\tEscribe el valor de c --> ");
    scanf("%f", &c);


    disc=pow(b, 2.0)-4*a*c;
    if(disc>0.0){
        printf("\t\t\tLas dos raices son reales");
        x1=((-b+sqrt(disc))/(2.0*a));
        x2=((-b-sqrt(disc))/(2.0*a));
        printf("\n\t\t\tx1=%.2f   x2=%.2f", x1, x2);
    } 
    else{
        if(disc==0.0){
            x1=(-b)/(2.0*a);
            printf("\n\t\t\tLa ecuacion solo tiene una raiz %.2f", x1); 
        }
        else{
            xr=(-b/(2.0*a));
            xi=(sqrt(-disc)/(2.0*a));
            printf("\n\t\tLa raiz real es %.2f y la imaginaria es %.2f", xr, xi);
        }
    }
} 
