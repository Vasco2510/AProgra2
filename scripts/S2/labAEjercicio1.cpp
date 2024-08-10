// realizaremos un programa que marque los limetes de velocidad sgun zona

#include <iostream>
using namespace std;

int main()
{
    char firstValid;
    float velocidad =0;
    cout <<"Ingrese su velocidad actual"<<endl;
    cin >> velocidad;
    cout<<"¿esta de viaje (V) o en la ciudad (C)?"<<endl;
    cin >>firstValid;
    if (firstValid == 'V'){
        // escenario de carretera
        int viajeSwitch=0;
        cout<<"Señale el caso que le corresponda"<<endl;
        cout<<"1. Camino rural"<<endl;
        cout<<"2. vehiculo de carga"<<endl;
        cout<<"3. Servicio publico pasajeros"<<endl;
        cout<<"4. automoviles, camionetas motocicletas\n"<<endl;
        cout<<"opcion: ";
        cin >> viajeSwitch;
        switch (viajeSwitch)
        {
        case 1:
            if (velocidad >60){
                cout<<"Fuera del limite velocidad"<<endl;
            }
            else {
                cout<<"Dentro del limite"<<endl;
            }
            break;
        case 2:
            if (velocidad >80){
                cout<<"Fuera del limite velocidad"<<endl;
            }
            else {
                cout<<"Dentro del limite"<<endl;
            }
            break;
        case 3:
            if (velocidad >90){
                cout<<"Fuera del limite velocidad"<<endl;
            }
            else {
                cout<<"Dentro del limite"<<endl;
            }
            break;
        case 4:
            if (velocidad >100){
                cout<<"Fuera del limite velocidad"<<endl;
            }
            else {
                cout<<"Dentro del limite"<<endl;
            }
            break;
        default:
            cout << "Tipo de vía urbana inválido." << endl;

            break;
        }

    } 
    else if (firstValid == 'C')
    {  //con el if dentro del else, nos aseguramos de solo aceptar el valor C, y no otras letras 
        // escenario de ciudad:
        int ciudadSwitch = 0;
        cout<<"Seleccione el caso que le corresponda"<<endl;
        cout<<"1. Zona escolar"<<endl;
        cout<<"2. calle y jiron"<<endl;
        cout<<"3. Avenidas"<<endl;
        cout<<"4. vias expresas"<<endl;
        cout<<"opccion: "<<endl;
        cin >> ciudadSwitch;
        switch (ciudadSwitch) 
        {
        {
        case 1:
            if (velocidad >30){
                cout<<"Está fuera del limite"<<endl;
            }
            else {
                cout<<"Maneja bien"<<endl;
            }
            break;
        case 2:
            if (velocidad >40){
                cout<<"Está fuera del limite"<<endl;
            }
            else {
                cout<<"Maneja bien"<<endl;
            }
            break;
        case 3:
            if (velocidad >60){
                cout<<"Está fuera del limite"<<endl;
            }
            else {
                cout<<"Maneja bien"<<endl;
            }
            break;
        case 4:
            if (velocidad >80){
                cout<<"Está fuera del limite"<<endl;
            }
            else {
                cout<<"Maneja bien"<<endl;
            }
            break;
        default:
            cout << "Tipo de vía urbana inválido." << endl;

            break;
        }
        } 
    }
        else 
        {
            cout<<"Ingrese un valor valido"<<endl;
        }
    
    return 0;
}
