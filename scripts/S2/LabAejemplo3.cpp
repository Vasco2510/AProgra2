#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //
    int aproximaciones=0;
    double pi=3.0;
    cout<<"Ingrese la cant de aproximaciones que desea:  " <<endl;
    cin >> aproximaciones;
    bool signo = true;

    // ajustamos preceision de cout
    cout<<fixed<<setprecision(10);


    for (int i = 1; i <= aproximaciones-1; ++i) // no se podia manejar con i=0 xq lo usamos para multiplicar
    {
        double denominador = 2*i*(2*i+1)*(2*i+2);
        double serie = 4.0/denominador;
        if (signo)
        {
            pi += serie;
        }
        else
        {
            pi -= serie;
        }
        signo = !signo; // alterna entre sumas y restas. Atento que esto no es comparacion. 
        cout<<"aproximacion :"<<(i+1)<< "es: "<<pi<<endl;
    }
    
    return 0;
}
