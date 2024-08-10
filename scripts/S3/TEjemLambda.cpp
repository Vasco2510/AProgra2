#include <iostream>
using namespace std;

int main()
{
    // [captura](parámetros) {cuerpo de la función}(argumento q se le pasa a la funcion);
    //  Donde   [captura], Es una "lista de captura". Señalará lo que tomaremos del exterior de la funcion, para usarlas en la función lambda.
        // Si captura,os y utilizamos el operador "direccion" &, podremos desde dentro de la funcion lambda, modificar la variable.
    // (parametros) permite indicar el tip oded dato que recibirá la funcion lambda. Luego, tenemos el cuerpo, donde 
            // se indica que hará el programa, como cualquier otro codigo cpp.
            // Parametros, es la version general de un argumento. (del final) representa a lo que se le pasa a la funcion inmediatametne .
    int sum=0;

    for (int i=0; i<10; i++)
    {
        [&sum](int x)
        { 
            sum += x;
        }(i);
        cout << "La suma al momento es: " << sum <<endl;
    }
    return 0;
}
