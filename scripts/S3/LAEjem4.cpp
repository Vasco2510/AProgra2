//Escriba un código que pida un número entero y determine el triple, la raíz cuadrada 
//(con una presición de dos decimales) y si el número es múltiplo de 3.
// El main() solo debe consistir en la declaración de variables y la llamada a funciones.
// Use paso por valor y referencia


#include <iostream>
using namespace std;

void calculator(int num, bool &multiplo, long &triple, long double &raiz)
{
    if (num%3   == 0)
    {
        multiplo=true;
    }
    // triple
    triple=num*3;

    // raiz
    raiz=num*
}


int main()
{
    int numero = 0;
    bool multiplo=false;
    long int triple=0;
    long double raiz=0;

    // write your code here...
    cout << "Ingrese su numero: "<<endl;
    cin>>numero;
    return 0;
}
