#include <stdio.h>
float factorial(int n); //prototipo de la funcion

int main(){
	int m,n,i;
	float fact_m, fact_n,fact_mn,c;
	
	printf("Introduzca los valores de m y n (con m>=n): ");
	scanf("%d %d%*c",&m,&n);
	
	//Calculo del favctorial de m
	/*fact_m = 1;
	for(i=1;i<=m;i++)
	    fact_m=fact_m*i;*/
	fact_m = factorial(m);
	
	//Calculo del favctorial de n
	/*fact_n = 1;
	for(i=1;i<=n;i++)
	    fact_n=fact_n*i;*/
	fact_n = factorial(n);
	    
	//Calculo del factorial de m-n
	/*fact_mn = 1;
	for(i=1;i<=m-n;i++)
	    fact_mn=fact_mn*i;*/
	fact_mn = factorial(m-n);
		
    //Calculo del numero combinatorio
	c = fact_m/(fact_n*fact_mn);
	
	printf("El numero de combinaciones de %d elementos tomado de %d en %d: %.0f\n",m,n,n,c);	    
	return 0;
}

float factorial(int n){
	float fact = 1;
	int i;
	
	for (i=1;i<=n;i++)
	    fact= fact*i;
	    
	return fact;
}
