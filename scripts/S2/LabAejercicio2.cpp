#include <iostream>
using namespace std;

int main()
{
    int nfilas = 0;
    cout << "Ingrese el numero de filas que desea"<<endl;
    cin>>nfilas;

    for (int i=1; i<=nfilas; i++)
    {
        // cout<<"*"*i<<endl; Este tipo de estructura solo funcionaria en python

        //Imprimimos * en cada fila
        for (int j=1; j<=i; j++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
    
    return 0;
}
