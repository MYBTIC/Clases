#include <iostream> //Salidas y entradas en C++
#include <string> //Para poder trabajar con strings
#include <stdlib.h> //Para utilizar system()
#include <stdio.h> //Librería default de C
#include <unistd.h> //Para poder parar el programa un momento para realizar la barra de carga
#include <cstdlib> //Para utilizar exit()
#include <windows.h> //Color

using namespace std;

const string gvcedula = "1752114148";
const string gvnombre_completo = "Gabriel Vasconez";
const string gvcorreo_electronico = "gabriel.vasconez@epn.edu.ec";
string usuario; //Variable que almacena la entrada por el teclado

//Rutina para logearse
bool gvLogin() {
  int intentos = 3;
  while (intentos > 0) {
    string clave;

    cout << "Ingrese usuario: ";
    cin >> usuario;
    cout << "Ingrese clave: ";
    cin >> clave;

    if (usuario == gvcorreo_electronico && clave == gvcedula) {
      system("cls");
      cout << "\n\n:: Bienvenido GABRIEL.VASCONEZ@EPN.EDU.EC\n\n" << endl; //cout << ":: Bienvenido " << usuario << endl;
      return true;
    } else if (usuario == "profe" && clave == "1234") {
      system("cls");
      cout << "\n\n:: Bienvenido PROFE\n\n" << endl; //cout << ":: Bienvenido " << usuario << endl;
      return true;
    } else {
      system("cls");
      // Usa el código de color para cambiar el color del texto a rojo
      HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
      SetConsoleTextAttribute(hConsole, 12);
      cout << "\n\nLo sentimos, tu usuario y clave son incorrectos." << endl;
      cout << "Intentos restantes: " << --intentos << endl;
      // Restaura el color del texto a su valor predeterminado
      SetConsoleTextAttribute(hConsole, 7);
    }
  }
  HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute(hConsole, 12);
  cout << "\n\nLo sentimos, tu usuario y clave son incorrectos." << endl;
  cout << "Gracias" << endl;
  SetConsoleTextAttribute(hConsole, 7);
  return false;
}

//Para mostrar los datos del usuario
void gvmostrar_usuario ()
{
  if (usuario == "gabriel.vasconez@epn.edu.ec")
  {
    cout << gvcedula << endl;
    cout << gvcorreo_electronico << endl;
    cout << "GABRIEL ESTEBAN VASCONEZ BARAHONA" <<endl;
  }
  else 
  {
    cout << "1111635445" << endl;
    cout << "PATMIC@EPN.EDU.EC" << endl;
    cout << "patricio michael paccha angamarca" <<endl;
  }
}

//Barra de progreso
void gvShowLoadingCorreoNombre ()
{
  if (usuario == "profe")
  {
    // Imprimir la barra de progreso del 0% al 100%
    for (int i = 0; i <= 100; i++) {
      printf("\rCargando nombre: "); // Mover el cursor al principio de la línea
      // Imprimir la barra de progreso
      for (int j = 0; j < i; j += 3) { //Haz que j aumente en 5 unidades. 
        printf("/");
      }
      // Imprimir el porcentaje completado
      printf(" %d%%", i);
      fflush(stdout); // Vaciar el buffer de salida
      usleep(50000); // Pausar durante 50 milisegundos
    }
  printf("\n"); // Saltar a la siguiente línea
  printf("PATRICIO MICHAEL PACCHA ANGAMARCA");
  }
  else
  {
    // Imprimir la barra de progreso del 0% al 100%
    for (int i = 0; i <= 100; i++) {
      printf("\rCargando correo: "); // Mover el cursor al principio de la línea
      // Imprimir la barra de progreso
      for (int j = 0; j < i; j += 4) { //Haz que j aumente en 5 unidades. 
        printf("/");
      }
      // Imprimir el porcentaje completado
      printf(" %d%%", i);
      fflush(stdout); // Vaciar el buffer de salida
      usleep(50000); // Pausar durante 50 milisegundos
    }
  printf("\n"); // Saltar a la siguiente línea
  cout << gvcorreo_electronico << endl;
  }
}

//Meno de opciones
void gvMenu ()
{
  int gvopcion = 0;
  cout << usuario << ", selecciona:" <<endl;
  cout << "\n1. Mostrar usuario" << endl;
  cout << "2. Barra de carga" << endl;
  cout << "3. Combinatoria" << endl;
  cout << "0. Salir\n" << endl;
  cout << "Ingresa una opcion: " << endl;
  cin >> gvopcion;
  switch (gvopcion)
  {
    case 1: system("cls"); gvmostrar_usuario();
      break;
    case 2: system("cls"); gvShowLoadingCorreoNombre();
      break;
    case 3: system("cls"); cout << "El proceso no se pudo completar" << endl;
      break;
    case 0: system("cls"); exit(0);
      break;
  
    default:
      break;
  }
}

//Función principal
int main() {
  if (gvLogin()) {
    cout << "Autenticacion exitosa." << endl;
    gvMenu();
  }
  return 0;
}