#include <iostream>
#include <cmath>
using namespace std;
//crearemos la funcion de factorial, con recursvidad e la de interación


unsigned long long PRecursivo(int long n, int long x)
{
    //caso base
    if (n==0)
        return 1;
    else return x*pow(x, n-1);
}

int main()
{   
    int n, X;
    cout << "Quiero potencia n de X :"<<endl;
    cin >> n>>X;

    cout << "POtencia  por recursividad: "<<PRecursivo(n,X)<<endl;

    return 0;
}
