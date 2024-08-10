#include <iostream>
#include "funcionesDecla.h"


using namespace std;

//Escribir un programa, que permita leer como dato un número entero de al
// menos 7 dígitos y el programa indique si el número es capicúa.
int main(){ // preparando para que puedan ingresar nuermso grandes

    // paso 1: validar que long sea mayor o igual a 7
    // paso 2:

    NumEntero numero_Evaluar;

    //ejecutar leer numero
    numero_Evaluar = LeeNumero();
    if (numero_Evaluar == InvertirNumero(numero_Evaluar))
    {
        cout << "es capicua" << endl;
    }
    else
    {
        cout << "No es capicua"<<endl;

    }
        
    return 0;
}