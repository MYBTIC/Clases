#include<stdio.h>

int main(){
 
void showCuadrado(int tamano)
{

    for(int f=0; f<tamano; f++){    //Siendo f vertical

        for(int c=0; c<tamano; c++)  //siendo c horizonatal
            if((f==0)||(c==0)||(f==tamano-1)||(c==tamano-1))
                printf("+");
            else
            printf(" ");

        printf("\n\n");

    }

}
void showCuadradoSignosAlternos(int signos){


        char car = '+';
            for(int f=0; f<signos; f++){

                for(int c=0; c<signos; c++){
                  
                    car = ((c+f)%2==0)?'+':'-';
                        if((c==0)||(f==0)||(c==signos-1)||(f==signos-1)){

                            printf("%c ", car);
                        }
                        else
                        printf("  ");
            }
                printf("\n\n");
            }
            
}

int nusignos=0;

    printf("Ingrese la cantidad de signos: ");
    scanf("%i",&nusignos);
    printf("\n\n");
        
        showCuadrado(nusignos);
        printf("\n\n");
        showCuadradoSignosAlternos(nusignos);

        printf("\n\n");
    return 0;
}

