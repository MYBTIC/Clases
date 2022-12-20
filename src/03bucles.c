#include<stdio.h>

int main(){

int nusignos=0;

    printf("Ingrese la cantidad de signos: ");
    scanf("%i",&nusignos);

        for(int i=0; i<nusignos; i++)

            printf("+");
            printf("\n\n");
        for(int i=0; i<nusignos; i++){

            if(i%2==0)
                printf("+");
            else
                printf("-");

        }

    return 0;
}