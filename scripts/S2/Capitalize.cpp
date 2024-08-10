#include <iostream>
#include <string>
#include <cctype>


using namespace std;

// Crearemos una funcion que al ingresarle una cadena de caracteres, o parrafos, cambie a mayuscula cada primera letra, de manera automatica.
// se sobreentiende que se devuelve el texto,ccapitalizado
int main(){

    // condiciones para el manejo:
    // 1 Si el caracter es la primera letra,, mayuscularlo.
    string  Texto = "Hola me llamo yuri éscobar -";
    string result=  "";
    char previo = '\0';



    for (char c:Texto){
        if (previo == '\0' || isblank(previo)){ // Inteligentemente, definimos desde el inicio que el primer caracter es nulo, para que el for, corra adecuadamente
            result+=toupper(c);
        }
        else {
            result+=tolower(c);
        }
        previo = c; // previo se actuliza y en cada ciclo, representa justo el caracter anterior a la letra que toma c.
    }
    cout<<result<<endl;
    return 0;
}
