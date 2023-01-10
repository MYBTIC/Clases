#include <iostream>
using namespace std;

 void mmBarraProgreso()
{
    int tamano = 10;
    float porcentaje = 100;
    char signo='=';
    
    
    float progreso = 0.0;
while (progreso < (porcentaje/100)+0.01) {

    cout << "[";
    int posicion = tamano * progreso;
    for (int i = 0; i < tamano; ++i) {
        if (i < posicion) cout << signo;
        else if (i == posicion) cout << "-";
        else cout << " ";
    }
    cout << "] " << int(progreso * 100.0) << " %\r";
    cout.flush();

    progreso += 0.0001; 
}
cout << endl;
}