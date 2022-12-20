#include<stdio.h>

int main(){
    void createOpcionUno(int opsal){
        char rsta[]={'S','i','N','o'};
        int opclong = 3;
        int opc[opclong];
            if(opsal==1){
                printf("\n\n");
                printf("Has llegado al otro lado del rio y dejado a la señorita. Quien sera el proximo en ser llevado a la orilla: \n\n");
                printf("1. Lobo\n");
                printf("2. Uvitas\n\n");
                printf("Introduzca su opcion a elegir: ");scanf("%i",&opc[0]);
                       if(opc[0]==1){
                            printf("Has llegado al otro lado del rio y dejado al lobo. Deseas volver: \n\n");
                            printf("1.");
                            printf("%c",rsta[0]);
                            printf("%c\n\n",rsta[1]);
                            printf("2.");
                            printf("%c",rsta[2]);
                            printf("%c\n\n",rsta[3]);
                            printf("Introduzca su opcion: ");scanf("%i",&opc[1]);
                                if(opc[1]==1){
                                    printf("\n\nGAME OVER (>?<) El lobo se ceno a tu Caperusita.\n\n");}

                                   else if(opc[1]==2){
                                      printf("\nDeseas regresar de nuevo a la base del rio con: ");
                                      printf("\n\n1. Caperucita\n\n");
                                      printf("Introduzca su opcion: ");scanf("%i",&opc[2]);}
                                        if(opc[2]==1){
                                            printf("Estas de vuelta en la orilla, a quien deseas llevar: ");
                                            printf("\n\n1. Uvitas\n\n");
                                            printf("Introduzca su opcion: ");scanf("%i",&opc[3]);}
                                                 if(opc[3]==1){
                                                     printf("Acabas de dejar a las uvitas con el Lobo. Solo te queda volver por Caperusita");
                                                    printf("\n\nIntroduzca numero 1, para regresar por caperusita: "); scanf("%i",&opc[4]);
                                                    printf("\n\nFELICIDADES LO LOGRASTE. TODOS ESTAN A SALVO.\n\n");

                                                                    }
                                                            }
                        if(opc[0]==2){
                            printf("Acabas de llegar a la orilla y dejar a las uvitas, Deseas volver: ");
                            printf("\n\n1.");
                            printf("%c",rsta[0]);
                            printf("%c\n\n",rsta[1]);
                            printf("2.");
                            printf("%c",rsta[2]);
                            printf("%c\n\n",rsta[3]);
                            printf("Introduzca su opcion: ");scanf("%i",&opc[5]);
                                if(opc[5]==1){
                                    printf("\n\nGAME OVER (>?<) La caperusita se ceno las uvitas.\n\n");
                                }
                                else if(opc[5]==2){
                                     printf("\nDeseas regresar de nuevo a la base del rio con: ");
                                      printf("\n\n1. Caperucita\n\n");
                                      printf("Introduzca su opcion: ");scanf("%i",&opc[6]);}
                                        if(opc[6]==1){
                                            printf("Estas de vuelta en la orilla, a quien deseas llevar: ");
                                            printf("\n\n1. Lobo\n\n");
                                            printf("Introduzca su opcion: ");scanf("%i",&opc[3]);}
                                                 if(opc[3]==1){
                                                     printf("Acabas de dejar a las uvitas con el Lobo. Solo te queda volver por Caperusita");
                                                    printf("\n\nIntroduzca numero 1, para regresar por caperusita: "); scanf("%i",&opc[4]);
                                                    printf("\n\nFELICIDADES LO LOGRASTE. TODOS ESTAN A SALVO.\n\n");

                                                                    }
                                        }
                                }
                        }
    void createOpcionDos(int opsald){
        if(opsald==2){
            printf("\n\nGAME OVER (>?<) La caperusita se ceno las uvitas.\n\n");
        }
    }                                       
    void createOpcionTres(int opsalt){
        if(opsalt==3)
        printf("\n\nGAME OVER (>?<) El lobo se ceno a tu Caperusita.\n\n");
    }       

    int opciones;
        
            printf("En un bosque precedido por un rio se encuentran un observador, un lobo, una señorita, y unas uvas. El observador vigila que el lobo no se coma a la señorita, y a su vez ella se coma las uvitas. El observador debe llevar a todos a la otra orilla del rio. Lastimosamente solo puede ir uno en la barca. ");
            printf("\n\n");
            printf("Eliga que desea hacer primero: \n\n"); 
            printf("1. LLevar a la caperusita a bordo \n\n");
            printf("2. LLevar al lobo a bordo \n\n");
            printf("3. LLevar a las uvitas a bordo \n\n");
            printf("Introduzca su opcion: ");scanf("%i",&opciones);
    createOpcionUno(opciones);
    createOpcionDos(opciones);
    createOpcionTres(opciones);

    return 0;
}