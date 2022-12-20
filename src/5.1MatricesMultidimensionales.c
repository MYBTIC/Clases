#include<stdio.h>

void MatrizLetra1Nombre(){
    int fila=6, columna=6;
    char Nombre[fila][columna];

        for(int i=0; i<fila; i++){
            for(int j=0; j<columna; j++){
                Nombre[i][j]='X';
            }
            }

            for(int i=0; i<fila; i++){
                for(int j=0; j<columna; j++){
                     
                    if((j==0)&&(i<fila+1)||(j==5)&&(i<fila+1)||(i+j == j)&&(j!=2)&&(j!=3)||(i+j==j+1)&&(i!=1)||(i+j==j+2)&&(j!=4)&&(j!=1)){
                         printf("%c \t", Nombre[i][j]);
                    
                    }
                    else
                        printf(" \t");
            }
                printf("\n");
            }
      

}

int main(void){
printf("\n\n");
MatrizLetra1Nombre();
printf("\n\n");
}