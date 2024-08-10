#include <iostream>
using namespace std;
//Realice un programa que permita leer un número entero de al menos 3 dígitos, dato que se debe validar, luego el programa indicará: 
//La cantidad total de dígitos 
//La cantidad de dígitos pares
// La cantidad de dígitos impare
int main()
{
    int numero = 0, digito,npar=0, nimpar=0, cantDigitos=0;
    cout << "Ingresse un numero" << endl;
    cin >> numero;

    //validar que tenga 3 digitos
    while (numero < 100) {
    cout << "El número debe tener al menos 3 dígitos. Ingrese de nuevo: ";
    cin >> numero;
    }

    do 
    {
        cantDigitos++; //
        digito = numero%10;
        //averiguamos naturalzeza digito 
        if (digito%2==0)
            {
                npar+=1;
            }
        else 
        {
            nimpar+=1;
        }
        numero/=10;
    } while (numero>0);  // no olides el punto y coma al final de un do while
    
    cout << "Cantidad total de digitos es " <<cantDigitos<< endl;
    cout << "Cant de pares es: " <<npar<< endl;
    cout << "Cant de impares es: " <<nimpar<< endl;
    
    return 0;
}
