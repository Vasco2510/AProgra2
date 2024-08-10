#include <iostream>
using namespace std;

int main()
{
    int columnas, filas;
    cout << "Ingrese el nuemro de filas y columnas" << endl;
    cin>>filas>>columnas;

    for (int i=0; i<columnas; i++)
    {
        for (int j=0; j<filas; j++)
        {
            if (i==0 || i== columnas-1 || j==0 || j== filas-1)
            {
                cout << " * ";
            }
            else
            {
                cout << " o ";
            }
        } 
        cout << "\n";
    }
    return 0;
}
