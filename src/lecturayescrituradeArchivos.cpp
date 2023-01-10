#include <iostream> //Entradas salidas en consola y string

#include<fstream> //Manejo de archivos    

using namespace std;



void leerArchivo(string pathFile)   //Pathfile: ruteador de archivos, (c:\\Yruta completa.txt).

{

    int pag=1;

    string s;

    ifstream f(pathFile);   //Verifica que el archivo exista y maneja el archivo, controla o lo lee.



    if( !f.is_open())

        cerr<<"Error al abrir el arhivo."<<endl;    //cerr y cout es lo mismo, sin embargo cerr sirve para contrastar errores

    else

        do

        {

            getline( f, s);    //Captura linea de f, y lo deposita en s

            cout<<s<<endl;

           

            if(pag++%5 == 0)

            getchar();  //Recibe un enter

        } while ( !f.eof() );    //Mientras que f no sea final de linea va el Do

            f.close();

}



void escribirArchivo(string pathFile)

{



    ofstream f;

    //f.open(pathFile, ios_base::out);  //crear/SOBRESCRIBIR + escribir

    f.open(pathFile, ios_base::app);    //agregar



    f<<"JOSE\n";

    f<<"MARTIN\n";

    f<<"PEPE\n";

    f.close();


}


int main(){



    leerArchivo(".\\Files\\Listado.txt");//LeerArchivos, Esto es un String, CrearEscribirArchivo("Files\\"), (.\\) desde el directorio raiz ingresa a...

//(..//)salir del directorio raiz , al que se encuentre por fuera.

    escribirArchivo(".\\Files\\Listado.txt");

    return 0;

}