#include <iostream>

using namespace std;
int main() {
    int numero =0;
    cout<<"Ingrese un número entero  del 1 al 4"<<endl;
    cin >> numero;

    switch(numero){
        case 1:
            cout<<"Primavera";
            break;
        case 2:
            cout<<"Verano"<<endl;
            break;
        case 3:
            cout<<"Otonio"<<endl;
            break;
        case 4:
            cout<<"Invierno"<<endl;
            break;
    }
    return 0;
}