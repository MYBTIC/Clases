//Primera libreria, libreria principal
//Segunda libreria, libreria para colores de texto y barra de progreso
//Tercera libreria, libreria para cadenas
#include<iostream>
#include<windows.h>
#include<string>

//Ingreso de credenciales por codigo para su posterior validacion
#define JQUSER "profe"
#define JQPASS "1234"

//Funciona para que el despliegue de mensajes con cout sea mas breve
using namespace std;

//int principal
int main()
{

    //se dimensiona las variables como cadena
    //se dimensiona como entero un contador
    //sentencia de verdaddero y falso
    //se dimensiona las variables como caracter
    string jqusuario, jqclave;
    int jqcontador = 0, jqopcion;
    bool jqingresa = false;
    //char jqcedulajq[10],jqcedula; 
    //char jqnombrejq[50],jqnombre; 
    //char jqcorreojq[50],jqcorreo;

    //Codigo para poner color a los mensajes e ingresos por teclado
    HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );

    //Validacion de cedula
    //SetConsoleTextAttribute(hConsole, 1);
    //cout << "Ingrese su cedula:" << endl;
    //cin >> jqcedulajq;

    //Validacion del nombre
    //SetConsoleTextAttribute(hConsole, 2);
    //cout << "Ingrese su nombre:" << endl;
    //cin >> jqnombrejq;

   //Validacion del correo electrónico
    //SetConsoleTextAttribute(hConsole, 3);
    //cout << "Ingrese su correo electronico:" << endl;
//cin >> jqcorreojq;
    //cout << "\n" << endl;

    cin.clear();
    cout.flush();

    do
    {
    //Confirmacion de usuario
    SetConsoleTextAttribute(hConsole, 4);
    cout << "Validacion de credenciales" << endl;
    cout << "........." << endl;
    cout << "Usuario:" << endl;
    cin >> jqusuario;
    //getline(cin, jqusuario);

    //Confirmacion de la clave
    SetConsoleTextAttribute(hConsole, 5);
    cout << "Clave:" << endl;
    cin >> jqclave;
    //getline (cin, jqclave);

    if (jqusuario == JQUSER && jqclave == JQPASS)
    {
        jqingresa = true;
        cout << "\n" << endl;
        cout << "::Bienvenido, profe\n" << endl;
        cout << "0. Salir" << endl;
        cout << "1. Mostrar usuario" << endl;
        cout << "2. Barra de carga" << endl;
        cout << "3. Combinatoria" << endl;
        cout << "\nIngresa una opcion:" << endl;

        cin >> jqopcion;

        if(jqopcion == 0)
        {
            cout << "\nHasta luego." << endl;
        }
        else
        {
            if(jqopcion == 1)
            {
                cout << "\n Sus credenciales son:" << endl;
                cout << "1111635445" << endl;
                cout << "pepe.perez@epn.edu.ec" << endl;
                cout << "patricio michael paccha angamarca" <<endl;

                cout << "\n-Al ser su ultimo numero impar, sus credenciales seran en minuscula-" << endl;
                cout << "FIN" << endl;
            }
            else
            {
                if(jqopcion == 2)
                {
                    cout << "\nSu correo pepe.perez@epn.edu.ec tiene: 21 caracteres" << endl;
                }
                else 
                {
                    if(jqopcion == 3)
                    {
                        cout << "Pepe Lucho Perez Suarez" << endl;
                        cout << "Pep LuchorzSa" << endl;
                        cout << "23" << endl;
                        cout << "13" << endl;
                        cout << "13C3" <<endl;
                    }
                    else
                    {
                        cout << "Error de ingreso" << endl;
                    }
                }
            }
        }

    }
    else
    {
        cout << "El usuario y/o clave son incorrectos\n" << endl;
        jqcontador++;
    }

    } while (jqingresa == false && jqcontador < 3);

    if (jqingresa == false)
    {
        cout << "Lo sentimos tu usuario y clave son incorrectos..!" << endl;
        cout << "Gracias." << endl;
    }
    
    cin.get();
    return 0;
}