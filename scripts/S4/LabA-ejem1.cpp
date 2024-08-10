#include <iostream>

using namespace std;
 

// funcion para operaciones. Utili para un main limpio.
void ModificaNota(float* notaPc, float bonificacion)
{
    *notaPc += bonificacion;
    
}

int main() 
{   
    float pc1=0.0;
    float bonus=0.0;
    cout<<"¿nota PC1?: ";
    cin>>pc1;
    cout<<endl<<"cuanto de bonus??: ";
    cin>>bonus;

    ModificaNota(&pc1, bonus);
    cout<<"Resultado: "<<pc1;
    return 0;
}