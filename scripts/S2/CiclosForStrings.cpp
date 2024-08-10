#include <iostream>
#include <cstring>
using namespace std;


// Creacion Funcion upper usando tolower



int main()
{

    string text= "";
    cout<<"Ingrese una palabra o texto en MAYUS a convertir a minusculas "<<endl;
    getline(cin, text); // Usa getline() para leer toda la línea de texto

    //WRN: Palabra es CADENA DE CARACTERES
    int caracteres= text.length();

    for (int i = 0; i <caracteres; i++)
    {
        text[i]=tolower(text[i]);
    }
    cout<<"Texto en minusculas es: "<<text<<endl;





    //modificamos para convertir de minus a MAYUS

    for (int i = 0; i <caracteres;i++)
    {
        text[i]=toupper(text[i]);

    }


    return 0;
}

 funciones.cpp
#include "funciones.h"
 Text upper_case(Text text)
 {//----------------------
 Text result;
 for (auto car: text)
   result += toupper(car);
 return result;
 }
 Text lower_case(Text text)
 {//----------------------
 Text result;
 for (auto car: text)
   result += tolower(car);
 return result;
 }
