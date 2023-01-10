#include <iostream>
using namespace std;

 int main()
{
    int tamano = 0;
    float porcentaje = 0.0;
    char signo;
    cout<<"Ingrese el signo para llenar la barra: \n";cin>>signo;
    cout<<"Ingrese el tamano de la barra: \n";cin>>tamano;
    cout<<"Ingrese el porcentaje: \n";cin>>porcentaje;
    
    float progreso = 0.0;
while (progreso < (porcentaje/100)+0.01) {

    cout << "[";
    int posicion = tamano * progreso;
    for (int i = 0; i < tamano; ++i) {
        if (i < posicion) cout << signo;
        else if (i == posicion) cout << ">";
        else cout << " ";
    }
    cout << "] " << int(progreso * 100.0) << " %\r";
    cout.flush();

    progreso += 0.0001; 
}
cout<<endl;
}