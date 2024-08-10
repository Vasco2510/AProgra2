// Realice un programa, que permita leer varios números enteros hasta que se introduzca el cero.

#include <iostream>
using namespace std;

int main()
{
    int numero  = 0;
    int nleidos=0, npares=0, nimpar=0; // es ecesario asignarles valor inicial 0, o el prog les asigna un valor random inicial.
    do {
        cout<<"Ingrese un numero entero"<<endl;
        cin>>numero;
        nleidos +=1;
        //verificar si es par
        if (numero%2 == 0)
        {
            npares +=1; 
        }
        else   
        {
            nimpar+=1; 
        }

    } while (numero!=0);
    cout<<"Cant de nleidos es: "<<nleidos<<endl;
    cout<<"cant de npares: "<<npares<<endl;
    cout<<"cant de nimpar: "<<nimpar<<endl;
    return 0;
}
