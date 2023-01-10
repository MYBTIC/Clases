/**
* @author: Dilan Real
* @date : 2023.01.09
* @correo : dilan.real@epn.edu.ec
* Examen prmer bimestre
**/

#define CEDULA "1750741934"
#define NOMBRECOMPLETO "Dilan Real"
#define CORREO "dilan.real@epn.edu.ec"

#include <iostream>
#include <windows.h>
#include <cstring>
#include <stdlib.h>
#include <dos.h>
#include <string>
#include <cstdlib>
#include <conio.h> 
#include <vector>
#include <fstream>

#define ENTER 13
#define BACKSPACE 8
#define INTENTOS 3

using namespace std;

void drUsuario()
{
    printf("CEDULA:1750741934\n CORREO: dilan.real@epn.edu.ec\n NOMBRECOMPLETO Dilan Real\n CEDULA:1111635445\n CORREO:  PEPE.PEREZ@EPN.EDU.EC\n NOMBRECOMPLETO: patricio michael paccha angamarca\n");
}
void drprogressbar()
{
    system("color 0e");
    system("cls");
    printf("\e[?251");

    int bar=177;
    float porcentaje;
    char caracter [1];

    do
    {
        cout<<"-Porcentaje de la barra: ";
        cin>> porcentaje;  
    }
    while (porcentaje > 100);
    
    cout << "-caracter a utilizar: ";
    cin>> *caracter;

    cout <<"\n\n\n\n\t\tCargando...";
    cout <<"\n\n\n\n\t\t";

    for(int i=0; i<25; i++)
        cout<<(char)bar;

    for(int i=0; i<=porcentaje; i++)
    {
        cout <<"\r\t"; 
        cout <<i<<"%"<<"\t";

    for(int j=1; j<i/4; j++)
        cout<< *caracter;
        Sleep (50);
    }
    cout<< endl;
    system ("pause");
    return;

}
void combinatoria()
{
    ofstream file;
    file.open("combinacion_simple.txt");
    
    char letras[9];
    letras[0]='d';
    letras[1]='i';
    letras[2]='l';
    letras[3]='a';
    letras[4]='n';
    letras[5]='e';
    letras[6]='r';
    letras[7]='g';
    letras[8]='u';

    for(int v=0; v<4-2; v++)
        for(int t=v+1; t<4-1; t++) 
                cout<<"{"<<letras[v]<<","<<letras[t]<<"}\n";

    for(int i=0; i<4-2; i++)
        for(int j=i+1; j<4-1; j++)
                file<<"{"<<letras[i]<<","<<letras[j]<<"}\n"; 

    file.close();          
}

int main()
{
    system("color 0e");
    vector<string> usuarios;
    vector<string> claves;

    usuarios.push_back("dilan.real@epn.edu.ec");
    usuarios.push_back("profe");

    
    claves.push_back("1750741934");
    claves.push_back("1234");


    string usuario, password;

    int drcontador = 0;
    bool ingresa = false;

    do
    {
        system("cls");
        cout << "\t\t\tLOGIN DE USUARIO" << endl;
        cout << "\t\t\t----------------" << endl;
        cout << "\n\tUsuario: ";
        getline(cin, usuario);

        char drcaracter;

        cout << "\tPassword: ";
        drcaracter = getch();

        password = "";

        while (drcaracter != ENTER)
        {

            if (drcaracter != BACKSPACE)
            {
                password.push_back(drcaracter);
                cout << "*";
            }
            else
            {
                if (password.length() > 0)
                {
                    cout << "\b \b";
                    password = password.substr(0, password.length() - 1);
                }
            }

            drcaracter = getch();
        }

        for (int dri = 0; dri < usuarios.size(); dri++)
        {
            if (usuarios[dri] == usuario && claves[dri] == password)
            {
                ingresa = true;
                break;
            }
        }

        if (!ingresa)
        {
            cout << "\n\n\tLo sentimos tu usuario y clave son incorrectos..!, solo tiene 3 intentos" << endl;
            cin.get();
            drcontador++;
        }

    } while (ingresa == false && drcontador < INTENTOS);

    if (ingresa == false)
    {
        cout << "\n\tGracias" << endl;
    }
    else
    {
        int numero=0;
        cout << "\n\n\n\t\t\tBienvenido\n Seleccionar:\n\n 1)Mostrar usuario\n 2)Barra de carga\n 3)Combinatoria\n 0)salir" << endl;
        scanf("%i",&numero);
        if (numero==1)
        {
             drUsuario();
        }
        else if (numero==2)
        {
             drprogressbar();
        }
        else if (numero==3)
        {
             combinatoria();
        }
        else
        if (numero==0)
        return 0;
    }

    cin.get();

    return 0;
}