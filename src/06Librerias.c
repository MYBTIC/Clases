#include<stdio.h>
#include<string.h>
#include"../lib/utilitario.h" //../Salimos de donde nos encontramos

int main(void){

   char linea[]="maxipro";
   char nb1[20], nb2[20];

    printf("La cadena es: %4s", linea);
    printf("\n");
    hilib();
    printf("\n");
    expulsarnombre();

    int a = getnumber("Ingrese numero 1: ");
    int b = getnumber("Ingrese numero 2: ");
    printf("\nLa suma es: %i ", a+b);
    printf("\n\nIngrese nombre1: ");
    gets(nb1);
    printf("\nIngrese nombre2: ");
    gets(nb2);
    if(stringcompare(nb1, nb2)==0)
        printf("\nSon iguales\n");
    else
        printf("No son iguales\n\n");

    
  
}