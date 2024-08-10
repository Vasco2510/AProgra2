

// Hallar el monto final de un monto inicial (capital) despues de t años, a un interés de i % 
//anual, de acuerdo a la siguiente fórmula: 
//monto_final=monto_inicial*(1+i/100) donde i es el interés anual
//
#include <iostream>
#include <cmath>
using namespace std;

long double MontoNoRecursivo(long double capital, long double tasa, int time)
{
    long double monto_final = capital*pow(1+tasa/100,time);
    return monto_final;

}

long double MontoRecursivo(long double capital, long double tasa, int time)
{
    //caso base
    if (time ==0) 
    {
        return capital;
    }
    else 
    {
        long double newCapital = capital+capital*tasa/100;
        return MontoRecursivo(newCapital,tasa,time-1);
    }
}

int main()
{
    double monto_inicial=1000;
    double tasa = 10; //anual
    int tiempo = 10; //(en años)
    
    cout<<"El monto final (no recursivo) es "<<MontoNoRecursivo(monto_inicial,tasa,tiempo) <<endl;

    double monto_finalRecursivo = MontoRecursivo(monto_inicial,tasa,tiempo) ;
    cout<<"El monto final (recursivo) es "<<monto_finalRecursivo<<endl;
    return 0;
}
