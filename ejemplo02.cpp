// C++ permite manipular datos en memoria
// variables representan el nombre que se le da a los datos que queremos
// manipular en memoria (modificar, leer, escribir)
// tipos de variables: enteros, coma flotante, booleanos,...
// los tipos/clase de variables definen una clasificacion de objetos
// en conjuntos con propiedades (atributos) comunes
// y tienen un espacio definido en memoria
#include<iostream>
#include <cmath> 
#include <typeinfo> // Necesario para typeid

using namespace std;

int main(){
//  DECLARACION/DEFINICION de variables:
    bool value;
    int entero; // -2e9 -> +2e9
    float x=5.5f; // es float
    float y=5.5; // es double
    double decimal;

    // definiendo variables en codigo
    entero=3;
    decimal=3.2455666;
    value=true;



// tipo auto
    auto c = 123L;
    cout<<"c: "<<c<<", tipo: "<<typeid(c).name()<<", tamaño: "<<sizeof(c)<<endl;


    auto b = true; // bool
    cout<<"b: "<<b<<", tipo: "<<typeid(b).name()<<", tamaño: "<<sizeof(b)<<endl;
    
    auto ch = 'x'; // char
    cout<<"ch: "<<ch<<", tipo: "<<typeid(ch).name()<<", tamaño: "<<sizeof(ch)<<endl;
    
    auto ii = 123; // int
    cout<<"ii: "<<ii<<", tipo: "<<typeid(ii).name()<<", tamaño: "<<sizeof(ii)<<endl;
   
    auto d = 1.2; // double
    cout<<"d: "<<d<<", tipo: "<<typeid(d).name()<<", tamaño: "<<sizeof(d)<<endl;
    
    auto z = sqrt(d); // z tiene el tipo de dato que retorna sqrt(y)
    cout<<"z: "<<z<<", tipo: "<<typeid(z).name()<<", tamaño: "<<sizeof(z)<<endl;
    z='e';
    cout<<"z: "<<char(z)<<endl;

// Typecasting
    decimal=entero; // typecasting implicito
    cout<<"decimal: "<<decimal<<endl;
//decimal=double(entero); // typecasting explicito
    decimal=(double)entero; // typecasting explicito
    cout<<"decimal: "<<decimal<<endl;

    decimal=5.4;
    entero=decimal; // conversion de tipos , typecasting implicito
//entero=(int) decimal;
//entero = static_cast<int> (decimal);
    cout<<"entero: "<<entero<<endl;
    cout<<"decimal: "<<decimal<<endl;

    // static casting Tenemos un caso de Static casting
    double valor=5.25;
    double a = (int) valor +5.3;
    double s = static_cast<int> (valor) + 5.3;
    cout<<"valor: "<<valor<<", a: "<<a<<endl;
    cout<<"s: "<<s<<endl;

    return  0;
}