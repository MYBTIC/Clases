#include<stdio.h>

//Arreglos de numeros pares.

int main(){

int paresLong = 10;
int pares[paresLong];
int parMax;
    for(int i=0; i<paresLong; i++){

        pares[i] = i*2; //Asignar a nuestro arreglo de 10 elementos numeros pares.

    }
    
        parMax = pares[0];

    for(int i=0; i<paresLong; i++){

        if(parMax<pares[i])
            parMax = pares[i];

    }
    printf("El valor maximo del array es: %i", parMax);



    return 0;
}