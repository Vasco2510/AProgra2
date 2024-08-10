#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;


int main(){
    double A = 0;
    double B = 0;

    cout<<"Ingresa numero A "<<endl;
    cin>>A;
    cout<<"Ingresa numero B "<<endl;
    cin>>B;

    //stear lo random del denominador

    srand(time(0));
    // decidir aleatoriamente si el denominado es A o B
    double Denominador = (rand()%2 ==0) ? A : B; //Es una forma abreviada de la instrucción if-else. Si la condición (rand() % 2 == 0) es true (el número aleatorio es par), entonces Denominador se asigna a A.

        // condición ? valor_si_verdadero : valor_si_falso;
    //imprimir 
    if (Denominador == 0){
        cout<<"no definido "<<endl;

    } else
    {
        double result = A/Denominador;
        
        //ajustamos la salida profesionalmente 
        cout<<"Resultado es: "<<setprecision(10)<<result<<endl;
    }
    return 0;
}