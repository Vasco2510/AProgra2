#include<iostream>
#include<iomanip>
using namespace std;

int main(){
// operaciones aritmeticas basicas
    int w=2,z=1,v=11;
    cout<<"w= "<<w<<", z= "<<z<<endl;
    w+=z; // w=w+z
    cout<<"w+=z es "<<w<<endl;
    w-=z; // w=w-z
    cout<<"w-=z es "<<w<<endl;
    w*=z; // w=w*z
    cout<<"w*=z es "<<w<<endl;
    w/=z; // w=w/z
    cout<<"w/=z es "<<w<<endl;
    z/=w; // z=z/w
    cout<<"z/=w es "<<z<<endl;
    w%=1; // w=w%1
    cout<<"w%=1 es "<<w<<endl;

    cout<<"z= "<<z<<endl;
    cout<<"post-incremento de z: "<<z++<<endl; //post-incremento
    cout<<"pre-incremento de z: "<<++z<<endl; //pre-incremento

    z=v++ +3;
    cout<<"z= "<<z<<", v= "<<v<<endl;
    z=++v +3;
    cout<<"z= "<<z<<", v= "<<v<<endl;

    bool a=1; int x=4, y=5, r=0; // 4: 100, 5: 101, v: 100
    a = x & y; //and para manejo de bits
    cout<<"x & y: "<<boolalpha<<a<<endl;
    r= x & y;
    cout<<"x & y: "<<r<<endl;

    a = x | y; // or para manejo de bits
    cout<<"x | y: "<<a<<endl;
    a = x ^ y; // or exclusivo para manejo de bits
    cout<<"x ^ y: "<<a<<endl;
    a = !a; // complemento
    cout<<a<<endl;
    a = x << 1; // Shift left (desplazar un //bit a la izq) 4: 100 -> 1000
    cout<<(x<<1)<<endl;
    a = x >> y; // Shift right (desplazar un // bit a la der) 4: 100 -> 010
    cout<<(x>>1)<<endl;

// typecasting en operaciones aritmeticas

    double decimal=5.3;
    int entero=5;
    decimal=3.0/5*3*3;
//cout<<fixed<<setprecision(15);
    cout<<"decimal: "<<decimal<<endl;
    cout<<"entero: "<<entero<<endl;

    entero=decimal;
    cout<<"entero: "<<entero<<endl;
    decimal=decimal+entero;
    cout<<"decimal: "<<decimal<<endl;

    entero*=decimal;

    cout<<"entero*decimal: "<<entero<<endl;

    decimal= (3/4.)*5; // utilizo enteros
    // decimal= 3/4.*5; // utilizo decimales
    entero++; // entero=entero+1
    entero+=1;
    entero+=2;

//entero=entero*decimal;  // 3*3.75=11.25
    cout<<"entero: "<<entero<<endl;
    cout<<"decimal: "<<decimal<<endl;
    cout<<boolalpha;
    cout<<"booleano: "<<a<<endl;

    cout<<"entero-decimal: "<<entero-decimal<<endl;
    int aa=21474836466553;
    int bb=-2147483647;  // equivale a 2^32 (32 bits)
    cout<<"entero positivo: "<<aa<<endl;
    cout<<"entero negativo: "<<bb<<endl;


}
