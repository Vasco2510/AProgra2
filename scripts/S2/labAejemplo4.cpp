#include <iostream>
using namespace std;

int main()
{

    char column;
    int row = 0;
    bool validColumn = false;
    bool validRow = false;
    do
    {
        cout <<"Ingrese una columna valida  (A-H): " <<endl;
        cin>>column;
        column = toupper(column); // cómo evitar que me ingresen mas de un caracter??
        cout<<"Ingrese una fila valida (1-8)"<<endl;
        cin >> row;
        
        if (row>8 || row<1) {
            validRow = false; 
            cout << "Error: Fila inválida." << endl;
            }
        else {
            validRow = true;
        }
        
        if (column >= 'A' && column <= 'H')
        {
            validColumn = true;
        }
        else
        {
            validColumn = false;
            cout << "Error: Columna inválida." << endl;
        }
    } while (!validColumn || !validRow); // luego probaremos si podemos usar !validRow || !validColumn, par aver s ifunciona lo mismo
        // Condición de bucle while: La condición (validRow && validColumn) != true es innecesariamente compleja. Es mejor usar !validRow || !validColumn.

    
     // Validación exitosa
    cout << "Columna: " << column << ", Fila: " << row << endl;
    
    // se acabó la validacion, ahora verificaremos si es negro o blanco 
    string casillaColor;
    if (column == 'A' || column == 'C' || column == 'E' || column == 'G')
        {
            if (row % 2 == 0){
                casillaColor = "Blanco";
            }
            else {
                casillaColor = "Negro";
            }
        }
    else { // ya se agarraron las columnas faltantes
        if (row % 2 == 0){
                casillaColor = "Negro";
            }
            else {
                casillaColor = "Blanco";
            }
    };

    cout<<"El color de la casilla es : "<< casillaColor<<endl;
    return 0;
}
