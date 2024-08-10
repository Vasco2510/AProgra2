#include <iostream>
using namespace std;

void actualizaPuntosAzul(int *ptosAzul)
{
    (*ptosAzul)++; 
}
void actualizaPuntosRojo(int *ptosRojo)
{
    (*ptosRojo)++;

}
void imprimeTablaPuntos (int *ptosAzul, int *ptosRojo )
{
    string mayor, menor;
    int upper, lower;
    //calcular primer puesto y segundo
    if (*ptosAzul> *ptosRojo)
    {
        mayor = "Equip Azul";
        menor = "Equip Rojo";
        upper = *ptosAzul;
        lower = *ptosRojo;
    }
    else if (*ptosRojo > *ptosAzul)
    {
        mayor = "Equip Rojo";
        menor = "Equip Azul";
        upper = *ptosRojo;
        lower = *ptosAzul;
    }

    cout<<"Primer puesto"<<mayor<<" con "<<upper<<" puntos\n";
    cout<<"Segundo puesto"<<menor<<" con "<<lower<<" puntos\n";
}


int main()
{
    int punAzul = 0, punRojo =0;
    int accion=0;

    cout<<"MENU"<<endl;
    cout<<"1. Ingresa puntos azul \n";
    cout<<"2 Ingresa puntos rojo \n";
    cout<<"3 Imprime Puntajes \n";
    cout<<"4 SALIR"<<endl;

    cin>>accion;
    while (1)
        if (accion>0 && accion<5)
    {
        cout<<"MENU"<<endl;
        cout<<"1. Ingresa puntos azul \n";
        cout<<"2 Ingresa puntos rojo \n";
        cout<<"3 Imprime Puntajes \n";
        cout<<"4 SALIR"<<endl;

        cin>>accion;
        switch (accion)
            {
            case (1):
                actualizaPuntosAzul(&punAzul);
                break;
            case (2):
                actualizaPuntosRojo(&punRojo);
                break;
            case (3):
                imprimeTablaPuntos(&punAzul, &punRojo);
                break;
            case (4):
                break;
            default:
                cout<<"Opcion no valida, intentelo de nuevo: ";
                break;          
            }
    }

    



    return 0;
}