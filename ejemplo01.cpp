// Created by Jose Fiestas on 2/09/21.
// Estructura de un programa en C++
// Python es un interprete : se lee y ejecuta
// C++ es compilable: se lee, se compila (optimiza) y se ejecuta
// funcion principal de todo_ codigo en C++
#include <iostream>
using namespace std;

string funcion(){
return "Retorno de la funcion";
}

int main(){
// Declaracion de variables/funciones, es asignar el tipo
char w;
int x=0;  // tipo entero que ocupa 4 Bytes en memoria
float y=3.14; // tipo decimal que ocupa 4 Bytes en memoria
double z=3.7492374; // tipo decimal que ocupa 8 Bytes en memoria
string nombre;

cout<<"UTEC"<<endl; // impresion de "UTEC"y cambio de linea

// Definicion de variables/funciones
cout<<"Ingrese su nombre: ";
cin>>nombre;
cout<<nombre<<endl;
nombre="Carlos";
cout<<"Buenos dias "<<nombre<<endl;

cout<<funcion()<<endl;

// typecasting
y=x; // typecasting implicito
cout<<y<<endl;
x=(int)z; // typecasting explicito
cout<<x<<endl;

float r=3;
cout<<"3/4="<<r/4<<endl;

// tipo auto
auto d="UTEC";
auto t=4.5;

    return 0;
}