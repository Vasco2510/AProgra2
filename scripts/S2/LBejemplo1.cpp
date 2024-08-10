// 1. Hare la sol más facil a mi nivel 
// 2. Haré la sol más eficciente y me es permitido consultar videos ilustrativos o fuentes externas
// 3. Haré la sol con punteros (array de tipo puntero), averigure como funciona, y xq no es la opcion más eficiente.
//      Será valido consultar  fuentes y videos.

#include <iostream>
#include <cmath> //  para funciones matematicas

using namespace std;


double calcDistance(double x1, double x2,double y1, double y2)
{
    double distX=x1-x2;
    double distY=y1-y2;
    return sqrt(pow(distY,2)+pow(distX,2));
}

int main()
{
    int nVertices =0;
    do {
        cout<<"Cant de vertices??"<<endl;
        cin>>nVertices;
    } while (nVertices>10 || nVertices<3);
    
    // creamos un array para guardar las coordenadas
    double vertices[nVertices][2];
    double perimetro = 0;
    
    for (int i=0; i<nVertices; i++)
    {
        // llenamos el array
        cout<<"Ingrese las coordenadas del vertice "<<i+1<<endl;
        cin>>vertices[i][0]>>vertices[i][1]; 

    }
    // ya teneiendo lleno el array, procedemos a calcular el perimetro
    
    for (int i=0; i<nVertices; i++)
    {
        int siguiente = (i+1) % nVertices; // tecnica para volver a obtener 0, luego de haber hecho un conteo
        perimetro+=calcDistance(vertices[i][0], vertices[siguiente][0], vertices[i][1], vertices[siguiente][1]); //estructura si depende del orden
    }
    cout<<"El perimetro es de : "<<perimetro<<endl;


    
    return 0;
}
