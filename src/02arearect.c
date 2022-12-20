#include<stdio.h>

/*
Determinar el area de un rectangulo
*/

int main(){

//Declarar e inicializar las variables

    int longitud =0, ancho=0, arearectangulo=0;

    printf("Ingrese la longitud de su rectangulo: ");
    scanf("%i", &longitud);

    printf("Ingrese el ancho de su rectangulo: ");
    scanf("%i", &ancho);

    arearectangulo = longitud * ancho;

    printf("El area de su rectangulo dado por ancho %i y de longitud %i es: %i", ancho, longitud, arearectangulo);

    printf("\n");

    return 0;
}