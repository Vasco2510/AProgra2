#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;


unsigned long long int sumSquares (int n)
{
    if (n == 0)
    {
        return 0;
    }
    else return n*n+sumSquares(n-1);
}


void genera10Aleato(int aleatorios[10]) // solo necesitamos que guarde en una variable los aleatorios
{
    srand(time(nullptr));

    for (int i=0; i<10; i++) 
    {
        
        aleatorios[i]=1+rand()%30;
    }
}



int main()
{
    // Generar una secuencia de 10 números aleatorios
    int aleatorios[10];
    genera10Aleato(aleatorios); //esta totalmente bien xq no se necestiam nros mares a cuatro e
    // Mostrar la lista original
    cout << "la Lista original es: ";
    for (int i=0; i<10; i++)
    {
        cout << aleatorios[i] << " ";
    }
    cout << endl;





    // Calcular la suma acumulada de cuadrados y la suma de prefijos
    unsigned long long int sumAcum[10];
    sumAcum[0] = sumSquares(aleatorios[0]); // Primer elemento

    for (int i = 1; i < 10; i++) {
        sumAcum[i] = sumAcum[i - 1] + sumSquares(aleatorios[i]);
    }



    cout << "La suma de prefijos es: ";

    for (int i=0; i<10; i++)
    {
        cout << sumAcum[i] << " ";
    }

    return 0;
}
