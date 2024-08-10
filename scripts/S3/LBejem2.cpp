#include <iostream>
using namespace std;
//  Hallar recursivamente el producto de dos números enteros positivos.

unsigned long long ProdRecursiv(long int a, long int b)
{
    //caso base 
    if (b==1)
    { 
        return a;
    }
    else return a+ProdRecursiv(a,b-1);
}

int main()
{
    long int a=0,b=0;
    cout << "Ingrese a y b: "<<endl;
    cin>>a>>b;

    cout <<"El producto recursivo es: "<<ProdRecursiv(a,b)<<endl;
    
    return 0;
}
