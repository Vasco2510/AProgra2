#include <iostream>
#include "funcionesDecla.h"

using namespace std;

NumEntero LeeNumero(){
    NumEntero n;
    do{
        cout << "Ingrese su número mayor a 100 000" << endl;
        cin >> n;
    }while (n<100000);
    return n; // donde su tipo ya está definido justo delante de la funcion
    // esta funcion esta mas que bien
}

NumEntero InvertirNumero(NumEntero m)
{
    NumEntero guardaNuevonum, digito;

    while (m>0)
    {
        digito = m%10;
        guardaNuevonum = guardaNuevonum*10 + digito;
        m/=10;
    }
    return guardaNuevonum; //aqui el num invertido
    
    // funcion esta mas que bien definida
}

