#include <iostream>
using namespace std; 

int main() {
    int n;

    // Solicita el número n par
    do {
        cout << "Ingrese un número par: ";
        cin >> n;
    } while (n % 2 != 0 || n < 4);

    //optimizamos al observar qeue los limites del rectangulo interiro sson identicos 

    // Dibuja los rectángulos concéntricos
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            // Imprime el cuadrado mayor 
            if (i == 1 || i == n || j == 1 || j == n) {
                cout << "* ";
            }
            // Ponemos las condiciones del cuadrado interior o menor.
            else if ((i == n/2 && j==n/2) || (i == n/2+1 && j==n/2+1) || (i == n/2 && j==n/2+1) || (i == n/2+1 && j==n/2) ){
                cout << "X ";
            }
            // Tenemos aqui una alternativa para los limites 
            // else if ((i == innerStart || i == innerEnd) && (j == innerStart || j == innerEnd)) {
            //    cout << "X "; '''

        // habiendo definido previamente 
           // int startInterior = n/2;
            // int endInterior = n/2+1;
            // Ahora, hacemos que todos los demás espacios, se relllenen con Blancks
            else {
                cout << "  "; 
            }
        }
        cout << endl;
    }

    return 0;
}