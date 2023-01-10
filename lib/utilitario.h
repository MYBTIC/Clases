#include<stdio.h>

void hilib(){


    printf("Hola desde la libreria..");

}

void chartointerger()
{
    char nombre[20];
    printf("\nIngresa tu nombre: ");
    gets(nombre);
    printf("\n%s\n", nombre);



}

int getnumber(char texto[30])
{
    char numero[20];
    int n;
    printf("\n%s", texto);
    gets(numero);
    sscanf(numero, "%i", &n);

return n;
}

int stringcompare(char string1[], char string2[])
{

    int b=0;

        for ( int i = 0; i < 4; i++)
        {
            if(string1[i] != string2[i])
                b++;
        }
            //if(b==0)
            //printf("Son iguales");
            //else
            //printf("Son diferentes")
    return b;

}

int loopRequest(char request[])
{
    int n=0;
    do{
        printf("%s ", request);
        gets(request);
        sscanf(request,"%i \n", &n);
    }while (n <= 5);
    return n;
}

void printhorizontalmatrix(int len){

    for (int f = 0; f < len; f++)
    {
        for (int c = 0; c < len; c++)
            printf("%c ",mL[f][c]);
        printf(" ");
       
        for (int c = 0; c < len; c++)
            printf("%c ",mE[f][c]);
        printf(" ");
        
        for (int c = 0; c < len; c++)
            printf("%c ",mO[f][c]);
        printf("\n");
    }
}