#include <iostream>
#include<string.h>
#include"../lib/mmBarradeProgreso.h"
using namespace std;
char mmNombreCompletp[]="Maximiliano Madrid Benavides";
int	 mmNumeroCedula=1750352450;
char mmCorreoInstitucional[]="maximiliano.madrid@epn.edu.ec";
int opc[5];
char mmProfe[]="profe";
int mmClaveP=1234;
#define mmlen 35

int main()
{

char mmUsuario1[mmlen];
int mmClave1=0;
int mmNroVeces=1;
int opc=0;
int opc2=0;
int opc3=0;
	do
	{
		cout<<"Digite como desea ingresar "; 
		cout<<"\nOpcion1: profesor";
		cout<<"\nOpcion2: Usuario";
		cout<<endl;
		cin>>opc;
	} while ((opc<0)&&(opc>3));
	
	switch (opc)
	{
	case 1:
		do
	{
		cout<<"\nDigite su usuario si es profesor: "; cin>>mmUsuario1;
		cout<<"\nEl numero de veces es: ";cout<<mmNroVeces; cout<<"\n";
		mmNroVeces=mmNroVeces+1;
		if(mmNroVeces==4)
		cout<<"\nLo sentimos tu usuario o clave son incorrectos..!\n";
	} while ((mmNroVeces!=4)&&(strcmp(mmUsuario1, mmProfe)!=0));
		if(mmNroVeces!=4){
	do
	{
		cout<<"\nDigite su clave: "; cin>>mmClave1;
	} while (mmClave1!=mmClaveP);
		cout<<"\nPROFE, SELECCIONA:";
		cout<<"\n1.- Mostrar Usuario";
		cout<<"\n2.- Barra de carga";
		cout<<"\n3.- Combinatoria";
		cout<<"\n4.- Salir";
		cout<<"\nDigite: "; cin>>opc2;
		switch (opc2)
		{
		case 1:
			cout<<"\n-----Bienvenido + PROFE -----";
	cout<<"\nusuario: profe";
	cout<<"\nclave: ****";
	cout<<"\nNumero de intentos: "; cout<<mmNroVeces;
			break;
		case 2:
			cout<<"----Barra de progreso-----";
			mmBarraProgreso();
			break;
		case 3:
			break;
		case 4:
		break;
		default:
			break;
		}
	
		}

		break;
	case 2: 
	do
	{
		cout<<"\nDigite su usuario si es estudiante: "; cin>>mmUsuario1;
		cout<<"\nEl numero de veces es: ";cout<<mmNroVeces; cout<<"\n";
		mmNroVeces=mmNroVeces+1;
		if(mmNroVeces==4)
		cout<<"\nLo sentimos tu usuario o clave son incorrectos..!\n";
	} while ((mmNroVeces!=4)&&(strcmp(mmUsuario1, mmCorreoInstitucional)!=0));
		if(mmNroVeces!=4){
	do
	{
		cout<<"\nDigite su clave: "; cin>>mmClave1;
	} while (mmClave1!=mmNumeroCedula);

	cout<<"\nMAXIMILIANO, SELECCIONA:";
		cout<<"\n1.- Mostrar Usuario";
		cout<<"\n2.- Barra de carga";
		cout<<"\n3.- Combinatoria";
		cout<<"\n4.- Salir";
		cout<<"\nDigite: "; cin>>opc3;
		switch (opc3)
		{
		case 1:
			cout<<"-----Bienvenido + MAXIMILIANO -----";
	cout<<"usuario: maximiliano.madrid@epn.edu.ec";
	cout<<"clave: **********";
	cout<<"Numero de intentos: "; cout<<mmNroVeces;
			break;
		case 2:
		cout<<"----Barra de progreso-----";
		mmBarraProgreso();
	
		default:
			break;
		}
		}
	break;
			
}
}
