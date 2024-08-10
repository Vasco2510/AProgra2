#include <iostream>
using namespace std;


// USAR BUCLE FOR SIN INICIALIZACIONES
// imprimir diccionario en mayúsculas, descendentemente
// WNG 1: Si hay alguna caombinacion de variable "letra" y la conducion, entre mayuscula y minuscula, tambien se combinará la respuesta, en 1 grupo de 24 letras en mayus, y otro grupo 24 letra minuscula
// WNG 2: Si var letra definida como mayus, descend será pura mayuscula
// WNG 3: Si var letra definida como minus, descend será pura minuscula
int main(){
    char letra = 'z';
    for (; letra>='A';letra--){
        cout <<letra<<'\n'; // salto de linea con texto
    }
    return 0;
}