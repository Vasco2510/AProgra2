#include <iostream>
using namespace std;

int main() 
{
    int numFilas;

    // Verifica el ingreso del dato
    do {
        cout << "Ingrese el número de filas (entre 1 y 9): ";
        cin >> numFilas;
    } while (numFilas < 1 || numFilas > 9);

    // Dibuja el árbol
    for (int i = 1; i <= numFilas; i++) 
    {
        //Imprime los espacios en blanco
        for (int j = 1; j <= numFilas - i; j++) 
        {
            cout << " ";
        }

        //Imprime los números
        
        for (int j = 1; j<=i; j++) 
        {
            cout <<j;            
        }

        cout << endl;
    }

    return 0;
}
