#include<stdio.h>
#include<string.h> //Libreria que permite manejar cadena de caracteres
int suma();
int sumaInt(int a, int b);
void showConsola(int rta);
float sumafloat(float a, float b);
int sumaFantasma();
int ValidarClave(char clave[]){
    char claveSecreta[] = "1234231";
    if(strcmp(clave, claveSecreta)==0)
        return 1;
    return 0;
}
int ValidarClaveArray(){

    //if(strcmp(clave, "1234"))
    //    return 1;
    char contrasena[]="1234";
    char clave[]="pato21131";
    int validador=1;
    for(int i=0; i<sizeof(clave); i++)
        if(clave[i]!=contrasena[i])
            validador=0;
        if(validador==1)
            printf("Clave correcta\n\n");
        else
            printf("Clave incorrecta\n\n");
return 0;
}




int main(){
    char key[]="1234231";
    if(ValidarClave(key)==0)
        printf("Clave correcta\n\n");
    else
        printf("Clave incorrecta\n\n");





//-------------------------------------------------
  int rta = suma();
    printf("La suma es: %i\n", rta);
  rta = sumaInt(5,8); //Existe una conversion(En este caso no, pero se entiende)
    printf("La suma es: %i\n", rta);
  //Debemos estar seguro el tipo de dato que vamos a expulsar de nuestra funcion

    //printf("La suma es: %.2f\n", sumafloat(5.5,8.12345)); //Presentar una funcion pero serializando su tipo de dato
    //Serializar(enviar datos)
    //formatear(procesar) mi informacion [%.2f], cantidad de decimales que deseamos de nuestros datos.
    showConsola(sumaInt(5,8));

    return 0;
}
int suma(){

    int a = 10, b = 20, r = 0;
    r = a+b;
    return r;
}
int sumaInt(int a, int b){
    return a+b;
}
float sumafloat(float a, float b){  
return a+b;
}
void showConsola(int rta){
	printf("La suma es: %i \n", rta  );
}
