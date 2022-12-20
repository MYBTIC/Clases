#include<stdio.h>

int main(){

void generateAutomatedStareCase(int signos){
char car = '+';
char obs = '-';
        for(int c=0;c<signos; c++){
                if(c%2==0){
                    printf("__%c__", car);
                }
                    else
                    printf("__%c__", obs);

            printf("\n");

                for(int i=0; i<=c; i++){
                    if(c==0){
                    printf("     ");
                     }
                      else
                    printf("      ");                    
                }
                    printf("|");


        }



    }


    



int nusignos;

    printf("Digite la cantidad de escaleras que desea: "); scanf("%i", &nusignos);

    printf("\n\n");

    generateAutomatedStareCase(nusignos);


return 0;
}