#include <iostream>

using namespace std;
// SUMA DE LOS MULTIPLOS DE 5 , desde el 10 al 95
// con bucle for


int main()
{
    for (int contador = 10, suma=0; contador <=95; contador+=5)
    {
        suma+=contador;
        cout <<"La sumatoria es: " << suma << endl;   
    }
         
    return 0;
}


