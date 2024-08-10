 //Alessia es profesora del centro de estimulación “Bebochos” quien tiene n cubos del 
//mismo tamaño y color, y con la ayuda de los niños decide construir una pirámide con 
// ellos, la pirámide a construir debe tener la siguiente característica:
// //● El nivel superior de la pirámide debe consistir de 1 cubo.
// ● El segundo nivel debe consistir de 1 + 2 = 3 cubos.
 //● El tercer nivel debe tener 1 + 2 + 3 = 6 cubos.
// ● El cuarto nivel debe tener 1 + 2 + 3 + 4 = 10 cubos.
// ● El quinto nivel debe tener 1 + 2 + 3 + 4 + 5 = 15 cubos


#include <iostream>
using namespace std;

void nivelesYrestantes(int disponibles, int &nivel, int &restantes)
{
    nivel =1;
    int cubosUsados =0;
    int cubosNecesitare =1;
    while(disponibles>cubosUsados+cubosNecesitare)
    {
        nivel++;
        cubosUsados+=cubosNecesitare;
        cubosNecesitare=cubosNecesitare+nivel; //
    }
    restantes=disponibles-cubosUsados;


}

int main()
{
    int nivel, cubos, restantes;
    cout << "Ingrese cant de cubos: " << endl;
    cin >>cubos;
    nivelesYrestantes(cubos, nivel, restantes);
    cout << "Cantidad de cubos restantes: " << restantes<<endl;
    cout << "Nivel alcanzado: " << nivel<<endl;
    
    return 0;
}




























// implementaremos arriba la solucion con referencia
pair<int, int> calculator(int cubosDisponibles)
{
    int cubosUsados = 0;
    
    int nivel = 1; // Felicidades xq esta es otra tecna que demuestra razonamiento
    int cubosNecesitare = 1;
    
    while (cubosDisponibles>cubosNecesitare + cubosUsados) 
    {
        nivel++;
        cubosUsados+=cubosNecesitare;
        cubosNecesitare= cubosNecesitare+nivel;
    }
    int cubosrestantes = cubosDisponibles-cubosUsados;
    
    return make_pair(nivel, cubosrestantes);
}





int second()
{
    int cubos = 0;
    cout << "Ingrese el numero de cubos" << endl;
    cin >> cubos;
    // PReguntas clave
    //¿cuantos niveles costuimos?
    // cuantos cubos sobran?
    
    // manejo estructura pair
    pair <int, int> resultado = calculator(cubos);
    int niveles = resultado.first;
    int restantes = resultado.second;

    cout << "Se construyeron niveles: " << niveles << endl;
    cout << "Sobraron cubos: " << restantes << endl;

    return 0;
}
