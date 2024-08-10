#include <iostream>
#include <cmath>
using namespace std;





bool esPrimo (int n)
{
    if (n<2)
    { 
        return true;
    }
    int ctr=2;
    while (true)
    {
        if (ctr>sqrt(n))
        {
            return true;
            cout << "El numero si es primo";
        };
        if (n%ctr==0)
        {
            return false; // porque si n es divisibleentre ctr, es xq no es primo (y evitamos que ctr = n, con el primer if)
        };
        ++ctr;
    }
}
bool esPrimo2 (int numero)
{
    if (numero<=1) return false;
    if (numero==2)
    {
        return true;
    }
    for (int i=3; i<=sqrt(numero); i++) //proemiedad de los primos
    {
        if (numero%i==0) {
            return false;
        }
    } // solo se detendra cuando i sea mayor a sqrt(numero). Por lo tanto, cuando haya llegado, se concluye que el numero si era primerp xq no tenia divisor.
    return true;
}

int siguientePrimo(int numero) 
{
    int siguiente = numero +1;
    while (siguiente>1 &&  !esPrimo(siguiente))
    {
        siguiente = siguiente+1;

    }
    return siguiente;
    
}
    
    

    //nro primo anterior:
int anteriouPrimo (int numero)
{
    int anterior = numero-1;
    while (anterior>1 && !esPrimo2(anterior))
    {
        anterior--;
    }
    return anterior;
}

// es primo nro 2
//hallaremos un primo con un for




int main()
{
    int n;
    do
    {
        cout << "Ingrese numero mayor a 10:" << endl;
        cin >> n;
    }while (n<=10);

    //siguiente numero primo
    int sigPrimo = siguientePrimo(n);
    int antPrimo = anteriouPrimo(n);
    cout << "Primo siguiente es: " << sigPrimo << endl;
    cout << "Primo anterior es : " << antPrimo << endl;
    return 0;
}