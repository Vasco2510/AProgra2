#include <iostream>
using namespace std;


void conversor(long long int proporcionado, int &h, int &m, int &s)
{
    // observa que usamos la direccion de mesmoria, pues , queremos llamar momentanemaente a esas variables, para
    // luego modificarlas desde esta funcion. 
    // aqui nunca las declararemos ni nada

    h=proporcionado/3600;
    proporcionado=proporcionado%3600; // tomamos lo que ha quedado

    m= proporcionado/60;
    s=proporcionado%60; // lo unico que podria quedar son segundos
}

int main()
{
    long long int proporcionado;
    int horas, min, segs;
    cout << "INgrese la cantidad en segundos: ";
    cin >> proporcionado;
    conversor(proporcionado, horas, min, segs);
    cout << "El tiempo desglosado es: Horas: "<<horas <<",min: "<<min<<",Seg: "<<segs<<endl;
    
    
    return 0;
}
