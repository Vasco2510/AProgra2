//Hallar recursivamente el máximo elemento de un vector
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    // generamos un vector de 10 valores aleatorios. luego me diante un bucle for, compramos uno a uno de lso elemntos y vamos guardando el maximo
    srand((unsigned int)time(NULL));

    int vector[10];
    for (int i = 0; i < 10; i++)
    {
        vector[i] = 1+rand()%40;
    }
    int maximo=0;
    for (int i = 0; i < 10; i++)
    {
        if (vector[i] > maximo)
        {
            maximo = vector[i];
        }
    }

    //imprimir el vector
    for (int i = 0; i < 10; i++)
    {
        cout << vector[i]<<" ";
    }
    cout <<"el maximo elemento es: "<< maximo << endl;
    return 0;
}
