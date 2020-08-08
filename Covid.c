/*Programa que determine el grado de vulnerabilidad de una persona de contraer COVID*/

/*Directivas del procesador*/
#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int main() {   /*Funcion princinpal*/
    /*Variables*/
    int sexo, edad, peso, enfermedad,diabetes,hiper,fumar,epoc,cardio,inmuno,sumatoria ,sx,ed,pe,en;
    char *riesgo, *factor;
    /*Menu preguntas */
    printf("\n Ingresa el número correspondiente a tu respuesta \n\n");
    
    printf("\n Selecciona tu sexo \n \n 1. Masculino \n 2. Femenino \n Opción: ");
    
    scanf("%d", &sx);
    
    switch(sx){
        case 1:
            sexo = 50;
            break;
        case 2:
            sexo = 30;
            break;
    }
    
    printf("\n Selecciona tu edad \n \n 1. 18 a 25  \n 2. 26 a 34 \n 3. 35 a 45 \n 4. 46 a 59 \n 5. 60 o más  \n Opción: ");

    scanf("%d", &ed);
    
    switch(ed){
        case 1:
            edad = 10;
            break;
        case 2:
            edad = 30;
            break;
        case 3:
            edad = 50;
            break;
        case 4:
            edad= 70;
            break;
        case 5:
            edad = 100;
            break;
    }
    
    printf("\n Selecciona tu peso \n\n 1.Peso bajo \n 2.Peso normal \n 3.Sobre peso \n 4.Obesidad \n Opción: ");

    scanf("%d", &pe);
    switch (pe){
        case 1:
            peso = 70;
            break;
        case 2:
            peso = 40;
            break;
        case 3:
            peso = 70;
            break;
        case 4:
            peso = 100;
            break;
    }
    
    printf("\n Responde si o no en caso de tener  alguna de estas enfermedades\n");
    
    printf("\n ¿Tienes diabetes? \n 1.Si \n 2.No \n Opción: ");
    scanf("%d", &en);
    switch(en){
        case 1:
            diabetes = 100;
            break;
        case 2:
            diabetes = 0;
            break;
    }
    
    printf("\n ¿Tienes hipertensión? \n 1.Si \n 2.No \n Opción: ");
    scanf("%d", &en);
    switch(en){
        case 1:
            hiper = 100;
            break;
        case 2:
            hiper = 0;
    }
    
    printf("\n ¿Fumas? \n 1.Si \n 2.No \n Opción: ");
    scanf("%d",&en);
    switch (en) {
        case 1:
            fumar = 100;
            break;
        case 2:
            fumar =0;
            break;
    }
    
    printf("\n ¿Enfermedad pulmonar obstructiva crónica? \n 1.Si \n 2.No \n Opción: ");
    scanf("%d", &en);
    switch(en){
        case 1:
            epoc = 100;
            break;
        case 2:
            epoc= 0;
            break;
    }
    
    printf("\n ¿Enfermedad cardiovascular? \n 1.Si \n 2.No \n Opción: ");
    scanf("%d", &en);
    switch(en){
        case 1:
            cardio = 100;
            break;
        case 2:
            cardio= 0;
            break;
    }
    
    printf("\n ¿Tienes inmunosupresión? \n 1.Si \n 2.No \n Opción: ");
    scanf("%d", &en);
    switch(en){
        case 1:
            inmuno = 100;
            break;
        case 2:
            inmuno= 0;
            break;
    }
    
    /*Sumatoria puntos por enfermedad*/
    
    enfermedad = diabetes + hiper + fumar + epoc +cardio +inmuno;
    
    /*Sumatoria puntos total*/
    sumatoria = sexo +  edad + peso + enfermedad;
    
    /*Nivel de riesgo*/
    
    if(sumatoria >= 0 && sumatoria <= 139){
        riesgo = "Nivel de  riesgo es medio";
    }
    else if (sumatoria >= 140 && sumatoria <=169){
        riesgo= "Nivel de  riesgo es alto";
    }
    else {
        riesgo="Nivel de riesgo muy es alto";
    }
    
    /*Factor de riesgo*/
    
    if (sumatoria >= 0 && sumatoria <=  139 ){
        factor="1";
    }
    else if (sumatoria >= 140 && sumatoria <=  169){
        factor = "2";
    }
    else if (sumatoria >= 170 && sumatoria <=  200){
        factor ="3";
    }
    else if (sumatoria >= 201 && sumatoria <=  300){
        factor ="4";
    }
    else if (sumatoria >= 301 && sumatoria <=  400){
        factor ="5";
    }
    else if (sumatoria >= 401 && sumatoria <=  500){
        factor ="6";
    }
    else if (sumatoria >= 501 && sumatoria <=  600){
        factor ="7";
    }
    else if (sumatoria >= 601 && sumatoria <=  700){
        factor ="8";
    }
    else if (sumatoria >= 701 && sumatoria <=  800){
        factor ="9";
    }
    else {
        factor="10";
    }
    
    /*Mostrar resultados*/
    
    system("clear");
    printf("\nTu: %-s\n\n", riesgo);
    printf("\nTu Factor de riesgo: %-s\n\n", factor);
    system("pause");
    return 0;
}

