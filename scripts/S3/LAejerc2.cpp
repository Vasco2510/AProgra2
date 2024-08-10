
#include <iostream>
using namespace std;


void filtrarNota(int &nota)
{
    do
    {
        cout << "Ingrese una nota valida(1-20)"<<endl;
        cin>>nota;
    } while (nota>20 || nota<1);  

}

void barraProgreso(double porciento)
{
    double escala= porciento*20;
    for (int i=0; i<escala; i++) 
    {
        cout << "|";
        
    }
    cout << "El progreso es: " << porciento*100<<"%"<<endl;
}


int main()
{
    int nota=0.0;
    filtrarNota(nota);
    double porcentaje= (double)nota/20;
    barraProgreso(porcentaje);



    return 0;
}
