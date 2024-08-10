#include <iostream>
using namespace std;

int factorial(int& numero) {
    int result = 1;
    for (int i = 1; i <= numero; ++i) {
        result *= i;
    }
    return result;
    
}

// basicamente AQUI ARRIBA TENEMOS UNA QUEJA POR HACERNOS HACER COSAS INNECESARIAS.

int main() {
    int num1, num2, num3, num4;
    cout << "Ingrese 4 numeros: ";
    cin >> num1 >> num2 >> num3 >> num4;

    // Declarar punteros
    int *ptr2 = &num2;
    int *ptr3 = &num3;
    int *ptr4 = &num4;

    // Hacer que el cuarto puntero apunte al mismo valor que el tercer puntero
    int *ptrToPtr4 = ptr3;

    // Llamadas a la función factorial con diferentes tipos de pase
    cout << "Factorial de num1 (pase por valor): " << factorial(num1) << endl;
    cout << "Factorial de num2 (puntero): " << factorial(*ptr2) << endl;
    cout << "Factorial de num3 (desreferenciación de puntero): " << factorial(*ptr3) << endl;
    cout << "Factorial de num4 (referencia al puntero): " << factorial(*ptr4) << endl;
    cout << "Factorial de num4 (referencia al puntero que apunta al mismo valor que ptr3): " << factorial(*ptrToPtr4) << endl;

    return 0;
}
