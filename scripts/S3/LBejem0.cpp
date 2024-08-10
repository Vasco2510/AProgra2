#include <iostream>
using namespace std;
//crearemos la funcion de factorial, con recursvidad e la de interación


unsigned long long fRecursivo(int n2)
{
    if (n2<2)
    {
        return 1; //caso base de recursividad
    }
    else return n2*fRecursivo(n2-1);
}

unsigned long long fIterativo(int n)
{
    unsigned long long acumulado=1;
    for (int i = 1; i <= n; i++)
    {
        acumulado=acumulado*i;
    }
    return acumulado;
    
}
int main()
{   
    int n;
    cout << "Quiero factorial de :"<<endl;
    cin >> n;

    cout << "Factorial por recursividad: "<<fRecursivo(n)<<endl;
    cout << "Factorial por iteracion: "<<fIterativo(n)<<endl;

    return 0;
}
