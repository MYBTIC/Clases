#include<stdio.h>

void MatrizInterger(){

int fila=3, columna=4;
int m[fila][columna];       //Creacion de matriz, 3 filas y 4 colummnas.


m[0][0]=2;
m[0][1]=4;
m[0][2]=6;          //Fila de pares
m[0][3]=8;

m[1][0]=1;                    //control D corte matricial/cambio de algo por algo
m[1][1]=3;                    //shift alt y marco con el click
m[1][2]=5;          //Fila de impares
m[1][3]=7;

m[2][0]=0;
m[2][1]=0;
m[2][2]=0;          //Fila de ceros
m[2][3]=0;
                   
    for(int fi=0;fi < fila; fi++){       //-->fila

        for(int ci=0;ci <columna; ci++){  //-->columna

            printf("%i \t", m[fi][ci]);
    }
    printf("\n");
}
}

void MatrizIntergerCuadrada(){

    int mc[4][4]= {
                    {1, 2, 3, 0}
                    ,{4, 5, 6, 0}          //Otra manera de escribir mtrices
                    ,{7, 8, 9, 0}
                    ,{0, 0, 0, 0}
                };

int fila = sizeof(mc)/sizeof(mc[0]); //Dame la dimension de las filas del primer segmento = 0
int columna = sizeof(mc[0])/sizeof(mc[0][0]); //Dame la dimension de las columnas del primer segmento = 0 y cuantas columnas hay
int nroelementos = sizeof(mc)/sizeof(mc[0][0]); //Dame la dimension de las columnas del primer segmento = 0 y cuantas columnas hay

for(int fi=0;fi < fila; fi++){       //-->fila

        for(int ci=0;ci <columna; ci++){  //-->columna

            printf("%i \t", mc[fi][ci]);
    }
    printf("\n");
}

printf("Fila = %i \n", fila);
printf("Columna = %i \n", columna);
printf("Nro elementos = %i \n", nroelementos);
printf("Sizeof = %i \n",sizeof(mc));
printf("\nDiagonal principal: \n");
printf("\n");

for(int fi=0;fi < fila; fi++){       //-->fila

        for(int ci=0;ci <columna; ci++){  //-->columna
            if(fi == ci)
                printf("%i \t", mc[fi][ci]);
            else
                printf(" \t");
    }
    printf("\n");
}
printf("\nDiagonal secundaria: \n\n");
for(int fi=0;fi < fila; fi++){       //-->fila

        for(int ci=0;ci <columna; ci++){  //-->columna
            if((fi + ci + 1) == fila)   //Valido para toda fila
                printf("%i \t", mc[fi][ci]);
            else
                printf(" \t");
    }
    printf("\n");
}
printf("\nDiagonal principal y secundaria: \n\n");
for(int fi=0;fi < fila; fi++){       //-->fila

        for(int ci=0;ci <columna; ci++){  //-->columna
            if(((fi + ci + 1) == fila)||(fi == ci))   //Valido para toda fila
                printf("%i \t", mc[fi][ci]);
            else
                printf(" \t");
    }
    printf("\n");
}
}


int main(void){

//system("clear"); //clr
//MatrizInterger();
MatrizIntergerCuadrada();

}