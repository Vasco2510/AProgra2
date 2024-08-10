#include <iostream>
using namespace std;

int main()
{
    long long int proporcionado;
    long long int horas=0, min=0, segs=0;
    cout << "Ingrese la cantidad de segundos" << endl;
    cin>>proporcionado;

    horas=proporcionado/3600;
    proporcionado=proporcionado%3600; // tomamos lo que ha quedado

    min= proporcionado/60;
    segs=proporcionado%60; // lo unico que podria quedar son segundos

    cout << "Horas: " << horas << endl;
    cout << "Min: " << min << endl;
    cout << "Segundos: " << segs << endl;
    return 0;
}
// solucion valida, pero estamso en el tema de funciones y todo debe hacerse con funciones
