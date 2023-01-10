#include <stdio.h>
#include <stdlib.h>

// Serie de pares
void SeriePares(int inicio, int Fin)
{
    	system("cls"); 
    for(int i = inicio ; i <= Fin; i++)
        if(i % 2 == 0)      // 0 / 2  = 0  sobrante --> 0   9 / 2 = 4  sobrante --> 1
            printf(" %d ", i);
}

void SerieImpares(int inicio, int Fin)
{
    for(int i = inicio ; i <= Fin; i++)
        if(i % 2 != 0)      // 5 / 2  = 2  sobrante --> 1   9 / 2 = 4  sobrante --> 1
            printf(" %d ", i);
}

void SerieParesCantidad(int cantidad)
{
    int count = 0;
    int nroPar = 0;

    while(count < cantidad)
    {
        if(nroPar % 2 == 0) 
        {
            printf(" %d ", nroPar++);
            count++;
        }      
        else
            nroPar++;
    }
}

 //seriParImpar(4) : 1/2  3/4  5/6  7/8 ....
void serieParImpar(int cantidad)
{
    int count  = 0;
    int par = 2;
    int impar = 1;

    while(count < cantidad)
    {
        printf(" %d/%d    ", impar, par);
        par = par +2;
        impar = impar + 2;
        count++;
    }
}
//         +    --  +++ ----    +++++    ------
//          1   0   3   0       5
void serieSignosAlternosOptimo(int cantidad)
{
    for(int count = 1; (count <= cantidad) ; count++)
    {
        for(int i =1; i<=count; i++)
            printf("%c", (count % 2 == 0)?'-': '+');
        printf("\t");
    }
}
// Serie:  +    --    +++    ----   +++++   ------ ...
//count:   1    2       3    4         5         6
void serieSignosAlternos(int cantidad)
{
    //for (1...10)   while(< >  true)
    int count = 1;
    char signo = '+';

    while(count <= cantidad)
    {
        if(count % 2 == 0 )
            signo = '-';
        else
        {
            signo = '+';
        }   
        
        for(int i =1; i<=count; i++)
        {
            printf("%c", signo);
        }    
        printf("\t");
        count = count + 1;
    }
}
// procedimiento principal
void main( )
{
    serieSignosAlternos(6);
    printf("\n");
    serieSignosAlternosOptimo(6);

    SeriePares(0,10);    // 0 2 4 6 8 10       //  12 14 16 18 ... //  2 4 6 8 10
  
   printf(" \n ");
   SerieImpares(0, 10); // 1 3 5 7 9        // 

   printf(" \n ");
   SerieParesCantidad(10);

    //serie(4) : 1/2  3/4  5/6  7/8 ....
   printf(" \n ");
   serieParImpar(4);
}